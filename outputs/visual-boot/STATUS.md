# Estado de recuperação — boot visual

## Workspace ativo

O desenvolvimento continua em `work/ppc`. Não há repositório Git neste workspace. As comparações usam SHA-256 e os checkpoints em `outputs/visual-boot`.

## Marcos confirmados

- `checkpoint-01`: graphics init isolado termina normalmente; CP consome dois batches. Os 24 draws de preparação não escrevem cor/profundidade e não exportam memória.
- `build-boot0.log`: build da entrada real finalizado com `BOOT BUILD OK`.
- `boot2.log`: `_xstart` inicializa heap e TLS (64 slots conforme header do XEX).
- `boot6.log`: executa centenas de inicializadores CRT/C++; para no callback de construtor de array `8229FDA8`, LR `82097250`.
- Extractor ampliado para tabelas CRT verificadas e retenção conservadora de endereços de funções materializados pelo próprio PPC. Mantém corpos originais e registra proveniência em `ppc_boot/materialized_references.json`.
- Verificação: 90 hashes originais intactos; 5.282 corpos do slice de boot idênticos aos originais.

## Runtime acrescentado nesta retomada

- KeTlsAlloc/GetValue/SetValue/Free: slots reais em memória guest, bitmap de alocação, acesso pela KPCR.
- KeQuerySystemTime: FILETIME do host, big endian no destino guest.
- KeTimeStampBundle: variável importada mapeada; campo de uptime atualizado no hook de leitura. Outros campos param com diagnóstico.
- Lookup de boot inclui imports indiretas que têm implementação ou probe explícito.

## Limites atuais

Nenhuma janela ou imagem visual foi produzida. O backend de rasterização ainda não foi acionado: os draws observados pertencem somente à preparação gráfica. Threads simuladas do harness antigo, APIs não implementadas e demais dependências do boot ainda devem ser resolvidas conforme observadas. Os probes encerram com estado PPC; não retornam sucesso.

CP preservado nesta retomada: PM4 Type 0/1/2/3, IB, registros, coerência, writeback, uploads de shader, eventos e EDRAM de software. Unknown opcodes param; RPTR avança apenas depois de uma submissão executada com sucesso.

## Referências semânticas

[Xenia command processor](https://github.com/xenia-project/xenia/blob/master/src/xenia/gpu/command_processor.cc), [kernel threading](https://github.com/xenia-project/xenia/blob/master/src/xenia/kernel/xboxkrnl/xboxkrnl_threading.cc), [variáveis do kernel](https://github.com/xenia-project/xenia/blob/master/src/xenia/kernel/xboxkrnl/xboxkrnl_module.cc).
