#include <cstdio>

#include "ppc_recomp_shared.h"
bool BurnoutFullBoot=false;

PPC_FUNC(__imp__KiApcNormalRoutineNop)
{
    PPC_FUNC_PROLOGUE();

    std::printf(
        "[KiApcNormalRoutineNop] r3=0x%08X r4=0x%08X\n",
        ctx.r3.u32,
        ctx.r4.u32);

    // Primeira implementação:
    // o código observado não testa valor de retorno desta chamada.
}
PPC_FUNC(__imp__KeGetCurrentProcessType)
{
    PPC_FUNC_PROLOGUE();

    constexpr uint32_t X_PROCTYPE_USER = 1;

    ctx.r3.u64 = X_PROCTYPE_USER;

    std::printf(
        "[KeGetCurrentProcessType] -> %u (USER)\n",
        ctx.r3.u32);
}
PPC_FUNC(__imp__ExRegisterTitleTerminateNotification)
{
    PPC_FUNC_PROLOGUE();

    const uint32_t registration = ctx.r3.u32;
    const uint32_t create = ctx.r4.u32;

    /*
        X_EX_TITLE_TERMINATE_REGISTRATION:

        +0x00 notification_routine
        +0x04 priority

        Aqui só registramos/logamos por enquanto.
        O graphics init não usa retorno desta função.
    */

    uint32_t routine = 0;
    uint32_t priority = 0;

    if (registration != 0)
    {
        routine = PPC_LOAD_U32(registration + 0x00);
        priority = PPC_LOAD_U32(registration + 0x04);
    }

    std::printf(
        "[ExRegisterTitleTerminateNotification] "
        "registration=0x%08X create=%u "
        "routine=0x%08X priority=0x%08X\n",
        registration,
        create,
        routine,
        priority);

    /*
        Não chamamos a rotina aqui.
        O registro só será necessário quando implementarmos
        encerramento real do título.
    */
}

// Xbox 360 timebase / performance counter runs at 50 MHz.
PPC_FUNC(__imp__KeQueryPerformanceFrequency) { ctx.r3.u64 = 50000000; std::printf("[KeQueryPerformanceFrequency] 50000000 Hz LR=%08llX\n", ctx.lr); }
extern "C" unsigned long long BurnoutReadTimebase() {
    LARGE_INTEGER now{}, frequency{};
    if(!QueryPerformanceCounter(&now) || !QueryPerformanceFrequency(&frequency) || frequency.QuadPart<=0)
        std::exit(6);
    const auto t=static_cast<unsigned long long>(now.QuadPart);
    const auto f=static_cast<unsigned long long>(frequency.QuadPart);
    return (t/f)*50000000ull+(t%f)*50000000ull/f;
}

PPC_FUNC(__imp__KeEnterCriticalRegion) {
    uint32_t thread=PPC_LOAD_U32(ctx.r13.u32+0x100);
    int32_t count=static_cast<int32_t>(PPC_LOAD_U32(thread+0xB0));
    if(count==INT32_MIN) { std::fprintf(stderr,"APC disable count overflow\n");std::exit(6); }
    PPC_STORE_U32(thread+0xB0,static_cast<uint32_t>(count-1));
    std::printf("[KeEnterCriticalRegion] thread=%08X APC disable=%d\n",thread,count-1);
}
PPC_FUNC(__imp__KeLeaveCriticalRegion) {
    uint32_t thread=PPC_LOAD_U32(ctx.r13.u32+0x100);
    int32_t count=static_cast<int32_t>(PPC_LOAD_U32(thread+0xB0));
    if(count>=0) { std::fprintf(stderr,"Unbalanced critical region\n");std::exit(6); }
    PPC_STORE_U32(thread+0xB0,static_cast<uint32_t>(count+1));
    std::printf("[KeLeaveCriticalRegion] thread=%08X APC disable=%d; no queued APCs\n",thread,count+1);
}

// Dynamic TLS slots from this title's XEX header (64, no static template).
#include <mutex>
static std::mutex tls_mutex;
static bool tls_used[64]{};
PPC_FUNC(__imp__KeTlsAlloc) {
    std::lock_guard<std::mutex> guard(tls_mutex);
    for(uint32_t i=0;i<64;++i) if(!tls_used[i]) {
        tls_used[i]=true;
        PPC_STORE_U32(PPC_LOAD_U32(ctx.r13.u32)+i*4,0);
        ctx.r3.u64=i;
        std::printf("[KeTlsAlloc] slot=%u KPCR=%08X\n",i,ctx.r13.u32);
        return;
    }
    ctx.r3.u64=0xffffffffu;
}
PPC_FUNC(__imp__KeTlsFree) {
    std::lock_guard<std::mutex> guard(tls_mutex);
    uint32_t i=ctx.r3.u32;
    if(i>=64 || !tls_used[i]) {ctx.r3.u64=0;return;}
    tls_used[i]=false;ctx.r3.u64=1;
}
PPC_FUNC(__imp__KeTlsGetValue) {
    uint32_t i=ctx.r3.u32;
    ctx.r3.u64=i<64?PPC_LOAD_U32(PPC_LOAD_U32(ctx.r13.u32)+i*4):0;
}
PPC_FUNC(__imp__KeTlsSetValue) {
    uint32_t i=ctx.r3.u32;
    if(i>=64) {ctx.r3.u64=0;return;}
    PPC_STORE_U32(PPC_LOAD_U32(ctx.r13.u32)+i*4,ctx.r4.u32);
    ctx.r3.u64=1;
}
PPC_FUNC(__imp__KeQuerySystemTime) {
    FILETIME t{}; GetSystemTimeAsFileTime(&t);
    uint64_t ticks=(uint64_t(t.dwHighDateTime)<<32)|t.dwLowDateTime;
    if(ctx.r3.u32) PPC_STORE_U64(ctx.r3.u32,ticks);
    std::printf("[KeQuerySystemTime] ticks=%llu destination=%08X\n",ticks,ctx.r3.u32);
}
PPC_FUNC(__imp__XexCheckExecutablePrivilege) {
    // This title's decrypted XEX optional header 0x00030000 is 0x00000204.
    // The argument is a bit index, not a mask (Xenia xboxkrnl_modules.cc).
    constexpr uint32_t system_flags=0x204;
    uint32_t privilege=ctx.r3.u32;
    ctx.r3.u64=privilege<32 && ((system_flags>>privilege)&1);
    std::printf("[XexCheckExecutablePrivilege] bit=%u flags=%08X result=%u\n",privilege,system_flags,ctx.r3.u32);
}
PPC_FUNC(__imp__KeEnableFpuExceptions) {
    if(ctx.r3.u32) {
        std::fprintf(stderr,"[FPU STOP] guest requests enabled floating-point traps; PPC exception delivery required\n");
        extern void BurnoutReportPpcState();BurnoutReportPpcState();std::exit(6);
    }
    // Generated floating point uses SSE. Mask all host traps while preserving
    // rounding, FTZ/DAZ and accrued exception flags; keep the context in sync.
    ctx.fpscr.csr=_mm_getcsr()|0x1f80u;
    _mm_setcsr(ctx.fpscr.csr);
    std::printf("[KeEnableFpuExceptions] disabled; MXCSR=%08X\n",ctx.fpscr.csr);
}

#include <unordered_map>
#include <memory>
struct BurnoutKernelObject {
    HANDLE native=nullptr;
    uint32_t guest=0;
    enum Kind { Semaphore, Thread } kind;
    uint8_t* base=nullptr;
    uint32_t id=0,pcr=0,stack=0,stack_size=0,startup=0,entry=0,argument=0;
    uint32_t suspend_count=0;
    int32_t priority=0;
    bool started=false,terminated=false;
    std::unique_ptr<PPCContext> context;
    ~BurnoutKernelObject() { if(native) CloseHandle(native); }
};
static std::mutex objects_mutex;
static std::unordered_map<uint32_t,std::shared_ptr<BurnoutKernelObject>> kernel_objects;
static uint32_t next_object_handle=0x20000;
static uint32_t next_object_memory=0x70100000;
static uint32_t next_thread_stack=0x73000000,next_thread_id=2;
static std::unordered_map<uint32_t,std::pair<std::shared_ptr<BurnoutKernelObject>,uint32_t>> object_references;
static std::shared_ptr<BurnoutKernelObject> FindKernelObject(uint32_t h) {
    std::lock_guard<std::mutex> guard(objects_mutex);
    auto it=kernel_objects.find(h);return it==kernel_objects.end()?nullptr:it->second;
}
PPC_FUNC(__imp__NtCreateSemaphore) {
    const uint32_t out=ctx.r3.u32,attrs=ctx.r4.u32;
    const int32_t count=ctx.r5.s32,limit=ctx.r6.s32;
    std::printf("[NtCreateSemaphore] out=%08X attrs=%08X count=%d limit=%d\n",out,attrs,count,limit);
    if(attrs) {std::fprintf(stderr,"[OBJECT STOP] named semaphore attributes need decoding\n");std::exit(6);}
    if(!out || count<0 || limit<=0 || count>limit) {ctx.r3.u64=0xC000000D;return;}
    HANDLE native=CreateSemaphoreW(nullptr,count,limit,nullptr);
    if(!native) {ctx.r3.u64=0xC0000017;return;}
    auto object=std::make_shared<BurnoutKernelObject>();object->native=native;object->kind=BurnoutKernelObject::Semaphore;
    uint32_t h;
    {std::lock_guard<std::mutex> guard(objects_mutex);h=next_object_handle;next_object_handle+=4;kernel_objects.emplace(h,object);}
    {
        std::lock_guard<std::mutex> guard(objects_mutex);
        uint32_t allocation=next_object_memory;next_object_memory+=0x1000;
        if(next_object_memory>0x71000000 || !VirtualAlloc(base+allocation,0x1000,MEM_COMMIT,PAGE_READWRITE)) std::exit(6);
        object->guest=allocation+0x18;
        PPC_STORE_U32(allocation,1);PPC_STORE_U32(allocation+4,1);
        PPC_STORE_U32(allocation+0x10,0x7000A000u);
        PPC_STORE_U8(object->guest,5);PPC_STORE_U8(object->guest+2,5);
        PPC_STORE_U32(object->guest+4,count);
        PPC_STORE_U32(object->guest+8,object->guest+8);PPC_STORE_U32(object->guest+12,object->guest+8);
        PPC_STORE_U32(object->guest+16,limit);
    }
    PPC_STORE_U32(out,h);ctx.r3.u64=0;
    std::printf("[OBJECT] semaphore handle=%08X\n",h);
}
PPC_FUNC(__imp__NtReleaseSemaphore) {
    auto object=FindKernelObject(ctx.r3.u32);
    if(!object || object->kind!=BurnoutKernelObject::Semaphore) {ctx.r3.u64=0xC0000008;return;}
    LONG previous=0;
    if(!ReleaseSemaphore(object->native,ctx.r4.s32,&previous)) {ctx.r3.u64=ctx.r4.s32<=0?0xC000000D:0xC0000047;return;}
    if(ctx.r5.u32) PPC_STORE_U32(ctx.r5.u32,previous);
    ctx.r3.u64=0;
}
PPC_FUNC(__imp__NtClose) {
    std::lock_guard<std::mutex> guard(objects_mutex);
    auto it=kernel_objects.find(ctx.r3.u32);
    if(it==kernel_objects.end()) {ctx.r3.u64=0xC0000008;return;}
    const auto g=it->second->guest;
    PPC_STORE_U32(g-0x18,PPC_LOAD_U32(g-0x18)-1);
    PPC_STORE_U32(g-0x14,PPC_LOAD_U32(g-0x14)-1);
    kernel_objects.erase(it);ctx.r3.u64=0;
}
PPC_FUNC(__imp__NtWaitForSingleObjectEx) {
    auto object=FindKernelObject(ctx.r3.u32);
    if(!object) {ctx.r3.u64=0xC0000008;return;}
    DWORD timeout=INFINITE;
    if(ctx.r6.u32) {
        int64_t t=static_cast<int64_t>(PPC_LOAD_U64(ctx.r6.u32));
        uint64_t duration;
        if(t<=0) duration=uint64_t(-(t+1))+1;
        else {FILETIME ft;GetSystemTimeAsFileTime(&ft);uint64_t now=(uint64_t(ft.dwHighDateTime)<<32)|ft.dwLowDateTime;duration=uint64_t(t)>now?uint64_t(t)-now:0;}
        timeout=static_cast<DWORD>(std::min<uint64_t>((duration+9999)/10000,0xfffffffe));
    }
    std::printf("[NtWaitForSingleObjectEx] handle=%08X timeout_ms=%lu alertable=%u\n",ctx.r3.u32,timeout,ctx.r5.u32);
    // No guest APC can be queued yet: the corresponding imports stop explicitly.
    DWORD result=WaitForSingleObject(object->native,timeout);
    ctx.r3.u64=result==WAIT_OBJECT_0?0:result==WAIT_TIMEOUT?0x102:result==WAIT_ABANDONED?0x80:0xC0000008;
}
PPC_FUNC(__imp__ObReferenceObjectByHandle) {
    auto object=FindKernelObject(ctx.r3.u32);
    if(!object) {ctx.r3.u64=0xC0000008;return;}
    if(ctx.r4.u32 && ctx.r4.u32!=(object->kind==BurnoutKernelObject::Thread?0x7000B000u:0x7000A000u)) {ctx.r3.u64=0xC0000024;return;}
    std::lock_guard<std::mutex> guard(objects_mutex);
    auto& ref=object_references[object->guest];ref.first=object;++ref.second;
    PPC_STORE_U32(object->guest-0x18,PPC_LOAD_U32(object->guest-0x18)+1);
    if(ctx.r5.u32) PPC_STORE_U32(ctx.r5.u32,object->guest);
    std::printf("[ObReferenceObjectByHandle] handle=%08X guest=%08X references=%u\n",ctx.r3.u32,object->guest,ref.second);
    ctx.r3.u64=0;
}
PPC_FUNC(__imp__ObDereferenceObject) {
    std::lock_guard<std::mutex> guard(objects_mutex);
    auto it=object_references.find(ctx.r3.u32);
    if(it==object_references.end()) {std::fprintf(stderr,"[OBJECT STOP] unbalanced dereference %08X\n",ctx.r3.u32);std::exit(6);}
    PPC_STORE_U32(ctx.r3.u32-0x18,PPC_LOAD_U32(ctx.r3.u32-0x18)-1);
    if(--it->second.second==0) object_references.erase(it);
    ctx.r3.u64=0;
}

extern void BurnoutCallIndirect(PPCContext&,unsigned char*,unsigned int);
extern void BurnoutSetThreadContext(PPCContext*,uint32_t,uint32_t,uint32_t);
extern void BurnoutReportPpcState();
struct GuestThreadExit { uint32_t code; };
static thread_local BurnoutKernelObject* current_worker=nullptr;
static std::shared_ptr<BurnoutKernelObject> FindGuestObject(uint32_t guest) {
    std::lock_guard<std::mutex> guard(objects_mutex);
    for(auto& item:kernel_objects) if(item.second->guest==guest) return item.second;
    auto it=object_references.find(guest);
    return it==object_references.end()?nullptr:it->second.first;
}
static DWORD WINAPI RunGuestWorker(void* parameter) {
    std::unique_ptr<std::shared_ptr<BurnoutKernelObject>> holder(static_cast<std::shared_ptr<BurnoutKernelObject>*>(parameter));
    auto object=*holder;holder.reset();
    auto& ctx=*object->context;auto* base=object->base;
    current_worker=object.get();
    BurnoutSetThreadContext(&ctx,object->id,object->entry,object->startup);
    _mm_setcsr(ctx.fpscr.csr);
    {std::lock_guard<std::mutex> guard(objects_mutex);object->started=true;}
    std::printf("[THREAD START] id=%u startup=%08X worker=%08X KPCR=%08X TLS=%08X SP=%08X LR=%08llX r3=%08X r4=%08X\n",object->id,object->startup,object->entry,ctx.r13.u32,PPC_LOAD_U32(ctx.r13.u32),ctx.r1.u32,ctx.lr,ctx.r3.u32,ctx.r4.u32);
    uint32_t result=0;
    try {
        BurnoutCallIndirect(ctx,base,object->startup?object->startup:object->entry);
        result=ctx.r3.u32;
    } catch(const GuestThreadExit& exit) {result=exit.code;}
    catch(...) {std::fprintf(stderr,"[THREAD STOP] unexpected host exception id=%u\n",object->id);BurnoutReportPpcState();std::exit(6);}
    {
        std::lock_guard<std::mutex> guard(objects_mutex);
        object->terminated=true;
        PPC_STORE_U32(object->guest+0x140,result);
        PPC_STORE_U32(object->guest+4,1);
        FILETIME ft{};GetSystemTimeAsFileTime(&ft);
        PPC_STORE_U64(object->guest+0x138,(uint64_t(ft.dwHighDateTime)<<32)|ft.dwLowDateTime);
    }
    std::printf("[THREAD TERMINATED] id=%u worker=%08X result=%08X LR=%08llX\n",object->id,object->entry,result,ctx.lr);
    current_worker=nullptr;
    return result;
}
PPC_FUNC(__imp__ExCreateThread) {
    uint32_t out=ctx.r3.u32,id_out=ctx.r5.u32,flags=ctx.r9.u32;
    uint32_t size=ctx.r4.u32?ctx.r4.u32:0x40000; // XEX default stack size.
    if(size>0x1000000 || (flags&~0x3f000081u)) {
        std::fprintf(stderr,"[THREAD STOP] unsupported creation size=%08X flags=%08X\n",size,flags);BurnoutReportPpcState();std::exit(6);
    }
    size=std::max<uint32_t>(0x4000u,(size+0xfff)&~0xfffu);
    auto object=std::make_shared<BurnoutKernelObject>();
    object->kind=BurnoutKernelObject::Thread;object->base=base;object->stack_size=size;
    object->startup=ctx.r6.u32;object->entry=ctx.r7.u32;object->argument=ctx.r8.u32;
    object->suspend_count=(flags&1)?1:0;
    object->context=std::make_unique<PPCContext>();
    uint32_t handle,allocation,stack;
    {
        std::lock_guard<std::mutex> guard(objects_mutex);
        handle=next_object_handle;next_object_handle+=4;
        allocation=next_object_memory;next_object_memory+=0x3000;
        stack=next_thread_stack;next_thread_stack+=size+0x2000;
        object->id=next_thread_id++;
    }
    if(uint64_t(allocation)+0x3000>0x71000000 || uint64_t(stack)+size+0x2000>0x7e000000 ||
       !VirtualAlloc(base+allocation,0x3000,MEM_COMMIT,PAGE_READWRITE) ||
       !VirtualAlloc(base+stack+0x1000,size,MEM_COMMIT,PAGE_READWRITE)) {
        ctx.r3.u64=0xC0000017;return;
    }
    object->guest=allocation+0x18;object->pcr=allocation+0x1000;object->stack=stack+0x1000;
    const uint32_t g=object->guest,pcr=object->pcr,tls=allocation+0x2000,top=object->stack+size;
    PPC_STORE_U32(allocation,1);PPC_STORE_U32(allocation+4,1);PPC_STORE_U32(g-8,0x7000B000u);
    PPC_STORE_U8(g,6);PPC_STORE_U8(g+0xBC,object->suspend_count);
    PPC_STORE_U32(g+8,g+8);PPC_STORE_U32(g+12,g+8);
    PPC_STORE_U32(g+0x5C,top);PPC_STORE_U32(g+0x60,object->stack);PPC_STORE_U32(g+0x68,tls);
    PPC_STORE_U32(g+0xD0,stack);PPC_STORE_U32(g+0x14C,object->id);PPC_STORE_U32(g+0x150,object->entry);
    PPC_STORE_U32(g+0x140,0x103);PPC_STORE_U32(g+0x16C,flags);
    FILETIME ft{};GetSystemTimeAsFileTime(&ft);PPC_STORE_U64(g+0x130,(uint64_t(ft.dwHighDateTime)<<32)|ft.dwLowDateTime);
    PPC_STORE_U32(pcr,tls);PPC_STORE_U32(pcr+0x30,pcr);PPC_STORE_U32(pcr+0x70,top);PPC_STORE_U32(pcr+0x74,object->stack);PPC_STORE_U32(pcr+0x100,g);
    uint32_t affinity=flags>>24;unsigned cpu=0;
    if(affinity) {if(affinity&(affinity-1)) {std::fprintf(stderr,"[THREAD STOP] multi-bit creation affinity\n");std::exit(6);}while(!(affinity&(1u<<cpu))) ++cpu;}
    PPC_STORE_U8(pcr+0x10C,cpu);PPC_STORE_U8(g+0xBF,cpu);
    auto& worker=*object->context;
    worker.r1.u64=top-0x100;worker.r13.u64=pcr;worker.msr=ctx.msr;
    worker.fpscr.csr=ctx.fpscr.csr|0x1f80u;
    worker.r3.u64=object->startup?object->entry:object->argument;
    worker.r4.u64=object->startup?object->argument:0;
    auto* parameter=new std::shared_ptr<BurnoutKernelObject>(object);
    object->native=CreateThread(nullptr,16*1024*1024,RunGuestWorker,parameter,CREATE_SUSPENDED|STACK_SIZE_PARAM_IS_A_RESERVATION,nullptr);
    if(!object->native) {delete parameter;ctx.r3.u64=0xC0000017;return;}
    {std::lock_guard<std::mutex> guard(objects_mutex);kernel_objects.emplace(handle,object);}
    if(out) PPC_STORE_U32(out,(flags&0x80)?g:handle);
    if(id_out) PPC_STORE_U32(id_out,object->id);
    std::printf("[THREAD CREATED] id=%u handle=%08X object=%08X startup=%08X worker=%08X argument=%08X suspended=%u stack=[%08X,%08X)\n",object->id,handle,g,object->startup,object->entry,object->argument,object->suspend_count,object->stack,top);
    if(!object->suspend_count && ResumeThread(object->native)==DWORD(-1)) {std::fprintf(stderr,"[THREAD STOP] host initial resume failed\n");std::exit(6);}
    ctx.r3.u64=0;
}
PPC_FUNC(__imp__NtResumeThread) {
    auto object=FindKernelObject(ctx.r3.u32);
    if(!object || object->kind!=BurnoutKernelObject::Thread) {ctx.r3.u64=0xC0000008;return;}
    std::lock_guard<std::mutex> guard(objects_mutex);
    uint32_t previous=object->suspend_count;
    if(previous) {
        --object->suspend_count;PPC_STORE_U8(object->guest+0xBC,object->suspend_count);
        if(ResumeThread(object->native)==DWORD(-1)) {std::fprintf(stderr,"[THREAD STOP] host resume failed\n");std::exit(6);}
    }
    if(ctx.r4.u32) PPC_STORE_U32(ctx.r4.u32,previous);
    std::printf("[THREAD RESUME] id=%u worker=%08X previous=%u remaining=%u caller_LR=%08llX\n",object->id,object->entry,previous,object->suspend_count,ctx.lr);
    ctx.r3.u64=0;
}
PPC_FUNC(__imp__ExTerminateThread) {
    if(!current_worker) {std::fprintf(stderr,"[THREAD STOP] main thread termination requires process lifetime handling\n");BurnoutReportPpcState();std::exit(6);}
    throw GuestThreadExit{ctx.r3.u32};
}
PPC_FUNC(__imp__KeSetBasePriorityThread) {
    auto object=FindGuestObject(ctx.r3.u32);
    if(!object || object->kind!=BurnoutKernelObject::Thread) {std::fprintf(stderr,"[THREAD STOP] unknown priority target=%08X\n",ctx.r3.u32);BurnoutReportPpcState();std::exit(6);}
    std::lock_guard<std::mutex> guard(objects_mutex);
    int32_t previous=object->priority;object->priority=ctx.r4.s32;
    // Guest priority is retained; host scheduling policy remains normal initially.
    std::printf("[THREAD PRIORITY] id=%u increment=%d previous=%d\n",object->id,object->priority,previous);
    ctx.r3.s64=previous;
}
PPC_FUNC(__imp__KeQueryBasePriorityThread) {
    auto object=FindGuestObject(ctx.r3.u32);
    if(!object || object->kind!=BurnoutKernelObject::Thread) {std::fprintf(stderr,"[THREAD STOP] unknown priority query\n");std::exit(6);}
    std::lock_guard<std::mutex> guard(objects_mutex);ctx.r3.s64=object->priority;
}
PPC_FUNC(__imp__KeSetAffinityThread) {
    auto object=FindGuestObject(ctx.r3.u32);
    uint32_t mask=ctx.r4.u32;
    if(!object || object->kind!=BurnoutKernelObject::Thread || !mask || (mask&~63u) || (mask&(mask-1))) {std::fprintf(stderr,"[THREAD STOP] affinity object=%08X mask=%08X\n",ctx.r3.u32,mask);BurnoutReportPpcState();std::exit(6);}
    std::lock_guard<std::mutex> guard(objects_mutex);
    unsigned previous=PPC_LOAD_U8(object->pcr+0x10C),cpu=0;while(!(mask&(1u<<cpu))) ++cpu;
    PPC_STORE_U8(object->pcr+0x10C,cpu);PPC_STORE_U8(object->guest+0xBF,cpu);
    std::printf("[THREAD AFFINITY] id=%u logical_cpu=%u previous=%u\n",object->id,cpu,previous);
    if(ctx.r5.u32) PPC_STORE_U32(ctx.r5.u32,1u<<previous);
    ctx.r3.u64=0;
}
