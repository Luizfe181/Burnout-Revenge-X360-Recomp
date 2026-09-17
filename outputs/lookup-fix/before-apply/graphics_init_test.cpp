#include <windows.h>
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <fstream>

#include "ppc_recomp_shared.h"

extern "C" PPC_FUNC(__imp__sub_82150520);
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


int main()
{
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


    // ========================================================
    // Inicializacao do heap.
    // ========================================================

    std::printf(
        "\nheap antes @82D4809C = 0x%08X\n",
        PPC_LOAD_U32(
            HEAP_GLOBAL_ADDR));

    std::printf(
        "Inicializando heap...\n");

    __imp__sub_825B4D40(
        ctx,
        base);

    const uint32_t heap_ptr =
        PPC_LOAD_U32(
            HEAP_GLOBAL_ADDR);

    std::printf(
        "heap depois @82D4809C = 0x%08X "
        "r3=0x%08X\n",
        heap_ptr,
        ctx.r3.u32);

    if (!heap_ptr)
    {
        std::printf(
            "ERRO: heap nao foi criado.\n");

        VirtualFree(
            base,
            0,
            MEM_RELEASE);

        return 2;
    }

    std::printf(
        "heap +20   = 0x%08X\n"
        "heap +24   = 0x%08X\n"
        "heap +1408 = 0x%08X\n",
        PPC_LOAD_U32(
            heap_ptr + 20),
        PPC_LOAD_U32(
            heap_ptr + 24),
        PPC_LOAD_U32(
            heap_ptr + 1408));


    // ========================================================
    // Inicializacao grafica.
    //
    // sub_825B4D40 altera registradores volateis,
    // por isso restauramos r3/r4 antes de D410.
    // ========================================================

    ctx.r3.u64 = GAME_OBJECT_ADDR;

    std::printf(
    "[HARNESS] teste heap 30002FC1 host=%p valor=0x%02X\n",
    base + 0x30002FC1u,
    static_cast<unsigned>(
        *(volatile uint8_t*)(base + 0x30002FC1u)));

    __imp__sub_82150520(
    ctx,
    base);

    // COLOQUE O BLOCO DE DIAGNOSTICO AQUI

    std::printf(
        "\n=== sub_82150520 RETORNOU ===\n");

    const uint32_t graphics_object =
        PPC_LOAD_U32(GAME_OBJECT_ADDR + 4208);

    const uint32_t graphics_global =
        PPC_LOAD_U32(0x826971C4);

    std::printf(
        "r3                     = 0x%08X\n"
        "game+3216              = 0x%08X (%u)\n"
        "game+3220              = 0x%08X (%u)\n"
        "game+4208 graphics     = 0x%08X\n"
        "global @826971C4       = 0x%08X\n"
        "config @826971E4 +00   = 0x%08X (%u)\n"
        "config @826971E4 +04   = 0x%08X\n"
        "config @826971E4 +08   = 0x%08X\n",
        ctx.r3.u32,
        PPC_LOAD_U32(GAME_OBJECT_ADDR + 3216),
        PPC_LOAD_U32(GAME_OBJECT_ADDR + 3216),
        PPC_LOAD_U32(GAME_OBJECT_ADDR + 3220),
        PPC_LOAD_U32(GAME_OBJECT_ADDR + 3220),
        graphics_object,
        graphics_global,
        PPC_LOAD_U32(0x826971E4),
        PPC_LOAD_U32(0x826971E4),
        PPC_LOAD_U32(0x826971E8),
        PPC_LOAD_U32(0x826971EC));

    if (graphics_object)
    {
        std::printf(
            "\nGraphics object:\n"
            "  +10376 = 0x%08X\n"
            "  +10380 = 0x%08X\n"
            "  +10384 = 0x%08X\n"
            "  +10388 = 0x%08X\n"
            "  +13984 = 0x%08X\n"
            "  +13988 = 0x%08X\n",
            PPC_LOAD_U32(graphics_object + 10376),
            PPC_LOAD_U32(graphics_object + 10380),
            PPC_LOAD_U32(graphics_object + 10384),
            PPC_LOAD_U32(graphics_object + 10388),
            PPC_LOAD_U32(graphics_object + 13984),
            PPC_LOAD_U32(graphics_object + 13988));
    }

    // --------------------------------------------------------
    // Se chegou aqui, D410 retornou.
    // --------------------------------------------------------

    std::printf(
        "\nsub_8238D410 retornou.\n");

    std::printf(
        "r3 = 0x%08X\n",
        ctx.r3.u32);

    std::printf(
        "obj+10376 = 0x%08X\n"
        "obj+10380 = 0x%08X\n"
        "obj+10384 = 0x%08X\n"
        "obj+10388 = 0x%08X\n"
        "obj+13984 = 0x%08X\n"
        "obj+13988 = 0x%08X\n",
        PPC_LOAD_U32(
            OBJECT_ADDR + 10376),
        PPC_LOAD_U32(
            OBJECT_ADDR + 10380),
        PPC_LOAD_U32(
            OBJECT_ADDR + 10384),
        PPC_LOAD_U32(
            OBJECT_ADDR + 10388),
        PPC_LOAD_U32(
            OBJECT_ADDR + 13984),
        PPC_LOAD_U32(
            OBJECT_ADDR + 13988));


    VirtualFree(
        base,
        0,
        MEM_RELEASE);

    return 0;
}