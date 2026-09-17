#include <cstdio>

#include "ppc_recomp_shared.h"

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

// -----------------------------------------------------------------------------
// Thread stubs - fase inicial do boot.
// As threads guest são registradas, mas ainda NÃO são executadas.
// -----------------------------------------------------------------------------

static uint32_t g_next_fake_thread_handle = 0x00001000;
static uint32_t g_next_fake_thread_id = 2; // a thread principal do harness usa ID 1

PPC_FUNC(__imp__ExCreateThread)
{
    PPC_FUNC_PROLOGUE();

    const uint32_t handle_out       = ctx.r3.u32;
    const uint32_t stack_size       = ctx.r4.u32;
    const uint32_t thread_id_out    = ctx.r5.u32;
    const uint32_t xapi_startup     = ctx.r6.u32;
    const uint32_t start_address    = ctx.r7.u32;
    const uint32_t start_context    = ctx.r8.u32;
    const uint32_t creation_flags   = ctx.r9.u32;

    const uint32_t handle = g_next_fake_thread_handle;
    const uint32_t thread_id = g_next_fake_thread_id++;

    g_next_fake_thread_handle += 4;

    if (handle_out)
        PPC_STORE_U32(handle_out, handle);

    if (thread_id_out)
        PPC_STORE_U32(thread_id_out, thread_id);

    std::printf(
        "[ExCreateThread] handle=0x%08X id=%u "
        "stack=0x%X startup=0x%08X start=0x%08X "
        "context=0x%08X flags=0x%08X "
        "(NAO EXECUTADA)\n",
        handle,
        thread_id,
        stack_size,
        xapi_startup,
        start_address,
        start_context,
        creation_flags);

    // STATUS_SUCCESS
    ctx.r3.s64 = 0;
}


PPC_FUNC(__imp__KeSetBasePriorityThread)
{
    PPC_FUNC_PROLOGUE();

    const uint32_t thread = ctx.r3.u32;
    const int32_t priority = ctx.r4.s32;

    std::printf(
        "[KeSetBasePriorityThread] "
        "thread=0x%08X priority=%d\n",
        thread,
        priority);

    // O Burnout não usa o retorno neste caminho.
    // Provisoriamente, prioridade anterior = 0.
    ctx.r3.s64 = 0;
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
