#include "xenos_cp.h"
#include <cstdint>
#include <cstdio>
#include <cstdlib>
static const ULONGLONG runtime_start_ms = GetTickCount64();

extern "C" void BurnoutPpcMmStoreU32(uint8_t* base, uint32_t address, uint32_t value)
{
    if (address == 0x7FC80714u) { XenosSubmit(base, value); return; }
    if (address >= 0x7FC80000u && address < 0x7FC90000u)
    {
        const char* name = address == 0x7FC80714u ? "CP_RB_WPTR" : "UNKNOWN";
        std::fprintf(stderr,
            "[Xenos MMIO WRITE32] %s address=0x%08X value=0x%08X: "
            "UNIMPLEMENTED command processor; submission NOT consumed\n",
            name, address, value);
        std::fflush(stderr);
        std::exit(5);
    }
    // Recompiler may conservatively mark RAM stores near an eieio as MMIO.
    *reinterpret_cast<volatile uint32_t*>(base + address) = __builtin_bswap32(value);
}

extern "C" uint32_t BurnoutPpcLoadU32(
    uint8_t* base,
    uint32_t address)
{
    if (address >= 0x70008000 && address < 0x70008018) {
        if(address != 0x70008010) {
            std::fprintf(stderr,"[TIME STOP] unimplemented timestamp field %08X\n",address);
            std::exit(6);
        }
        uint32_t ms=static_cast<uint32_t>(GetTickCount64()-runtime_start_ms);
        *reinterpret_cast<uint32_t*>(base+address)=__builtin_bswap32(ms);
        return ms;
    }
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
