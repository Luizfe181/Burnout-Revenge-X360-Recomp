#include <cstdint>
#include <cstdio>

#include "ppc_recomp_shared.h"

PPC_FUNC(__imp__MmGetPhysicalAddress)
{
    PPC_FUNC_PROLOGUE();

    const uint32_t guestAddress = ctx.r3.u32;

    std::printf(
        "[MmGetPhysicalAddress] guest=0x%08X\n",
        guestAddress);

    // Modelo inicial:
    // endereço físico Xbox == endereço guest.
    ctx.r3.u64 = guestAddress;
}