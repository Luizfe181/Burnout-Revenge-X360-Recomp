#include "xenos_cp.h"
#include <cstdint>
#include <cstdio>

#include "ppc_recomp_shared.h"

static uint32_t g_ringBufferPhysical = 0;
extern void XenosEnsureEdram();
extern bool XenosEdramReady();
PPC_FUNC(__imp__VdIsHSIOTrainingSucceeded) {
    ctx.r3.u64=XenosEdramReady()?1:0;
    std::printf("[VdIsHSIOTrainingSucceeded] software EDRAM ready=%u\n",ctx.r3.u32);
}
PPC_FUNC(__imp__VdRetrainEDRAMWorker) {
    XenosEnsureEdram();
    ctx.r3.u64=0;
    std::printf("[VdRetrainEDRAMWorker] software EDRAM ready\n");
}
PPC_FUNC(__imp__VdRetrainEDRAM) {
    XenosEnsureEdram();
    // Return the number/presence of hardware calibration commands still needed.
    // No analog memory interface exists in this backend; leave output buffers
    // intact when returning zero, as the caller only consumes them if nonzero.
    ctx.r3.u64=0;
    std::printf("[VdRetrainEDRAM] no hardware training commands required\n");
}
// Emulated Xenos ASIC identity, matching Xenia's selected revision.
PPC_FUNC(__imp__VdGetGraphicsAsicID) {
    ctx.r3.u64=0x11;
    std::printf("[VdGetGraphicsAsicID] emulated ASIC 0x11 LR=%08llX\n",ctx.lr);
}
static uint32_t g_ringBufferSizeArg = 0;

PPC_FUNC(__imp__VdInitializeRingBuffer)
{
    PPC_FUNC_PROLOGUE();

    const uint32_t physicalAddress = ctx.r3.u32;
    const uint32_t sizeArg = ctx.r4.u32;

    g_ringBufferPhysical = physicalAddress;
    g_ringBufferSizeArg = sizeArg;
    XenosInitialize(base, physicalAddress, sizeArg);

    std::printf(
        "[VdInitializeRingBuffer] physical=0x%08X sizeArg=%u\n",
        physicalAddress,
        sizeArg);

    /*
        Pelo caminho do Burnout:

        ring buffer normal = 0x8000 bytes
        log2(0x8000) = 15
        argumento passado = 15 - 3 = 12
    */

    ctx.r3.u64 = 0;
} 
static uint32_t g_ringBufferReadPtrWriteBack = 0;

PPC_FUNC(__imp__VdEnableRingBufferRPtrWriteBack)
{
    PPC_FUNC_PROLOGUE();

    const uint32_t address = ctx.r3.u32;

    g_ringBufferReadPtrWriteBack = address;
    XenosWriteback(address, ctx.r4.u32);

    std::printf(
        "[VdEnableRingBufferRPtrWriteBack] address=0x%08X\n",
        address);

    ctx.r3.u64 = 0;
}
static uint32_t g_systemCommandBufferGpuIdentifierAddress = 0;

PPC_FUNC(__imp__VdSetSystemCommandBufferGpuIdentifierAddress)
{
    PPC_FUNC_PROLOGUE();

    const uint32_t address = ctx.r3.u32;

    g_systemCommandBufferGpuIdentifierAddress = address;

    std::printf(
        "[VdSetSystemCommandBufferGpuIdentifierAddress] address=0x%08X\n",
        address);

    ctx.r3.u64 = 0;
}
PPC_FUNC(__imp__VdInitializeEngines)
{
    PPC_FUNC_PROLOGUE();

    std::printf(
        "[VdInitializeEngines] "
        "r3=0x%08X callback=0x%08X arg=0x%08X "
        "pfp=0x%08X me=0x%08X\n",
        ctx.r3.u32,
        ctx.r4.u32,
        ctx.r5.u32,
        ctx.r6.u32,
        ctx.r7.u32);

    /*
        O Xenia atualmente trata VdInitializeEngines como stub
        de inicializacao bem-sucedida e retorna 1.

        Ainda nao inicializamos uma GPU real aqui; a parte de
        ring buffer continua sendo tratada separadamente.
    */
    ctx.r3.u64 = 1;
}
static uint32_t g_graphics_interrupt_callback = 0;
static uint32_t g_graphics_interrupt_context = 0;

PPC_FUNC(__imp__VdSetGraphicsInterruptCallback)
{
    PPC_FUNC_PROLOGUE();

    g_graphics_interrupt_callback = ctx.r3.u32;
    g_graphics_interrupt_context = ctx.r4.u32;

    std::printf(
        "[VdSetGraphicsInterruptCallback] "
        "callback=0x%08X context=0x%08X\n",
        g_graphics_interrupt_callback,
        g_graphics_interrupt_context);

    /*
        Por enquanto apenas registramos.
        Não disparamos interrupções gráficas neste estágio.
    */
}  
static void WriteVideoMode(uint8_t* base,uint32_t out) {
    // X_VIDEO_MODE is exactly 48 bytes. A 64-byte clear overwrites the
    // caller's saved r31/LR at sub_82113760 (output at SP+96, frame 160).
    for(uint32_t i=0;i<48;i+=4) PPC_STORE_U32(out+i,0);
    PPC_STORE_U32(out,1280);PPC_STORE_U32(out+4,720);
    PPC_STORE_U32(out+12,1);PPC_STORE_U32(out+16,1);
    PPC_STORE_U32(out+20,0x42700000u); // IEEE-754 60 Hz
    PPC_STORE_U32(out+24,1); // NTSC video standard
    PPC_STORE_U32(out+28,0x4A);PPC_STORE_U32(out+32,1);
}
PPC_FUNC(__imp__VdQueryVideoMode) {
    std::printf("[VdQueryVideoMode] out=%08X bytes=48 1280x720 progressive 60Hz\n",ctx.r3.u32);
    WriteVideoMode(base,ctx.r3.u32);
}
PPC_FUNC(__imp__XGetVideoMode) {
    std::printf("[XGetVideoMode] out=%08X bytes=48 1280x720 progressive 60Hz\n",ctx.r3.u32);
    WriteVideoMode(base,ctx.r3.u32);
}
PPC_FUNC(__imp__VdCallGraphicsNotificationRoutines)
{
    PPC_FUNC_PROLOGUE();

    const uint32_t type = ctx.r3.u32;
    const uint32_t args = ctx.r4.u32;

    uint16_t fb_width  = 0;
    uint16_t fb_height = 0;
    uint16_t bb_width  = 0;
    uint16_t bb_height = 0;

    if (args != 0)
    {
        fb_width  = PPC_LOAD_U16(args + 0);
        fb_height = PPC_LOAD_U16(args + 2);
        bb_width  = PPC_LOAD_U16(args + 4);
        bb_height = PPC_LOAD_U16(args + 6);
    }

    std::printf(
        "[VdCallGraphicsNotificationRoutines] "
        "type=%u args=0x%08X "
        "scale %ux%u -> %ux%u\n",
        type,
        args,
        static_cast<unsigned>(bb_width),
        static_cast<unsigned>(bb_height),
        static_cast<unsigned>(fb_width),
        static_cast<unsigned>(fb_height));

    // O Xbox/Xenia usa type 1 neste caminho.
    // Por enquanto nao precisamos despachar callbacks reais.
    //
    // Xenia tambem retorna 0 nesta implementacao.
    ctx.r3.s64 = 0;
}

PPC_FUNC(__imp__VdEnableDisableClockGating)
{
    std::printf(
        "[VdEnableDisableClockGating] r3=0x%08X r4=0x%08X\n",
        ctx.r3.u32,
        ctx.r4.u32);
    ctx.r3.s64 = 0;
}

PPC_FUNC(__imp__VdGetSystemCommandBuffer)
{
    std::printf(
        "[VdGetSystemCommandBuffer] object=0x%08X size=%u LR=%08llX\n",
        ctx.r3.u32,
        ctx.r4.u32,
        ctx.lr);
    XenosDiagnosticState("VdGetSystemCommandBuffer-before-return");
    ctx.r3.u64 = ctx.r3.u32;
    XenosDiagnosticState("VdGetSystemCommandBuffer-after-return-value");
}

PPC_FUNC(__imp__VdPersistDisplay)
{
    std::printf(
        "[VdPersistDisplay] r3=0x%08X r4=0x%08X\n",
        ctx.r3.u32,
        ctx.r4.u32);
    ctx.r3.s64 = 0;
}

PPC_FUNC(__imp__VdSwap)
{
    std::printf(
        "[GRAPHICS MILESTONE] VdSwap r3=0x%08X r4=0x%08X r5=0x%08X "
        "r6=0x%08X r7=0x%08X r8=0x%08X r9=0x%08X r10=0x%08X LR=%08llX\n",
        ctx.r3.u32,
        ctx.r4.u32,
        ctx.r5.u32,
        ctx.r6.u32,
        ctx.r7.u32,
        ctx.r8.u32,
        ctx.r9.u32,
        ctx.r10.u32,
        ctx.lr);
    XenosDiagnosticState("VdSwap-entry");
    ctx.r3.s64 = 0;
    XenosDiagnosticState("VdSwap-return");
}

PPC_FUNC(__imp__VdGetCurrentDisplayGamma)
{
    std::printf(
        "[VdGetCurrentDisplayGamma] r3=0x%08X r4=0x%08X\n",
        ctx.r3.u32,
        ctx.r4.u32);
    ctx.r3.s64 = 0;
}

PPC_FUNC(__imp__VdSetDisplayMode)
{
    std::printf(
        "[VdSetDisplayMode] r3=0x%08X r4=0x%08X\n",
        ctx.r3.u32,
        ctx.r4.u32);
    ctx.r3.s64 = 0;
}

PPC_FUNC(__imp__VdGetCurrentDisplayInformation)
{
    std::printf(
        "[VdGetCurrentDisplayInformation] r3=0x%08X r4=0x%08X\n",
        ctx.r3.u32,
        ctx.r4.u32);
    ctx.r3.s64 = 0;
}

PPC_FUNC(__imp__KeLockL2)
{
    ctx.r3.s64 = 0;
}

PPC_FUNC(__imp__KeUnlockL2)
{
    ctx.r3.s64 = 0;
}

PPC_FUNC(__imp__VdInitializeScalerCommandBuffer)
{
    std::printf(
        "[VdInitializeScalerCommandBuffer] r3=0x%08X r4=0x%08X\n",
        ctx.r3.u32,
        ctx.r4.u32);
    ctx.r3.s64 = 0;
}

PPC_FUNC(__imp__RtlFillMemoryUlong)
{
    const uint32_t destination = ctx.r3.u32;
    const uint32_t length = ctx.r4.u32;
    const uint32_t value = ctx.r5.u32;
    for (uint32_t offset = 0; offset + 4 <= length; offset += 4)
        PPC_STORE_U32(destination + offset, value);
    ctx.r3.u64 = destination;
}
