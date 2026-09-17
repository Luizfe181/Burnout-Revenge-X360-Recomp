#include <mutex>
static std::mutex allocation_mutex;
#include <Windows.h>

#include <cstdint>
#include <cstdio>
#include <unordered_map>

#include "ppc_recomp_shared.h"

static constexpr uint32_t PHYS_ALLOC_START = 0x10000000u;
static constexpr uint32_t PHYS_ALLOC_END   = 0x70000000u;

struct PhysicalAllocation
{
    uint64_t pageStart;
    SIZE_T commitSize;
    uint32_t requestedSize;
};

static uint32_t g_nextPhysicalAllocation = PHYS_ALLOC_START;

static std::unordered_map<uint32_t, PhysicalAllocation>
    g_physicalAllocations;

static uint32_t AlignUp(uint32_t value, uint32_t alignment)
{
    if (alignment <= 1)
        return value;

    const uint64_t v = value;
    const uint64_t a = alignment;

    return static_cast<uint32_t>(
        ((v + a - 1) / a) * a);
}

PPC_FUNC(__imp__MmAllocatePhysicalMemoryEx)
{
    PPC_FUNC_PROLOGUE();
    std::lock_guard<std::mutex> allocation_guard(allocation_mutex);

    const uint32_t size       = ctx.r4.u32;
    const uint32_t flags      = ctx.r5.u32;
    const uint32_t minAddress = ctx.r6.u32;
    const uint32_t maxAddress = ctx.r7.u32;

    uint32_t alignment = ctx.r8.u32;

    if (alignment == 0)
        alignment = 0x1000;

    if (alignment < 0x1000)
        alignment = 0x1000;

    if (size == 0)
    {
        std::printf(
            "[MmAllocatePhysicalMemoryEx] size=0 -> falha\n");

        ctx.r3.u64 = 0;
        return;
    }

    uint32_t searchStart = g_nextPhysicalAllocation;

    if (minAddress != 0 &&
        minAddress > searchStart)
    {
        searchStart = minAddress;
    }

    const uint32_t guestAddress =
        AlignUp(searchStart, alignment);

    const uint64_t allocationEnd =
        static_cast<uint64_t>(guestAddress) +
        static_cast<uint64_t>(size);

    uint64_t allowedEnd = PHYS_ALLOC_END;

    if (maxAddress != 0 &&
        maxAddress != 0xFFFFFFFFu)
    {
        const uint64_t requestedEnd =
            static_cast<uint64_t>(maxAddress) + 1ull;

        if (requestedEnd < allowedEnd)
            allowedEnd = requestedEnd;
    }

    if (guestAddress < PHYS_ALLOC_START ||
        allocationEnd > allowedEnd ||
        allocationEnd > PHYS_ALLOC_END)
    {
        std::printf(
            "[MmAllocatePhysicalMemoryEx] SEM ESPACO "
            "size=0x%X align=0x%X min=0x%08X max=0x%08X\n",
            size,
            alignment,
            minAddress,
            maxAddress);

        ctx.r3.u64 = 0;
        return;
    }

    const uint64_t pageStart =
        static_cast<uint64_t>(guestAddress) &
        ~0xFFFull;

    const uint64_t pageEnd =
        (allocationEnd + 0xFFFull) &
        ~0xFFFull;

    const SIZE_T commitSize =
        static_cast<SIZE_T>(pageEnd - pageStart);

    void* committed = VirtualAlloc(
        base + pageStart,
        commitSize,
        MEM_COMMIT,
        PAGE_READWRITE);

    if (!committed)
    {
        std::printf(
            "[MmAllocatePhysicalMemoryEx] VirtualAlloc falhou "
            "guest=0x%08X size=0x%X error=%lu\n",
            guestAddress,
            size,
            GetLastError());

        ctx.r3.u64 = 0;
        return;
    }

    g_physicalAllocations[guestAddress] =
    {
        pageStart,
        commitSize,
        size
    };

    g_nextPhysicalAllocation =
        AlignUp(
            static_cast<uint32_t>(allocationEnd),
            0x1000);

    std::printf(
        "[MmAllocatePhysicalMemoryEx] "
        "guest=0x%08X size=0x%X align=0x%X "
        "flags=0x%08X\n",
        guestAddress,
        size,
        alignment,
        flags);

    ctx.r3.u64 = guestAddress;
}

PPC_FUNC(__imp__MmFreePhysicalMemory)
{
    PPC_FUNC_PROLOGUE();
    std::lock_guard<std::mutex> allocation_guard(allocation_mutex);

    const uint32_t type         = ctx.r3.u32;
    const uint32_t guestAddress = ctx.r4.u32;

    auto it =
        g_physicalAllocations.find(guestAddress);

    if (it == g_physicalAllocations.end())
    {
        std::printf(
            "[MmFreePhysicalMemory] allocation desconhecida "
            "guest=0x%08X type=0x%08X\n",
            guestAddress,
            type);

        return;
    }

    const PhysicalAllocation allocation =
        it->second;

    if (!VirtualFree(
            base + allocation.pageStart,
            allocation.commitSize,
            MEM_DECOMMIT))
    {
        std::printf(
            "[MmFreePhysicalMemory] MEM_DECOMMIT falhou "
            "guest=0x%08X error=%lu\n",
            guestAddress,
            GetLastError());

        return;
    }

    std::printf(
        "[MmFreePhysicalMemory] "
        "guest=0x%08X size=0x%X type=0x%08X\n",
        guestAddress,
        allocation.requestedSize,
        type);

    g_physicalAllocations.erase(it);
}