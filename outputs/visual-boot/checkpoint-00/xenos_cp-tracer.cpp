#include <Windows.h>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <atomic>
#include "xenos_cp.h"
extern void BurnoutReportPpcState();
namespace {
uint32_t ring_address, ring_words, read_pointer, writeback_address;
uint32_t registers[0x5000]{};
std::vector<uint32_t> micro_engine;
uint32_t current_packet;
[[noreturn]] void fail(const char* message) {
    std::fprintf(stderr,"[GPU STOP] %s RPTR=%08X\n",message,read_pointer);
    std::fprintf(stderr,"[GPU STOP] packet_address=%08X\n",current_packet);
    BurnoutReportPpcState();
    std::fflush(nullptr); std::exit(5);
}
uint32_t read(uint8_t* base, uint32_t address) {
    MEMORY_BASIC_INFORMATION info{};
    if ((address & 3) || !VirtualQuery(base+address,&info,sizeof(info)) ||
        info.State != MEM_COMMIT || (info.Protect & (PAGE_NOACCESS|PAGE_GUARD)))
        fail("GPU read from invalid/uncommitted memory");
    return __builtin_bswap32(*reinterpret_cast<uint32_t*>(base+address));
}
void reg_write(uint32_t index,uint32_t value) {
    std::printf("[GPU REG] index=%04X value=%08X\n",index,value);
    if(index!=0xA2F && index!=0xA30 && index!=0xA31) fail("unimplemented register semantics");
    registers[index]=value;
    if(index==0xA31) registers[index]|=0x80000000;
}
void trace(uint8_t* base, const std::vector<uint32_t>& words, uint32_t origin, unsigned depth, bool execute) {
    if (depth > 8) fail("IB recursion limit");
    for(size_t i=0;i<words.size();) {
        const uint32_t h=words[i++], type=h>>30;
        current_packet=origin+uint32_t(i-1)*4;
        uint32_t n= !h || type==2 ? 0 : type==1 ? 2 : ((h>>16)&0x3fff)+1;
        std::printf("[GPU PACKET] depth=%u addr=%08X header=%08X type=%u opcode=%02X count=%u data=",
            depth,origin+uint32_t(i-1)*4,h,type,(h>>8)&0x7f,n);
        if(n>words.size()-i) fail("packet exceeds submitted buffer");
        for(uint32_t j=0;j<n;++j) std::printf(" %08X",words[i+j]);
        std::printf("\n");
        if(type==3 && (((h>>8)&0x7f)==0x3f || ((h>>8)&0x7f)==0x37)) {
            if(n!=2 || words[i+1]>0xfffff) fail("invalid IB");
            uint32_t address=words[i]&0x1fffffff, length=words[i+1];
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
void XenosInitialize(uint8_t* base,uint32_t physical,uint32_t size_log2) {
    if(size_log2>26) fail("invalid ring size");
    ring_address=physical; ring_words=(1u<<(size_log2+3))/4; read_pointer=0;
    std::printf("[GPU INIT] ring=%08X bytes=%08X\n",ring_address,ring_words*4);
}
void XenosWriteback(uint32_t address,uint32_t block_log2) {
    writeback_address=address;
    std::printf("[GPU WB] address=%08X block_log2=%u\n",address,block_log2);
}
void XenosSubmit(uint8_t* base,uint32_t wp) {
    if(!ring_words || wp>=ring_words) fail("WPTR outside ring");
    std::printf("[GPU SUBMIT] RPTR=%08X WPTR=%08X ring=%08X\n",read_pointer,wp,ring_address);
    std::vector<uint32_t> words;
    for(uint32_t p=read_pointer;p!=wp;p=(p+1)%ring_words) words.push_back(read(base,ring_address+p*4));
    char setting[2];
    const bool execute=GetEnvironmentVariableA("BURNOUT_GPU_TRACE_ONLY",setting,sizeof(setting))==0;
    if(execute) trace(base,words,ring_address+read_pointer*4,0,false);
    trace(base,words,ring_address+read_pointer*4,0,execute);
    if(!execute) fail("trace-only checkpoint: no commands consumed");
    read_pointer=wp;
    if(writeback_address) {
        read(base,writeback_address); // validate before write
        *reinterpret_cast<uint32_t*>(base+writeback_address)=__builtin_bswap32(read_pointer);
    }
    std::printf("[GPU CONSUMED] RPTR=%08X writeback=%08X\n",read_pointer,writeback_address);
}
