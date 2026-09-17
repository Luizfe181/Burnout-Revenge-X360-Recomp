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
PPC_FUNC(__imp__VdQueryVideoMode)
{
    PPC_FUNC_PROLOGUE();

    const uint32_t out = ctx.r3.u32;

    std::printf(
        "[VdQueryVideoMode] out=0x%08X -> 1280x720 60Hz\n",
        out);

    // X_VIDEO_MODE
    // Zeramos uma área suficientemente grande primeiro.
    for (uint32_t i = 0; i < 0x20; i += 4)
        PPC_STORE_U32(out + i, 0);

    // Campos que conhecemos.
    PPC_STORE_U32(out + 0x00, 1280); // display_width
    PPC_STORE_U32(out + 0x04, 720);  // display_height

    // Não vamos preencher os demais offsets às cegas ainda.
    // O Burnout neste caminho só consome 0x00 e 0x04.

    ctx.r3.s64 = 0;
}
PPC_FUNC(__imp__XGetVideoMode)
{
    PPC_FUNC_PROLOGUE();

    const uint32_t out = ctx.r3.u32;

    std::printf("[XGetVideoMode] out=0x%08X -> 1280x720\n", out);

    // Zera a estrutura primeiro.
    for (uint32_t i = 0; i < 0x40; i += 4)
        PPC_STORE_U32(out + i, 0);

    // Instrumentação inicial.
    //
    // Ainda não estamos afirmando que este é o layout definitivo da
    // X_VIDEO_MODE do Xbox 360. A finalidade agora é permitir que
    // sub_8234D6B0 revele exatamente quais campos ela consome.
    PPC_STORE_U32(out + 0x00, 1280);
    PPC_STORE_U32(out + 0x04, 720);

    ctx.r3.s64 = 0;
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
