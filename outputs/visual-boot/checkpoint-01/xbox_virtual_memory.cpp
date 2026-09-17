#include <windows.h>
#include <cstdint>
#include <cstdio>
#include <unordered_map>

#include "ppc_recomp_shared.h"

// Região provisória separada para virtual allocations.
// Depois podemos integrar isso ao gerenciador geral de memória.
static uint32_t g_next_virtual_address = 0x30000000u;

struct VirtualReservation
{
    uint32_t base;
    uint32_t size;
};

static std::unordered_map<uint32_t, VirtualReservation> g_virtual_reservations;

static uint32_t align_up(uint32_t value, uint32_t alignment)
{
    return (value + alignment - 1) & ~(alignment - 1);
}

PPC_FUNC(__imp__NtAllocateVirtualMemory)
{
    PPC_FUNC_PROLOGUE();

    const uint32_t base_ptr = ctx.r3.u32;
    const uint32_t size_ptr = ctx.r4.u32;
    const uint32_t allocation_type = ctx.r5.u32;
    const uint32_t protect = ctx.r6.u32;
    const uint32_t unknown = ctx.r7.u32;

    if (!base_ptr || !size_ptr)
    {
        std::printf(
            "[NtAllocateVirtualMemory] parametro invalido "
            "base_ptr=0x%08X size_ptr=0x%08X\n",
            base_ptr,
            size_ptr);

        ctx.r3.u64 = 0xC000000Du; // STATUS_INVALID_PARAMETER
        return;
    }

    uint32_t requested_base = PPC_LOAD_U32(base_ptr);
    uint32_t requested_size = PPC_LOAD_U32(size_ptr);

    std::printf(
        "[NtAllocateVirtualMemory] "
        "base*=0x%08X size*=0x%08X type=0x%08X "
        "protect=0x%08X r7=0x%08X\n",
        requested_base,
        requested_size,
        allocation_type,
        protect,
        unknown);

    // Bits padrão de VirtualAlloc também aparecem aqui:
    //
    // 0x1000 = MEM_COMMIT
    // 0x2000 = MEM_RESERVE
    //
    // Burnout está adicionando flags Xbox em 0x60000000,
    // então por enquanto consideramos apenas os bits inferiores.
    const bool do_commit =
        (allocation_type & 0x00001000u) != 0;

    const bool do_reserve =
        (allocation_type & 0x00002000u) != 0;

    if (requested_size == 0)
    {
        ctx.r3.u64 = 0xC000000Du;
        return;
    }

    if (do_reserve)
    {
        // Xbox/NT reserva em granularidade de 64 KiB.
        const uint32_t reserve_size =
            align_up(requested_size, 0x10000u);

        uint32_t guest_address = requested_base;

        if (guest_address == 0)
        {
            guest_address =
                align_up(g_next_virtual_address, 0x10000u);

            g_next_virtual_address =
                guest_address + reserve_size;
        }

        // O harness já reservou os 4 GB inteiros no host.
        // Portanto MEM_RESERVE aqui é metadata guest;
        // NÃO chamamos VirtualAlloc(... MEM_RESERVE ...).
        g_virtual_reservations[guest_address] =
        {
            guest_address,
            reserve_size
        };

        PPC_STORE_U32(base_ptr, guest_address);
        PPC_STORE_U32(size_ptr, reserve_size);

        std::printf(
            "  RESERVE guest=0x%08X size=0x%X\n",
            guest_address,
            reserve_size);

        ctx.r3.s64 = 0;
        return;
    }

    if (do_commit)
    {
        uint32_t guest_address = requested_base;

        if (guest_address == 0)
        {
            std::printf(
                "  COMMIT falhou: base guest zero\n");

            ctx.r3.u64 = 0xC000000Du;
            return;
        }

        const uint32_t commit_size =
            align_up(requested_size, 0x1000u);

        void* host_address = base + guest_address;

        void* result = VirtualAlloc(
            host_address,
            commit_size,
            MEM_COMMIT,
            PAGE_READWRITE);

        if (!result)
        {
            std::printf(
                "  COMMIT falhou guest=0x%08X "
                "size=0x%X GetLastError=%lu\n",
                guest_address,
                commit_size,
                GetLastError());

            ctx.r3.u64 = 0xC0000017u; // STATUS_NO_MEMORY
            return;
        }

        PPC_STORE_U32(base_ptr, guest_address);
        PPC_STORE_U32(size_ptr, commit_size);

        std::printf(
            "  COMMIT guest=0x%08X host=%p size=0x%X\n",
            guest_address,
            result,
            commit_size);

        ctx.r3.s64 = 0;
        return;
    }

    std::printf(
        "  allocation_type ainda nao suportado: 0x%08X\n",
        allocation_type);

    ctx.r3.u64 = 0xC000000Du;
}