#include <cstdint>
#include <cstdio>
#include <memory>
#include <mutex>
#include <unordered_map>

#include "ppc_recomp_shared.h"

static std::mutex g_criticalSectionMapMutex;

static std::unordered_map<
    uint32_t,
    std::unique_ptr<std::recursive_mutex>
> g_criticalSections;

static std::recursive_mutex* GetCriticalSection(uint32_t guestAddress)
{
    std::lock_guard<std::mutex> guard(g_criticalSectionMapMutex);

    auto it = g_criticalSections.find(guestAddress);

    if (it != g_criticalSections.end())
        return it->second.get();

    auto criticalSection =
        std::make_unique<std::recursive_mutex>();

    std::recursive_mutex* result =
        criticalSection.get();

    g_criticalSections.emplace(
        guestAddress,
        std::move(criticalSection));

    return result;
}

PPC_FUNC(__imp__RtlInitializeCriticalSection)
{
    PPC_FUNC_PROLOGUE();

    const uint32_t guestAddress = ctx.r3.u32;

    GetCriticalSection(guestAddress);

    std::printf(
        "[RtlInitializeCriticalSection] guest=0x%08X\n",
        guestAddress);

    ctx.r3.u64 = 0;
}

PPC_FUNC(__imp__RtlEnterCriticalSection)
{
    PPC_FUNC_PROLOGUE();

    const uint32_t guestAddress = ctx.r3.u32;

    std::recursive_mutex* criticalSection =
        GetCriticalSection(guestAddress);

    criticalSection->lock();

    std::printf(
        "[RtlEnterCriticalSection] guest=0x%08X\n",
        guestAddress);

    ctx.r3.u64 = 0;
}

PPC_FUNC(__imp__RtlLeaveCriticalSection)
{
    PPC_FUNC_PROLOGUE();

    const uint32_t guestAddress = ctx.r3.u32;

    std::recursive_mutex* criticalSection =
        GetCriticalSection(guestAddress);

    std::printf(
        "[RtlLeaveCriticalSection] guest=0x%08X\n",
        guestAddress);

    criticalSection->unlock();

    ctx.r3.u64 = 0;
}