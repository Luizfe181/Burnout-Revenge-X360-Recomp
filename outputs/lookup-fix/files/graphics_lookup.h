#pragma once

static uint8_t* diagnosticBase = nullptr;
static PPCContext* diagnosticContext = nullptr;
static LONG WINAPI ReportGraphicsException(EXCEPTION_POINTERS* exception)
{
    const auto* record = exception->ExceptionRecord;
    if (record->ExceptionCode != EXCEPTION_ACCESS_VIOLATION)
        return EXCEPTION_CONTINUE_SEARCH;
    const auto module = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    std::fprintf(stderr, "[AV] RIP=0x%llX module_offset=0x%llX operation=%llu address=0x%llX guest_offset=0x%llX\n",
        exception->ContextRecord->Rip, exception->ContextRecord->Rip - module,
        static_cast<unsigned long long>(record->ExceptionInformation[0]),
        static_cast<unsigned long long>(record->ExceptionInformation[1]),
        static_cast<unsigned long long>(record->ExceptionInformation[1] - reinterpret_cast<uintptr_t>(diagnosticBase)));
    if (diagnosticContext)
    {
        const auto& c = *diagnosticContext;
        std::fprintf(stderr, "[AV] PPC LR=%08llX CTR=%08X r1=%08X r3=%08X r4=%08X r11=%08X r29=%08X r30=%08X r31=%08X\n",
            c.lr, c.ctr.u32, c.r1.u32, c.r3.u32, c.r4.u32, c.r11.u32, c.r29.u32, c.r30.u32, c.r31.u32);
    }
    std::fflush(stderr);
    return EXCEPTION_CONTINUE_SEARCH;
}

// Host pointer table prescribed by XenonRecomp, not guest big-endian data.
static constexpr uint64_t LOOKUP_BEGIN = PPC_IMAGE_BASE + PPC_IMAGE_SIZE;
static constexpr uint64_t LOOKUP_SIZE = PPC_CODE_SIZE * 2ull;
static_assert(sizeof(PPCFunc*) == 8, "Lookup layout requires a 64-bit host");
static_assert((PPC_CODE_SIZE & 3) == 0, "PPC instructions must be aligned");
static_assert(LOOKUP_BEGIN + LOOKUP_SIZE <= GUEST_SIZE, "Lookup outside reservation");

static bool InitializeGraphicsLookup(uint8_t* base)
{
    MEMORY_BASIC_INFORMATION before{};
    VirtualQuery(base + LOOKUP_BEGIN + (0x823EE808ull - PPC_CODE_BASE) * 2,
                 &before, sizeof(before));
    std::printf("[LOOKUP] 823EE808 slot before commit: State=0x%lX Protect=0x%lX\n",
                before.State, before.Protect);
    if (!commit_guest(base, static_cast<uint32_t>(LOOKUP_BEGIN), LOOKUP_SIZE))
        return false;
    std::memset(base + LOOKUP_BEGIN, 0, LOOKUP_SIZE);
    size_t count = 0;
    for (auto* m = PPCFuncMappings; m->guest; ++m)
    {
        if (m->guest < PPC_CODE_BASE || m->guest >= PPC_CODE_BASE + PPC_CODE_SIZE ||
            ((m->guest - PPC_CODE_BASE) & 3) || !m->host)
        {
            std::fprintf(stderr, "[LOOKUP] Invalid mapping: 0x%llX\n",
                         static_cast<unsigned long long>(m->guest));
            return false;
        }
        auto& slot = PPC_LOOKUP_FUNC(base, m->guest);
        if (slot && slot != m->host)
        {
            std::fprintf(stderr, "[LOOKUP] Conflicting mapping: 0x%llX\n",
                         static_cast<unsigned long long>(m->guest));
            return false;
        }
        slot = m->host;
        ++count;
    }
    std::printf("[LOOKUP] committed [0x%llX,0x%llX), %zu mappings\n",
                LOOKUP_BEGIN, LOOKUP_BEGIN + LOOKUP_SIZE, count);
    if (PPC_LOOKUP_FUNC(base, 0x823EE808u) != &sub_823EE808)
    {
        std::fprintf(stderr, "[LOOKUP] Required callback 823EE808 mapping mismatch\n");
        return false;
    }
    return true;
}

void BurnoutCallIndirect(PPCContext& ctx, unsigned char* base, unsigned int target)
{
    if (target < PPC_CODE_BASE || target >= PPC_CODE_BASE + PPC_CODE_SIZE || (target & 3))
    {
        std::fprintf(stderr, "[LOOKUP] Invalid target=0x%08X LR=0x%08llX\n", target, ctx.lr);
        std::exit(3);
    }
    PPCFunc* function = PPC_LOOKUP_FUNC(base, target);
    if (!function)
    {
        std::fprintf(stderr,
            "[LOOKUP] Missing target=0x%08X LR=0x%08llX; include its real implementation in the slice\n",
            target, ctx.lr);
        std::exit(3);
    }
    const auto caller = ctx.lr;
    std::printf("[INDIRECT] call target=0x%08X LR=0x%08llX\n", target, caller);
    function(ctx, base);
    std::printf("[INDIRECT] returned target=0x%08X caller=0x%08llX\n", target, caller);
}
