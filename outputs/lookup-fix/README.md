# Correção do lookup PPC — Burnout Revenge

## Resultado validado

O AV ao resolver `0x823EE808` foi corrigido, e os sete arquivos foram aplicados em `C:\burnoutrecomp\backup\ppc`. A recompilação e execução nessa pasta reproduziram os resultados da cópia de trabalho. A função executada é a implementação original de `ppc_recomp.55.cpp`, sem stub. O teste executou **622 chamadas indiretas e 622 retornos**, incluindo todos os callbacks de `sub_8238CF38` e quatro chamadas a `sub_82381F30`.

A inicialização gráfica ainda não terminou. O próximo bloqueio é a submissão GPU: `sub_82382200` escreve `0x16` em `0x7FC80714` (`CP_RB_WPTR`). O runtime agora identifica essa operação e encerra com **código 5**, informando que o processador de comandos não está implementado e que a submissão não foi consumida. Não há simulação de avanço do read pointer.

## Como a tabela funciona

O XenonRecomp gera os limites em `ppc_config.h` e a lista `{endereço_guest, função_host}` em `ppc_func_mapping.cpp`. Não inicializa a tabela automaticamente. O projeto original declara que o runtime deve ser fornecido pelo integrador: [README, Indirect Functions](https://github.com/hedge-dev/XenonRecomp#indirect-functions).

No checkout local, `XenonRecomp/recompiler.cpp`, linhas 3706–3726 e 3766–3777, gera essas informações. `XenonUtils/ppc_context.h:110` fornece a fórmula de acesso. O `host_runtime.cpp` local já tinha commit e população, mas tem outro `main` e não participa do comando de compilação do harness gráfico.

```text
slot = base + PPC_IMAGE_BASE + PPC_IMAGE_SIZE
            + (target - PPC_CODE_BASE) * 2

PPC_IMAGE_BASE = 0x82000000
PPC_IMAGE_SIZE = 0x00DA0000
PPC_CODE_BASE  = 0x82090000
PPC_CODE_SIZE  = 0x0054D7E8

tabela: [base + 0x82DA0000, base + 0x8383AFD0)
tamanho: 0x00A9AFD0 bytes
slot de 0x823EE808: base + 0x8345D010
```

Cada instrução PPC ocupa 4 bytes; cada ponteiro de função host x64 ocupa 8. Por isso o deslocamento em bytes é multiplicado por 2. Os slots contêm ponteiros nativos, sem byte swap. Os ponteiros das tabelas de callbacks na imagem guest, por outro lado, são lidos em big-endian.

`MEM_RESERVE / PAGE_NOACCESS` reserva endereço virtual, mas não permite ler seus slots. O diagnóstico confirmou `MEM_RESERVE` (`State=0x2000`) antes do commit. O harness agora faz `MEM_COMMIT / PAGE_READWRITE` na região completa, zera os slots e popula cada endereço a partir dos mappings do slice, antes de executar PPC. Valida limites, alinhamento e mappings conflitantes. O dispatcher rejeita endereço inválido ou slot vazio antes de chamar um ponteiro.

## Alterações

- `extract_ppc_slice.py`: acrescenta raízes indiretas descritas em `graphics_slice.json`, segue suas chamadas diretas e emite `PPCFuncMappings` junto ao slice. Os endereços vêm do mapping original; funções e aliases vêm dos 90 arquivos originais.
- `graphics_slice.json`: descreve as 97 entradas de 12 bytes em `0x82699330` e as 20 em `0x826997C0`, com alvo no offset 4. Acrescenta `sub_82381F30`, instalado por `sub_8238D410` em `graphics_object + 13636`, com a origem documentada.
- `graphics_lookup.h`: commit, população, dispatch com diagnóstico e relatório de AVs.
- `graphics_dispatch.h`: configura os hooks apenas para o slice gráfico. `ppc_config.h` e `ppc_context.h` permanecem intactos, preservando os outros harnesses.
- `graphics_init_test.cpp`: inicializa lookup e resolve `KeDebugMonitorData`.
- `xbox_mmio.cpp`: recebe escritas `PPC_MM_STORE_U32` e identifica MMIO não implementado, encerrando com código 5. Stores normais marcados conservadoramente como MMIO mantêm a escrita big-endian.
- `ppc_graphics_init_min.cpp`: regenerado com 309 funções, aliases e mappings. Os corpos são idênticos aos originais. Os antigos printf manuais do slice são substituídos pelo diagnóstico centralizado.

O manifesto torna as dependências indiretas reproduzíveis; não pretende resolver estaticamente todo `bctrl`. Novos callbacks devem ser rastreados e declarados como tabelas ou raízes explícitas. Um alvo não incluído causa diagnóstico, nunca retorno de sucesso fictício.

## Bloqueios adicionais investigados

1. Depois de CF38, `sub_82382138` chama `sub_82381F30` via campo `+13636`, com LR `0x82382188`. A implementação original e sua dependência foram incluídas, elevando o slice de 307 a 309 funções.
2. O load em `sub_8238D410`, instrução guest `0x8238D520`, desreferenciava `0x00010059`, ainda presente no slot `0x820007CC`. Trata-se de `xboxkrnl`, ordinal `0x59`, `KeDebugMonitorData`: uma variável exportada contendo um ponteiro. O harness aponta o import para `0x70005000`, contendo zero, representando nenhum monitor conectado. Essa representação coincide com a [inicialização do Xenia](https://github.com/xenia-project/xenia/blob/master/src/xenia/kernel/xboxkrnl/xboxkrnl_module.cc), e o ordinal consta na [tabela de exports](https://github.com/xenia-project/xenia/blob/master/src/xenia/kernel/xboxkrnl/xboxkrnl_table.inc).
3. O próximo AV era um store MMIO em `sub_82382200`, instrução guest `0x82382388`, no endereço `0x7FC80714`. O offset `0x714 / 4 = 0x1C5` corresponde a `CP_RB_WPTR`; no [Xenia, WriteRegister](https://github.com/xenia-project/xenia/blob/master/src/xenia/gpu/graphics_system.cc), essa escrita chama `UpdateWritePointer`. Aqui ainda falta implementar esse processamento e o avanço coerente do ring/read pointer. O hook apenas explicita essa falta e interrompe a execução.

## Validação

Compilação concluída com o comando solicitado, Clang x64 do Visual Studio 18 Community, `-mavx -msse4.1`, sem AVX2, sem avisos no log:

```bat
clang++ -std=c++17 -O0 -g -mavx -msse4.1 -include stdio.h -include Windows.h graphics_init_test.cpp ppc_graphics_init_min.cpp xbox_kernel.cpp xbox_memory.cpp xbox_mm.cpp xbox_mmio.cpp xbox_probe.cpp xbox_rtl.cpp xbox_vd.cpp xbox_xconfig.cpp xbox_virtual_memory.cpp -o graphics_init_test.exe
```

| Execução | Resultado |
|---|---|
| `graphics_init_test.exe --lookup-self-test` | 0; todos os mappings conferidos; função real `823EE808` preserva o contexto |
| `--lookup-missing-test` | 3; slot vazio identificado, sem AV |
| `--lookup-invalid-test` | 3; alvo zero rejeitado antes do acesso |
| `--lookup-unaligned-test` | 3; alvo desalinhado rejeitado |
| `graphics_init_test.exe` | 5; 622 chamadas/retornos; para na submissão GPU não implementada |

Verificações estáticas: 90 arquivos `ppc_recomp.*.cpp` preservados por SHA-256; todos os 309 corpos do slice idênticos aos originais; todas as 117 entradas das duas tabelas têm mappings. O teste continua usando a entrada existente `sub_82150520`, após inicializar heap, e não comprova o boot completo desde `_xstart`. A worker gráfica continua sem execução.

## Arquivos do pacote

`files/` contém os sete arquivos aplicados na pasta `C:\burnoutrecomp\backup\ppc`. `changes.patch` permite revisar as alterações de fonte; o slice gerado é fornecido completo, separado do diff. `logs/` contém as execuções e os diagnósticos intermediários, inclusive `applied_run.log` e `applied_self_test.log`, executados no projeto após aplicação. `apply-preconditions.json` registra hashes dos arquivos anteriores para impedir sobrescrita de alterações concorrentes. `before-apply/` preserva os arquivos substituídos.

Para regenerar, execute `python extract_ppc_slice.py` na pasta do projeto, mantendo a imagem em `..\Burnout4_External.pe`. O mapping original completo não deve ser acrescentado ao comando de link do slice, pois o slice já fornece seu próprio `PPCFuncMappings`.
