#pragma once

static uint8_t* diagnosticBase = nullptr;
static thread_local PPCContext* diagnosticContext = nullptr;
static thread_local uint32_t diagnosticThreadId=1,diagnosticEntry=0x825B0500,diagnosticStartup=0,diagnosticIndirect=0;
void BurnoutSetThreadContext(PPCContext* context,uint32_t id,uint32_t entry,uint32_t startup) {
    diagnosticContext=context;diagnosticThreadId=id;diagnosticEntry=entry;diagnosticStartup=startup;
}
void BurnoutReportPpcState() {
    std::fprintf(stdout,"[THREAD STATE] id=%u entry=%08X startup=%08X active_indirect=%08X\n",diagnosticThreadId,diagnosticEntry,diagnosticStartup,diagnosticIndirect);
    if (!diagnosticContext) return;
    const auto& c=*diagnosticContext;
    std::fprintf(stdout,"[PPC STATE] LR=%08llX CTR=%08X r1=%08X r3=%08X r4=%08X r29=%08X r30=%08X r31=%08X\n",
        c.lr,c.ctr.u32,c.r1.u32,c.r3.u32,c.r4.u32,c.r29.u32,c.r30.u32,c.r31.u32);
}
static LONG WINAPI ReportGraphicsException(EXCEPTION_POINTERS* exception)
{
    const auto* record = exception->ExceptionRecord;
    if (record->ExceptionCode != EXCEPTION_ACCESS_VIOLATION)
        return EXCEPTION_CONTINUE_SEARCH;
    BurnoutReportPpcState();
    const auto module = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    std::fprintf(stdout, "[AV] RIP=0x%llX module_offset=0x%llX operation=%llu address=0x%llX guest_offset=0x%llX\n",
        exception->ContextRecord->Rip, exception->ContextRecord->Rip - module,
        static_cast<unsigned long long>(record->ExceptionInformation[0]),
        static_cast<unsigned long long>(record->ExceptionInformation[1]),
        static_cast<unsigned long long>(record->ExceptionInformation[1] - reinterpret_cast<uintptr_t>(diagnosticBase)));
    if (diagnosticContext)
    {
        const auto& c = *diagnosticContext;
        std::fprintf(stdout, "[AV] PPC LR=%08llX CTR=%08X r1=%08X r3=%08X r4=%08X r11=%08X r29=%08X r30=%08X r31=%08X\n",
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
            std::fprintf(stdout, "[LOOKUP] Invalid mapping: 0x%llX\n",
                         static_cast<unsigned long long>(m->guest));
            return false;
        }
        auto& slot = PPC_LOOKUP_FUNC(base, m->guest);
        if (slot && slot != m->host)
        {
            std::fprintf(stdout, "[LOOKUP] Conflicting mapping: 0x%llX\n",
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
        std::fprintf(stdout, "[LOOKUP] Required callback 823EE808 mapping mismatch\n");
        return false;
    }
    return true;
}

void BurnoutCallIndirect(PPCContext& ctx, unsigned char* base, unsigned int target)
{
    // sub_82362980 constructs an object entry from its descriptor, then
    // dispatches virtual slot zero.  This is deliberately a read-only probe:
    // it runs at the host-side bctrl boundary, before lookup/call, and never
    // changes PPC or guest state.
    if (ctx.lr == 0x823629FCull)
    {
        const auto readable_guest_u32 = [base](uint32_t address, uint32_t* value) {
            if (address > 0xFFFFFFFBu)
                return false;
            MEMORY_BASIC_INFORMATION mbi{};
            if (!VirtualQuery(base + address, &mbi, sizeof(mbi)) ||
                mbi.State != MEM_COMMIT || (mbi.Protect & (PAGE_NOACCESS | PAGE_GUARD)))
                return false;
            const auto begin = reinterpret_cast<uintptr_t>(mbi.BaseAddress);
            const auto end = begin + mbi.RegionSize;
            const auto p = reinterpret_cast<uintptr_t>(base + address);
            if (p < begin || p + sizeof(uint32_t) > end)
                return false;
            *value = PPC_LOAD_U32(address);
            return true;
        };
        uint32_t vtable = 0, slot0 = 0;
        const bool object_ok = readable_guest_u32(ctx.r3.u32, &vtable);
        const bool vtable_ok = object_ok && readable_guest_u32(vtable, &slot0);
        std::fprintf(stdout,
            "[62980 VDISPATCH] tid=%u LR=%08llX r3=%08X [r3]=%08X(%s) [[r3]+0]=%08X(%s) r30=%08X r31=%08X target=%08X\\n",
            diagnosticThreadId, ctx.lr, ctx.r3.u32, vtable,
            object_ok ? "committed" : "invalid", slot0,
            vtable_ok ? "committed" : "invalid", ctx.r30.u32, ctx.r31.u32, target);
    }
    // sub_8235A818 keeps one callback slot for each group of sixteen
    // property reads. This records its observed dispatch state only.
    if (ctx.lr == 0x8235A8C8ull)
    {
        const uint32_t slot_value = PPC_LOAD_U32(ctx.r29.u32);
        std::fprintf(stdout,
            "[A818 CALLBACK] tid=%u outer=%u inner=%u r28=%08X r29=%08X slot=%08X target=%08X LR=%08llX\n",
            diagnosticThreadId, ctx.r25.u32 / 16, ctx.r4.u32,
            ctx.r28.u32, ctx.r29.u32, slot_value, target, ctx.lr);
    }
    if (target < PPC_CODE_BASE || target >= PPC_CODE_BASE + PPC_CODE_SIZE || (target & 3))
    {
        std::fprintf(stdout, "[LOOKUP] Invalid target=0x%08X LR=0x%08llX\n", target, ctx.lr);
        std::exit(3);
    }
    PPCFunc* function = PPC_LOOKUP_FUNC(base, target);
    if (!function)
    {
        std::fprintf(stdout,
            "[LOOKUP] Missing target=0x%08X LR=0x%08llX; include its real implementation in the slice\n",
            target, ctx.lr);
        std::exit(3);
    }
    const auto caller = ctx.lr;
    static const bool full_trace=std::getenv("BURNOUT_TRACE_INDIRECT")!=nullptr;
    static thread_local uint64_t call_count=0;
    ++call_count;
    const bool trace=full_trace || call_count<=64 || (call_count%1024)==0 || target==0x825B5358 || target==0x825B7820;
    if(trace) std::printf("[INDIRECT] tid=%u call target=0x%08X LR=0x%08llX\n", diagnosticThreadId, target, caller);
    const uint32_t previous=diagnosticIndirect;diagnosticIndirect=target;
    function(ctx, base);
    diagnosticIndirect=previous;
    if(trace) std::printf("[INDIRECT] tid=%u returned target=0x%08X caller=0x%08llX\n", diagnosticThreadId, target, caller);
}
