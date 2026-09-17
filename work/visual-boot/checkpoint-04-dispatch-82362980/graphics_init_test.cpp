#include <windows.h>
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <fstream>
#include <mutex>

#include "ppc_recomp_shared.h"

extern "C" PPC_FUNC(__imp__sub_8217E958);
extern "C" PPC_FUNC(__imp__sub_825B4D40);

static constexpr uint64_t GUEST_SIZE = 0x100000000ull;

static constexpr uint32_t IMAGE_ADDR = 0x82000000;
static constexpr uint32_t IMAGE_SIZE = 0x00DA0000;

static constexpr uint32_t OBJECT_ADDR = 0x71000000;
static constexpr uint32_t CONFIG_ADDR = 0x71010000;

static constexpr uint32_t STACK_ADDR = 0x72000000;
static constexpr uint32_t STACK_SIZE = 0x00100000;

static constexpr uint32_t KPCR_ADDR = 0x70000000;
static constexpr uint32_t THREAD_ADDR = 0x70001000;
static constexpr uint32_t GAME_OBJECT_ADDR = 0x71010000;

static constexpr uint32_t VD_GLOBAL_DEVICE_ADDR =
    0x70002000;

static constexpr uint32_t VD_GLOBAL_XAM_DEVICE_ADDR =
    0x70003000;

static constexpr uint32_t HEAP_IMPORT_STUB_ADDR =
    0x70004000;

static constexpr uint32_t HEAP_GLOBAL_ADDR =
    0x82D4809C;

static constexpr uint32_t DEBUG_MONITOR_DATA_ADDR = 0x70005000;


static bool commit_guest(
    uint8_t* base,
    uint32_t address,
    size_t size)
{
    void* p = VirtualAlloc(
        base + address,
        size,
        MEM_COMMIT,
        PAGE_READWRITE);

    if (!p)
    {
        std::printf(
            "VirtualAlloc MEM_COMMIT falhou em "
            "0x%08X error=%lu\n",
            address,
            GetLastError());

        return false;
    }

    return true;
}


static bool load_image(uint8_t* base)
{
    std::ifstream file(
        "..\\Burnout4_External.pe",
        std::ios::binary);

    if (!file)
    {
        std::printf(
            "Nao consegui abrir Burnout4_External.pe\n");

        return false;
    }

    file.read(
        reinterpret_cast<char*>(
            base + IMAGE_ADDR),
        IMAGE_SIZE);

    const std::streamsize bytes =
        file.gcount();

    std::printf(
        "Imagem carregada: %lld bytes\n",
        static_cast<long long>(bytes));

    return bytes == IMAGE_SIZE;
}


#include "graphics_lookup.h"

void BurnoutPpcEntryProbe(PPCContext& ctx, uint8_t* base, const char* function)
{
    // Passive entry telemetry. Function identity comes from __func__ at each
    // generated PPC implementation; this does not write guest/PPC state.
    struct Marker { const char* name; bool seen; };
    static Marker markers[] = {
        { "__imp___xstart", false },
        { "__imp__sub_825B04F8", false },
        { "__imp__sub_820A3AF0", false },
        { "__imp__sub_8211A9F0", false },
        { "__imp__sub_8217E958", false },
        { "__imp__sub_8211B168", false },
        { "__imp__sub_82181AB8", false },
        { "__imp__sub_821508A0", false },
        { "__imp__sub_8234B520", false },
        { "__imp__sub_82388B58", false },
    };
    static std::mutex marker_mutex;
    std::lock_guard<std::mutex> lock(marker_mutex);
    for (auto& marker : markers)
    {
        if (!marker.seen && std::strcmp(function, marker.name) == 0)
        {
            marker.seen = true;
            std::fprintf(stdout,
                "[PPC MILESTONE] %s tid=%u LR=%08llX r1=%08X r3=%08X r4=%08X\n",
                function, PPC_LOAD_U32(ctx.r13.u32 + 0x14C), ctx.lr,
                ctx.r1.u32, ctx.r3.u32, ctx.r4.u32);
            break;
        }
    }

    if (ctx.r3.u32 == 0x82A49320u ||
        ctx.lr == 0x8234783Cull ||
        ctx.lr == 0x823FFD54ull)
    {
        std::fprintf(stdout,
            "[ALLOC ARG ENTRY] LR=%08llX r3=%08X r4=%08X r5=%08X r6=%08X r7=%08X r8=%08X r9=%08X r29=%08X r30=%08X r31=%08X\n",
            ctx.lr, ctx.r3.u32, ctx.r4.u32, ctx.r5.u32, ctx.r6.u32,
            ctx.r7.u32, ctx.r8.u32, ctx.r9.u32, ctx.r29.u32,
            ctx.r30.u32, ctx.r31.u32);
    }
}

int main(int argc, char** argv)
{
    std::setvbuf(stdout, nullptr, _IONBF, 0);
    std::printf(
        "=== Burnout Revenge graphics_init_test ===\n");

    uint8_t* base =
        static_cast<uint8_t*>(
            VirtualAlloc(
                nullptr,
                GUEST_SIZE,
                MEM_RESERVE,
                PAGE_NOACCESS));

    if (!base)
    {
        std::printf(
            "Falha reservando 4 GB. error=%lu\n",
            GetLastError());

        return 1;
    }

    std::printf(
        "base = %p\n",
        base);


    // --------------------------------------------------------
    // Commit das regioes guest necessarias.
    // --------------------------------------------------------

    if (!commit_guest(
            base,
            IMAGE_ADDR,
            IMAGE_SIZE))
        return 1;

    if (!commit_guest(
            base,
            OBJECT_ADDR,
            0x6000))
        return 1;

    if (!commit_guest(
            base,
            GAME_OBJECT_ADDR,
            0x2000))
        return 1;

    if (!commit_guest(
            base,
            STACK_ADDR,
            STACK_SIZE))
        return 1;

    if (!commit_guest(
            base,
            KPCR_ADDR,
            0x1000))
        return 1;

    if (!commit_guest(
            base,
            THREAD_ADDR,
            0x1000))
        return 1;

    if (!commit_guest(
            base,
            VD_GLOBAL_DEVICE_ADDR,
            0x1000))
        return 1;

    if (!commit_guest(
            base,
            VD_GLOBAL_XAM_DEVICE_ADDR,
            0x1000))
        return 1;

    if (!commit_guest(
            base,
            HEAP_IMPORT_STUB_ADDR,
            0x1000))
        return 1;


    // --------------------------------------------------------
    // Carrega a imagem.
    // --------------------------------------------------------

    if (!load_image(base))
        return 1;

    if (!InitializeGraphicsLookup(base))
        return 1;

    // xboxkrnl ordinal 0x59 is an exported pointer variable, not a function.
    // Import slot -> address of variable -> null (no debug monitor attached).
    // See Xenia xboxkrnl_module.cc, KeDebugMonitorData registration.
    if (PPC_LOAD_U32(0x820007CC) != 0x00010059)
    {
        std::fprintf(stderr, "Unexpected KeDebugMonitorData import descriptor\n");
        return 1;
    }
    if (!commit_guest(base, DEBUG_MONITOR_DATA_ADDR, 0x1000)) return 1;
    PPC_STORE_U32(DEBUG_MONITOR_DATA_ADDR, 0);
    PPC_STORE_U32(0x820007CC, DEBUG_MONITOR_DATA_ADDR);
    if (PPC_LOAD_U32(0x820007D0) != 0x00010266) {
        std::fprintf(stderr,"Unexpected KeCertMonitorData descriptor\n");return 1;
    }
    PPC_STORE_U32(DEBUG_MONITOR_DATA_ADDR + 4, 0);
    PPC_STORE_U32(0x820007D0, DEBUG_MONITOR_DATA_ADDR + 4);
    if (PPC_LOAD_U32(0x82000850) != 0x000101C1) {
        std::fprintf(stderr,"Unexpected VdHSIOCalibrationLock descriptor\n");return 1;
    }
    if (!commit_guest(base, 0x70006000, 0x1000)) return 1;
    PPC_STORE_U32(0x82000850,0x70006000u);
    PPCContext calibration{};
    calibration.r3.u64=0x70006000;
    __imp__RtlInitializeCriticalSection(calibration,base);
    std::printf("[IMPORT] KeDebugMonitorData slot=820007CC variable=%08X value=0\n",
                DEBUG_MONITOR_DATA_ADDR);

    if(argc==2 && std::strcmp(argv[1],"--video-mode-self-test")==0) {
        const uint32_t out=STACK_ADDR+STACK_SIZE-0x100;
        for(auto function : { &__imp__XGetVideoMode, &__imp__VdQueryVideoMode }) {
            std::memset(base+out,0xA5,64);
            PPCContext test{};test.r3.u64=out;function(test,base);
            for(unsigned i=48;i<64;++i) if(base[out+i]!=0xA5) return 9;
            if(PPC_LOAD_U32(out)!=1280 || PPC_LOAD_U32(out+4)!=720 || PPC_LOAD_U32(out+20)!=0x42700000) return 9;
        }
        std::printf("[VIDEO TEST PASS] both APIs write 48 bytes and preserve saved-register canaries\n");return 0;
    }
    if (argc == 2 && std::strcmp(argv[1], "--lookup-self-test") == 0)
    {
        PPCContext test{};
        test.r3.u64 = 0x123456789ABCDEF0ull;
        test.lr = 0x8238CF98;
        unsigned char saved[sizeof(test)];
        std::memcpy(saved, &test, sizeof(test));
        BurnoutCallIndirect(test, base, 0x823EE808u);
        if (std::memcmp(saved, &test, sizeof(test))) return 4;
        for (auto* m = PPCFuncMappings; m->guest; ++m)
            if (PPC_LOOKUP_FUNC(base, m->guest) != m->host) return 4;
        std::printf("[LOOKUP TEST] All mappings round-trip; real 823EE808 preserves context.\n");
        VirtualFree(base, 0, MEM_RELEASE);
        return 0;
    }
    if (argc == 2 && std::strcmp(argv[1], "--lookup-missing-test") == 0)
    {
        PPCContext test{};
        for (uint64_t address = PPC_CODE_BASE; address < PPC_CODE_BASE + PPC_CODE_SIZE; address += 4)
            if (!PPC_LOOKUP_FUNC(base, address))
                BurnoutCallIndirect(test, base, static_cast<uint32_t>(address));
        return 4;
    }
    if (argc == 2 && std::strcmp(argv[1], "--lookup-invalid-test") == 0)
    {
        PPCContext test{};
        BurnoutCallIndirect(test, base, 0);
        return 4;
    }
    if (argc == 2 && std::strcmp(argv[1], "--lookup-unaligned-test") == 0)
    {
        PPCContext test{};
        BurnoutCallIndirect(test, base, 0x823EE809);
        return 4;
    }


    // --------------------------------------------------------
    // Zera as estruturas temporarias.
    // --------------------------------------------------------

    std::memset(
        base + OBJECT_ADDR,
        0,
        0x6000);

    std::memset(
        base + GAME_OBJECT_ADDR,
        0,
        0x2000);

    std::memset(
        base + STACK_ADDR,
        0,
        STACK_SIZE);

    std::memset(
        base + KPCR_ADDR,
        0,
        0x1000);

    std::memset(
        base + THREAD_ADDR,
        0,
        0x1000);

    std::memset(
        base + VD_GLOBAL_DEVICE_ADDR,
        0,
        0x1000);

    std::memset(
        base + VD_GLOBAL_XAM_DEVICE_ADDR,
        0,
        0x1000);

    std::memset(
        base + HEAP_IMPORT_STUB_ADDR,
        0,
        0x1000);


    // --------------------------------------------------------
    // Resolve o data-import usado pelo heap init.
    //
    // sub_825B4D40 le 0x82000980 e depois
    // dereferencia o ponteiro.
    //
    // Mantemos essa estrutura zerada para usar
    // o tamanho default de heap.
    // --------------------------------------------------------

    PPC_STORE_U32(
        0x82000980,
        HEAP_IMPORT_STUB_ADDR);

    PPC_STORE_U32(
        HEAP_IMPORT_STUB_ADDR,
        0);

    PPC_STORE_U32(
        HEAP_GLOBAL_ADDR,
        0);


    // --------------------------------------------------------
    // Data-imports VdGlobalDevice / VdGlobalXamDevice.
    // --------------------------------------------------------

    PPC_STORE_U32(
        0x820007A0,
        VD_GLOBAL_DEVICE_ADDR);

    PPC_STORE_U32(
        0x8200079C,
        VD_GLOBAL_XAM_DEVICE_ADDR);


    // --------------------------------------------------------
    // KPCR minimo.
    // --------------------------------------------------------

    // KeTimeStampBundle: live uptime field is refreshed by the guest load hook.
    if (PPC_LOAD_U32(0x8200094C) != 0x000100AD) return 1;
    if (!commit_guest(base, 0x70008000, 0x1000)) return 1;
    PPC_STORE_U32(0x8200094C, 0x70008000u);

    // XboxHardwareInfo: emulated Xenon has six logical processors.
    // No HDD-present flag is advertised until a storage device is mounted.
    if (PPC_LOAD_U32(0x82000990) != 0x00010156) return 1;
    if (!commit_guest(base, 0x70009000, 0x1000)) return 1;
    PPC_STORE_U8(0x70009004, 6);
    PPC_STORE_U32(0x82000990, 0x70009000u);

    if(PPC_LOAD_U32(0x82000994)!=0x00010017) return 1;
    if(!commit_guest(base,0x7000A000,0x1000)) return 1;
    PPC_STORE_U32(0x82000994,0x7000A000u);
    PPC_STORE_U32(0x7000A018,0x53656D61u); // semaphore object type pool tag

    if(PPC_LOAD_U32(0x820008DC)!=0x0001001B) return 1;
    if(!commit_guest(base,0x7000B000,0x1000)) return 1;
    PPC_STORE_U32(0x820008DC,0x7000B000u);
    PPC_STORE_U32(0x7000B018,0x54687265u);

    PPC_STORE_U32(KPCR_ADDR+0x70,STACK_ADDR+STACK_SIZE);
    PPC_STORE_U32(KPCR_ADDR+0x74,STACK_ADDR);

    // XEX TLS header: 64 slots, no static template.
    if (!commit_guest(base, 0x70007000, 0x1000)) return 1;
    PPC_STORE_U32(KPCR_ADDR, 0x70007000u);

    PPC_STORE_U32(
        KPCR_ADDR + 0x100,
        THREAD_ADDR);

    PPC_STORE_U8(
        KPCR_ADDR + 0x10C,
        0);

    PPC_STORE_U32(
        KPCR_ADDR + 0x150,
        0);


    // --------------------------------------------------------
    // Estrutura da thread atual.
    // --------------------------------------------------------

    PPC_STORE_U32(
        THREAD_ADDR + 0x14C,
        1);

    PPC_STORE_U32(
        THREAD_ADDR + 0x160,
        0);
    
    PPC_STORE_U8(
        GAME_OBJECT_ADDR + 21,
        1);

    PPC_STORE_U8(
        GAME_OBJECT_ADDR + 23,
        0);


    // --------------------------------------------------------
    // Flags preparadas como sub_823887B0 faz.
    // --------------------------------------------------------




    // --------------------------------------------------------
    // PPC context.
    // --------------------------------------------------------

    PPCContext ctx{};

    diagnosticBase = base;
    diagnosticContext = &ctx;
    AddVectoredExceptionHandler(1, ReportGraphicsException);

    ctx.r13.u64 =
        KPCR_ADDR;

    ctx.r1.u64 =
        STACK_ADDR +
        STACK_SIZE -
        0x1000;

    ctx.r3.u64 =
        OBJECT_ADDR;

    ctx.r4.u64 =
        CONFIG_ADDR;


    // --------------------------------------------------------
    // Diagnosticos iniciais.
    // --------------------------------------------------------

    std::printf(
        "\nr13/KPCR        = 0x%08X\n"
        "current thread  = 0x%08X\n"
        "thread id       = 0x%08X\n",
        ctx.r13.u32,
        PPC_LOAD_U32(
            KPCR_ADDR + 0x100),
        PPC_LOAD_U32(
            THREAD_ADDR + 0x14C));

    std::printf(
        "graphics object = 0x%08X\n"
        "config          = 0x%08X\n"
        "stack           = 0x%08X\n"
        "flags           = 0x%08X\n\n",
        OBJECT_ADDR,
        CONFIG_ADDR,
        ctx.r1.u32,
        PPC_LOAD_U32(
            OBJECT_ADDR + 20592));

    std::printf(
        "global SYSTEM @8200079C = 0x%08X\n"
        "global USER   @820007A0 = 0x%08X\n",
        PPC_LOAD_U32(
            0x8200079C),
        PPC_LOAD_U32(
            0x820007A0));


    // Enter only through the original title startup. _xstart owns the
    // initialization order and the subsequent game/update loop.
    extern bool BurnoutFullBoot;
    BurnoutFullBoot = true;
    ctx.r3.u64 = 0;
    ctx.r4.u64 = 0;
    std::printf("[BOOT] entering real XEX _xstart at 825B0500\n");
    BurnoutCallIndirect(ctx, base, 0x825B0500);
    std::printf("[BOOT] _xstart returned r3=%08X\n", ctx.r3.u32);

    return 0;
}
