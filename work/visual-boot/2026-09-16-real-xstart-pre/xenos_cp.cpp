#include <Windows.h>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <atomic>
#include "xenos_cp.h"
extern void BurnoutReportPpcState();
namespace {
uint32_t ring_address, ring_words, read_pointer, writeback_address;
uint32_t registers[0x5003]{};
std::vector<uint32_t> micro_engine;
std::vector<uint32_t> shaders[2];
uint64_t bin_mask=~0ull,bin_select=~0ull;
uint32_t system_mailbox=0;
uint8_t* memory_base=nullptr;
uint32_t draws=0;
std::vector<uint8_t> edram;
uint32_t current_packet;
bool watched_address(uint32_t value) {
    const uint32_t physical=value&0x1fffffffu;
    return (physical>=0x10740000u && physical<0x10800000u) ||
           (physical>=0x10ad8000u && physical<0x10b00000u) ||
           (physical>=0x10e70000u && physical<0x10f00000u);
}
void watch_value(const char* source,uint32_t value) {
    if(watched_address(value))
        std::printf("[GPU WATCH] %s raw=%08X physical=%08X packet=%08X\n",
                    source,value,value&0x1fffffffu,current_packet);
}
uint32_t resolve_gpu_address(uint8_t* base,uint32_t address) {
    auto committed = [&](uint32_t candidate) {
        MEMORY_BASIC_INFORMATION info{};
        return VirtualQuery(base+candidate,&info,sizeof(info)) &&
            info.State==MEM_COMMIT &&
            !(info.Protect&(PAGE_NOACCESS|PAGE_GUARD));
    };
    if(committed(address)) return address;
    if(address<=0x1FFFFFFFu) {
        const uint32_t alias=address|0x20000000u;
        if(committed(alias)) {
            return alias;
        }
    }
    return address;
}
[[noreturn]] void fail(const char* message) {
    std::fprintf(stderr,"[GPU STOP] %s RPTR=%08X\n",message,read_pointer);
    std::fprintf(stderr,"[GPU STOP] packet_address=%08X\n",current_packet);
    BurnoutReportPpcState();
    std::fflush(nullptr); std::exit(5);
}
uint32_t read(uint8_t* base, uint32_t address) {
    address=resolve_gpu_address(base,address);
    MEMORY_BASIC_INFORMATION info{};
    if ((address & 3) || !VirtualQuery(base+address,&info,sizeof(info)) ||
        info.State != MEM_COMMIT || (info.Protect & (PAGE_NOACCESS|PAGE_GUARD)))
        fail("GPU read from invalid/uncommitted memory");
    return __builtin_bswap32(*reinterpret_cast<uint32_t*>(base+address));
}
const char* reg_name(uint32_t index) {
    switch(index) {
#include "xenos_registers.inc"
    default:return nullptr;
    }
}
uint32_t swap(uint32_t value,uint32_t mode) {
    if(mode==1) return ((value&0x00ff00ff)<<8)|((value&0xff00ff00)>>8);
    if(mode==2) return __builtin_bswap32(value);
    if(mode==3) return (value<<16)|(value>>16);
    return value;
}
void gpu_store(uint32_t encoded,uint32_t value) {
    uint32_t address=(encoded&0x1fffffff)&~3u;
    address=resolve_gpu_address(memory_base,address);
    const uint32_t native=swap(value,encoded&3);
    // Physical 0x100 is the CP/driver mailbox, distinct from guest virtual null.
    // Keep it in physical-only storage until a CPU alias is requested.
    if(address==0x100) system_mailbox=native;
    else { read(memory_base,address);*reinterpret_cast<uint32_t*>(memory_base+address)=native; }
    std::printf("[GPU MEMORY] physical=%08X endian=%u value=%08X\n",address,encoded&3,value);
    watch_value("store-address",encoded);
    watch_value("store-value",value);
}
void reg_write(uint32_t index,uint32_t value) {
    const char* name=reg_name(index);
    std::printf("[GPU REG] index=%04X %s value=%08X\n",index,name?name:"UNKNOWN",value);
    if(!name || index>=0x5003) fail("unimplemented register semantics");
    registers[index]=value;
    watch_value(name,value);
    if(index>=0x2318 && index<=0x2323)
        std::printf("[GPU COPY STATE] %s=%08X packet=%08X\n",name,value,current_packet);
    if(index==0xA31) registers[index]|=0x80000000;
    // WAIT_UNTIL with the observed 2D/3D idle mask: all work is synchronous.
    if(index==0x5C8 && value!=0x20000) fail("WAIT_UNTIL flags not implemented");
    if(index>=0x578 && index<=0x57f && (registers[0x1dc]&(1u<<(index-0x578))))
        gpu_store((registers[0x1dd]+4*(index-0x578))|2,value);
}
bool shader_has_no_memory_exports(const std::vector<uint32_t>& code) {
    if(code.empty()) return false;
    // Walk actual CF exec ranges; never classify arbitrary instruction data as CF.
    for(size_t pc=0;pc/2*3+2<code.size();++pc) {
        const auto* w=code.data()+pc/2*3;
        uint32_t lo=pc&1 ? (w[1]>>16)|(w[2]<<16) : w[0];
        uint32_t hi=pc&1 ? w[2]>>16 : w[1]&0xffff;
        uint32_t op=hi>>12;
        if(op==0) continue;
        if(op==12) { if(((hi>>9)&3)==3) return false; continue; }
        if(op!=1 && op!=2) return false;
        uint32_t start=lo&0xfff,count=(lo>>12)&7,sequence=(lo>>16)&0xfff;
        if((start+count)*3>code.size()) return false;
        for(uint32_t j=0;j<count;++j) {
            const auto* ins=code.data()+(start+j)*3;
            if((sequence>>(j*2))&1) { if((ins[0]&31)!=0) return false; }
            else if((ins[0]>>15)&1) {
                uint32_t dest=ins[0]&63;
                if(dest>=32 && dest<=37) return false;
            }
        }
        if(op==2) return true;
    }
    return false;
}
void trace(uint8_t* base, const std::vector<uint32_t>& words, uint32_t origin, unsigned depth, bool execute) {
    if (depth > 8) fail("IB recursion limit");
    for(size_t i=0;i<words.size();) {
        const uint32_t h=words[i++], type=h>>30;
        current_packet=depth ? origin+uint32_t(i-1)*4 : ring_address+((origin-ring_address+uint32_t(i-1)*4)%(ring_words*4));
        uint32_t n= !h || type==2 ? 0 : type==1 ? 2 : ((h>>16)&0x3fff)+1;
        std::printf("[GPU PACKET] depth=%u addr=%08X header=%08X type=%u opcode=%02X count=%u data=",
            depth,current_packet,h,type,(h>>8)&0x7f,n);
        if(n>words.size()-i) fail("packet exceeds submitted buffer");
        for(uint32_t j=0;j<n;++j) std::printf(" %08X",words[i+j]);
        std::printf("\n");
        if(type==3 && (((h>>8)&0x7f)==0x3f || ((h>>8)&0x7f)==0x37)) {
            if(n!=2 || words[i+1]>0xfffff) fail("invalid IB");
            const uint32_t raw_address=words[i];
            const uint32_t physical_address=raw_address&0x1fffffff;
            const uint32_t address=resolve_gpu_address(base,physical_address);
            const uint32_t length=words[i+1];
            std::printf(
                "[GPU IB] parent=%08X raw=0x%08X physical=%08X "
                "guest=0x%08X length=%u\n",
                current_packet,raw_address,physical_address,address,length);
            std::vector<uint32_t> child;
            for(uint32_t k=0;k<length;++k) child.push_back(read(base,address+k*4));
            if(h&1) fail("predicated IB requires bin state");
            trace(base,child,address,depth+1,execute);
        } else if(execute && h && type!=2) {
            const auto* d=words.data()+i;
            if(type==0) {
                for(uint32_t j=0;j<n;++j) reg_write((h&0x7fff)+((h&0x8000)?0:j),d[j]);
            } else if(type==1) {
                reg_write(h&0x7ff,d[0]);reg_write((h>>11)&0x7ff,d[1]);
            } else {
                if(h&1) fail("predication not yet implemented");
                switch((h>>8)&0x7f) {
                case 0x48: micro_engine.assign(d,d+n); break;
                case 0x10: break; // PM4_NOP explicitly consumes its payload.
                case 0x21: {
                    if(n!=3 || (d[0]&0x1fff)>=0x5003) fail("invalid REG_RMW");
                    uint32_t a=(d[0]&0x80000000)?registers[d[1]&0x1fff]:d[1];
                    uint32_t b=(d[0]&0x40000000)?registers[d[2]&0x1fff]:d[2];
                    reg_write(d[0]&0x1fff,(registers[d[0]&0x1fff]&a)|b);break;
                }
                case 0x58:
                    if(n!=3 || (d[0]&0x80000000)) fail("EVENT_WRITE_SHD counter not implemented");
                    std::printf("[GPU EVENT] type=%u address=%08X value=%08X packet=%08X\n",
                                d[0]&0x3f,d[1],d[2],current_packet);
                    reg_write(0x21F9,d[0]&0x3f);gpu_store(d[1],d[2]);break;
                case 0x2b:
                    if(n<2 || d[0]>1 || (d[1]>>16) || n!=2+(d[1]&0xffff)) fail("invalid shader upload");
                    shaders[d[0]].assign(d+2,d+n);
                    std::printf("[GPU SHADER] stage=%u dwords=%u no_memexport=%u\n",d[0],n-2,shader_has_no_memory_exports(shaders[d[0]]));break;
                case 0x50:
                    if(n!=2) fail("invalid SET_BIN_MASK");bin_mask=(uint64_t(d[0])<<32)|d[1];break;
                case 0x36:
                    if(n!=1) fail("immediate indices not implemented");
                    ++draws;
                    std::printf("[GPU DRAW] number=%u initiator=%08X color_mask=%08X depth=%08X\n",draws,d[0],registers[0x2104],registers[0x2200]);
                    if(registers[0x2104]==0 && registers[0x2200]==0 &&
                       shader_has_no_memory_exports(shaders[0]) && shader_has_no_memory_exports(shaders[1])) {
                        std::printf("[GPU DRAW] masked color/depth, no shader memory exports: no framebuffer writes\n");
                        break;
                    }
                    fail("draw requires rendering backend");
                case 0x3c: {
                    if(n!=5 || d[0]!=3 || d[1]!=0xA31) fail("WAIT_REG_MEM mode not implemented");
                    // CPU and this synchronous processor share the same allocation.
                    // No GPU cache exists yet; fence makes all prior stores visible.
                    std::atomic_thread_fence(std::memory_order_seq_cst);
                    registers[0xA31]&=~0x80000000u;
                    std::printf("[GPU COHERENT] base=%08X size=%08X status=%08X\n",registers[0xA30],registers[0xA2F],registers[0xA31]);
                    if((registers[d[1]]&d[3])!=d[2]) fail("WAIT_REG_MEM unsatisfied");
                    break;
                }
                default: fail("unknown/unimplemented PM4 opcode");
                }
            }
        }
        i+=n;
    }
}
}
void XenosEnsureEdram() {
    if(edram.empty()) {
        edram.resize(10*1024*1024);
        std::printf("[GPU EDRAM] allocated 10 MiB; software storage needs no electrical retraining\n");
    }
}
bool XenosEdramReady() { return edram.size()==10*1024*1024; }
void XenosDiagnosticState(const char* reason) {
    std::printf(
        "[GPU SNAPSHOT] reason=%s ring=%08X words=%08X RPTR=%08X WPTR=unlatched "
        "writeback=%08X packet=%08X draws=%u mailbox=%08X\n",
        reason,ring_address,ring_words,read_pointer,writeback_address,current_packet,
        draws,system_mailbox);
    std::printf(
        "[GPU SNAPSHOT] RB_SURFACE_INFO=%08X RB_COLOR_INFO=%08X RB_COLOR_MASK=%08X "
        "RB_DEPTH_INFO=%08X RB_DEPTHCONTROL=%08X\n",
        registers[0x2000],registers[0x2001],registers[0x2104],
        registers[0x2002],registers[0x2200]);
    std::printf(
        "[GPU SNAPSHOT] RB_COPY_CONTROL=%08X RB_COPY_DEST_BASE=%08X "
        "RB_COPY_DEST_PITCH=%08X RB_COPY_DEST_INFO=%08X EVENT=%08X\n",
        registers[0x2318],registers[0x2319],registers[0x231a],
        registers[0x231b],registers[0x21f9]);
}
void XenosInitialize(uint8_t* base,uint32_t physical,uint32_t size_log2) {
    if(size_log2>26) fail("invalid ring size");
    ring_address=physical; ring_words=(1u<<(size_log2+3))/4; read_pointer=0;
    memory_base=base;
    std::printf("[GPU INIT] ring=%08X bytes=%08X\n",ring_address,ring_words*4);
}
void XenosWriteback(uint32_t address,uint32_t block_log2) {
    writeback_address=address;
    std::printf("[GPU WB] address=%08X block_log2=%u\n",address,block_log2);
}
void XenosSubmit(uint8_t* base,uint32_t wp) {
    if(!ring_words || wp>=ring_words) fail("WPTR outside ring");
    std::printf("[GPU SUBMIT] RPTR=%08X WPTR=%08X ring=%08X\n",
                read_pointer,wp,ring_address);
    std::vector<uint32_t> words;
    for(uint32_t p=read_pointer;p!=wp;p=(p+1)%ring_words) words.push_back(read(base,ring_address+p*4));
    char setting[2];
    const bool execute=GetEnvironmentVariableA("BURNOUT_GPU_TRACE_ONLY",setting,sizeof(setting))==0;
    if(execute) trace(base,words,ring_address+read_pointer*4,0,false);
    trace(base,words,ring_address+read_pointer*4,0,execute);
    if(!execute) fail("trace-only checkpoint: no commands consumed");
    read_pointer=wp;
    if(writeback_address) {
        const uint32_t writeback=resolve_gpu_address(base,writeback_address);
        read(base,writeback); // validate before write
        *reinterpret_cast<uint32_t*>(base+writeback)=__builtin_bswap32(read_pointer);
    }
    std::printf("[GPU CONSUMED] RPTR=%08X writeback=%08X\n",read_pointer,writeback_address);
}
