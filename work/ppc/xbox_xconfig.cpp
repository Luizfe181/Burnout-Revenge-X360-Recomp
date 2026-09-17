#include <cstdio>
#include <cstdint>

#include "ppc_recomp_shared.h"

PPC_FUNC(__imp__ExGetXConfigSetting)
{
    PPC_FUNC_PROLOGUE();

    const uint16_t category =
        static_cast<uint16_t>(ctx.r3.u32);

    const uint16_t setting =
        static_cast<uint16_t>(ctx.r4.u32);

    const uint32_t buffer =
        ctx.r5.u32;

    const uint16_t buffer_size =
        static_cast<uint16_t>(ctx.r6.u32);

    const uint32_t required_size =
        ctx.r7.u32;

    std::printf(
        "[ExGetXConfigSetting] category=%u setting=%u "
        "buffer=0x%08X size=%u required=0x%08X\n",
        category,
        setting,
        buffer,
        buffer_size,
        required_size);

    // XCONFIG_USER_CATEGORY / XCONFIG_USER_VIDEO_FLAGS
    if (category == 3 && setting == 10)
    {
        constexpr uint32_t video_flags = 0x00040000;

        if (buffer != 0 && buffer_size >= 4)
        {
            PPC_STORE_U32(
                buffer,
                video_flags);
        }

        if (required_size != 0)
        {
            // ExGetXConfigSetting usa WORD* para o tamanho requerido.
            PPC_STORE_U16(
                required_size,
                4);
        }

        // STATUS_SUCCESS
        ctx.r3.u64 = 0;

        std::printf(
            "  -> XCONFIG_USER_VIDEO_FLAGS = 0x%08X\n",
            video_flags);

        return;
    }

    std::printf(
        "  -> configuracao ainda nao implementada\n");

    /*
        Falha para qualquer setting ainda desconhecido.
        Importante: não fingir sucesso.
    */
    ctx.r3.u64 = 1;
}