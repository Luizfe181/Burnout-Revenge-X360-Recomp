#include <cstdio>
#include <cstdlib>
#include "ppc_recomp_shared.h"

static void probe(const char* name, PPCContext& ctx)
{
    std::printf(
        "\n[PROBE] import ainda nao implementado: %s\n"
        "        r3=0x%08X r4=0x%08X r5=0x%08X r6=0x%08X\n",
        name,
        ctx.r3.u32,
        ctx.r4.u32,
        ctx.r5.u32,
        ctx.r6.u32
    );

    std::printf("        LR=0x%08llX CTR=0x%08X r1=0x%08X\n",ctx.lr,ctx.ctr.u32,ctx.r1.u32);
    std::fflush(stdout);
    std::exit(6);
}

#define PROBE_IMPORT(name) \
    PPC_FUNC(name)         \
    {                      \
        PPC_FUNC_PROLOGUE(); \
        probe(#name, ctx); \
    }


PROBE_IMPORT(__imp__KfAcquireSpinLock)
PROBE_IMPORT(__imp__KfReleaseSpinLock)

PROBE_IMPORT(__imp___vsnprintf)
PROBE_IMPORT(__imp__DbgPrint)
PROBE_IMPORT(__imp__sprintf)

PROBE_IMPORT(__imp__KeBugCheck)
PROBE_IMPORT(__imp__KeBugCheckEx)

PROBE_IMPORT(__imp__MmQueryAllocationSize)

//PROBE_IMPORT(__imp__NtAllocateVirtualMemory)
PROBE_IMPORT(__imp__NtFreeVirtualMemory)
PROBE_IMPORT(__imp__NtQueryVirtualMemory)
PROBE_IMPORT(__imp__RtlImageXexHeaderField)
PROBE_IMPORT(__imp__RtlCompareMemoryUlong)
PROBE_IMPORT(__imp__RtlRaiseException)
PROBE_IMPORT(__imp__RtlInitAnsiString)
PROBE_IMPORT(__imp__VdInitializeEDRAM)
PROBE_IMPORT(__imp__VdQueryVideoFlags)
//PROBE_IMPORT(__imp__VdCallGraphicsNotificationRoutines)

PROBE_IMPORT(__imp__VdShutdownEngines)
PROBE_IMPORT(__imp__KeSetEvent)
PROBE_IMPORT(__imp__KeWaitForSingleObject)
