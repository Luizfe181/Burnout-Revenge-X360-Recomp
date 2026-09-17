#include <cstdint>
#include <cstdio>
#include <cstdlib>

extern "C" uint32_t BurnoutPpcLoadU32(
    uint8_t* base,
    uint32_t address)
{
    // Xenos MMIO
    if (address >= 0x7FC80000u &&
        address <  0x7FC90000u)
    {
        const uint32_t reg = address - 0x7FC80000u;

        switch (reg)
        {
        case 0x3C00:
            std::printf(
                "[Xenos MMIO READ32] reg=0x%04X -> 0x00000000\n",
                reg);
            return 0x00000000;

        case 0x3C04:
            std::printf(
                "[Xenos MMIO READ32] reg=0x%04X -> 0x0000000E\n",
                reg);
            return 0x0000000E;

        default:
            std::printf(
                "[Xenos MMIO READ32] UNKNOWN "
                "address=0x%08X reg=0x%04X\n",
                address,
                reg);
            std::abort();
        }
    }

    // RAM normal do guest, big-endian.
    return __builtin_bswap32(
        *reinterpret_cast<volatile uint32_t*>(base + address));
}