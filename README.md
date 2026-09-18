# Burnout Revenge — Static Recompilation / PC Port Research

> **Status:** experimental, work in progress. The project currently boots through the original Xbox 360 PowerPC startup path and is progressively implementing the runtime and Xenos compatibility required to reach the first real rendered frame on PC.

## Overview

This repository contains an experimental **static recompilation and compatibility runtime** for bringing the Xbox 360 version of *Burnout Revenge* to PC.

The goal is **not** to recreate the game, replace its engine, or emulate the entire Xbox 360. Instead, the project recompiles the game's original PowerPC code into native PC code and supplies the platform services that code expects: memory, threads, synchronization, kernel/XAM imports, command processor behavior, Xenos GPU state, EDRAM handling, and eventually presentation of the game's real output.

The intended architecture is:

```text
Original Xbox 360 game code (PowerPC)
                 │
                 ▼
       Static PPC recompilation
                 │
                 ▼
       Generated PPC C++ code
          [READ-ONLY output]
                 │
                 ▼
        PC compatibility runtime
      ┌──────────┼───────────┐
      │          │           │
   Kernel/XAM   Memory     Threads/Sync
      │          │           │
      └──────────┼───────────┘
                 │
                 ▼
           Xenos compatibility
       Command Processor / EDRAM
                 │
                 ▼
          Native PC presentation
```

The project deliberately preserves the original execution path. Intermediate game functions are not called manually to fake progress: the boot enters through the original `_xstart` path and advances according to the game's own PPC code.

---

## Project principles

Several rules are intentionally strict because they keep the project a recompilation rather than a manual rewrite.

### Generated PPC is read-only

Files such as generated `ppc_recomp.*.cpp` code are output from the recompilation pipeline and must **not** be manually patched to make the game advance.

If generated PPC is incorrect, the fix belongs in the translator/recompiler and the code must then be regenerated through the official pipeline.

If a legitimate PPC function is absent only because a static slice cannot infer a dynamic edge, the function is added as a proven slice root and the slice is regenerated.

### No fake success

Runtime functions that require meaningful semantics should not simply return success to bypass a blocker. Kernel, synchronization, timing, memory and GPU behavior should model what the original code expects closely enough for the original program to continue naturally.

### Preserve the Xenos path

The existing Xenos command processor work is part of the port. It must not be bypassed with a fake renderer or a hardcoded framebuffer just to display something.

The first visible image should ultimately originate from the game's real command stream.

### `_xstart` is the boot entry

The normal boot path is used. The project does not jump directly to graphics functions, frame functions, `VdSwap`, or other milestones.

---

# Current progress

## Real PPC startup

The test runtime successfully enters the game's original `_xstart` path.

A proven portion of the startup chain is:

```text
_xstart / sub_825B04F8
        │
        ▼
sub_820A3AF0
        │
        ▼
sub_8211A9F0
        │
        ├──► sub_8217E958
        │
        ├──► sub_8210E458
        │
        └──► additional initializers
        │
        ▼
sub_8211B168
        │
        ▼
startup / frame progression
```

Earlier test harnesses called graphics initialization directly. That approach has been removed from the active boot path in favor of the real startup sequence.

## PPC worker/runtime support

The runtime has progressed beyond simple single-threaded execution.

Current work includes:

- multiple real worker threads;
- independent PPC contexts;
- independent guest stacks;
- KPCR state;
- TLS state;
- guest/native synchronization mapping;
- event objects;
- semaphore waits;
- timer objects;
- relative timer due-time behavior;
- guest memory lifetime fixes.

Six PPC workers have successfully been started during the boot path.

A previously proven worker path includes:

```text
0x825B5358
    ↓
0x825B7820
    ↓
real semaphore waits
```

## Kernel/runtime implementations

Examples of runtime work already completed include real handling for functionality such as:

- `NtCreateTimer`
- `NtSetTimerEx`
- event creation/waits
- guest/native handle association
- synchronization timers
- notification timers
- relative due times

A stack corruption bug was also found where `XGetVideoMode` wrote more bytes than the guest structure expected. Correcting that allowed boot execution to continue further.

---

# Xenos / graphics progress

The project already processes real Xbox 360 GPU command data rather than merely reaching graphics-related CPU functions.

## Ring buffer and indirect buffers

The runtime has successfully initialized and consumed Xenos command buffers.

Observed examples include:

```text
Ring buffer: 0x10000000
Ring size:   64 KiB
```

Observed indirect buffers include:

```text
IB 0x10049680 — 11 dwords
IB 0x10010000 — 345 dwords
```

Physical-address alias translation was implemented centrally so GPU ring/IB addresses can resolve correctly when the game references physical aliases.

## Command Processor

The current Xenos CP implementation has decoded significant portions of the real command stream, including state from areas such as:

- SQ
- PA
- RB
- VGT
- copy registers
- shader packets
- draw packets
- event/register/memory writes

The boot has processed shader-related Type-3 packets and real draw commands.

For the currently observed initialization path, the draw opcode is Type-3 `0x36`.

At least **24 draw commands** have been observed in the initial graphics workload.

The currently observed draws still have color/depth output effectively masked, so they do not yet produce the first visible frame. This is consistent with initialization/state-validation work, although that interpretation remains an engineering inference rather than a proven game-level label.

## EDRAM

A 10 MiB software EDRAM allocation exists in the compatibility layer.

Three important physical blocks observed during initialization are:

```text
0x10740000
0x10AD8000
0x10E70000
```

Their complete roles are still being investigated.

EDRAM allocation exists, but complete render-target, rasterization, resolve and presentation semantics are not yet implemented.

---

# Present / swap investigation

Static and debugger analysis has identified an important original graphics path:

```text
sub_82388B58
    │
    ├──► VdGetSystemCommandBuffer
    │
    ├──► command construction
    │
    ├──► VdSwap
    │
    └──► frame bookkeeping
```

A deeper chain observed in the original execution environment is:

```text
sub_82388B58
    ↓
sub_82382BC8
    ↓
sub_82382798
    ↓
sub_8238CD28
```

Reaching `VdSwap` naturally through `_xstart` is a major near-term milestone.

`VdSwap` itself is **not** treated as proof that a visible PC frame exists. A complete path still requires correct render-target state, EDRAM writes, resolve/copy behavior and native presentation.

---

# Dynamic PPC roots

One important challenge is indirect PowerPC control flow.

A static slice extractor can follow ordinary direct calls, but it cannot always know the runtime destination of instructions such as:

```text
bctr
bctrl
```

when the destination comes from a vtable, function pointer, dispatch table or runtime object.

The project therefore uses a conservative **dynamic-root validation process**.

A missing target is only added to the boot slice when evidence proves that:

1. the runtime reached the address through legitimate original PPC indirect dispatch;
2. the address is an exact PPC function entry;
3. a real `PPC_FUNC_IMPL` exists in the full generated source;
4. the full PPC mapping contains the address;
5. pointer provenance is valid and points through committed guest memory;
6. the function is missing only because the static slice could not infer the dynamic edge.

Only that specific proven function is then added to `graphics_slice.json`, followed by official regeneration.

Whole vtables, neighboring address ranges and guessed future functions are **not** pre-included.

## Completed 61-entry dispatch family

A major runtime dispatch loop in `sub_82362980` walks a descriptor table and invokes virtual/function-pointer handlers.

The table contains **61 non-zero descriptors** followed by a terminator.

All 61 entries on this path have now executed without an unresolved slice target.

The runtime behavior is conceptually:

```text
for each descriptor:
    object = owner_base + descriptor.object_offset
    target = object->vtable[0]
    target(object)
```

This family was resolved incrementally rather than by adding all possible handlers in advance.

## Subsequent proven roots

After completing the 61-entry family, additional legitimate dynamic dispatches were encountered.

### `sub_8210D528`

Runtime dispatch:

```text
LR     = 0x8211AD74
target = 0x8210D528
```

Runtime telemetry proved the vtable relationship and the function was added as a legitimate dynamic slice root.

### `sub_8210E690`

Runtime dispatch:

```text
LR     = 0x8211AE00
target = 0x8210E690
```

The callsite uses an indirect `bctrl`, with the destination loaded from guest memory. Runtime telemetry proved that the committed pointer resolved to `0x8210E690`.

This root has also been added and successfully executed.

### Current blocker

At the time of this README, the next unresolved dynamic target is:

```text
target = 0x82353598
LR     = 0x820C5DEC
```

Static analysis has already established that `sub_82353598` is a real PPC function and is present in the full function mapping.

The relevant original callsite is equivalent to:

```text
lwz   r7, 0(r8)
mtctr r7
bctrl
```

The next step is passive runtime pointer-provenance validation before adding this function to the boot slice.

Immediately after this callsite, another indirect dispatch exists with LR `0x820C5E00`; its runtime target must **not** be guessed or pre-added.

---

# Recompiler work

A significant bug was found in generated jump-table handling.

Some `bctr` jump-table cases targeted valid PPC functions located outside the current generated function range, but the generated code emitted an error/return path instead of transferring control to the valid target.

Example affected flow included targets around:

```text
0x8210D508
0x8210D18C
```

The fix was made in the **recompiler source**, not by patching generated game code.

The generalized behavior now tail-calls a valid PPC symbol when a jump-table destination is a known function outside the current function range. Unknown destinations still remain errors.

After official regeneration, an allocator crash caused by the incorrect control flow disappeared.

This is an important project rule in practice:

> Translation bugs are fixed in the translator and regenerated. Generated PPC is never manually repaired.

---

# Repository layout

The exact tree may evolve, but important files include:

```text
work/
└── ppc/
    ├── build_boot.py
    ├── extract_ppc_slice.py
    ├── graphics_slice.json
    ├── graphics_lookup.h
    ├── graphics_init_test.cpp
    ├── ppc_recomp.*.cpp
    └── ... runtime / compatibility sources
```

### `graphics_slice.json`

Defines the PPC subset/roots used by the current graphics/boot slice.

Dynamic roots are added here **only after runtime and static validation**.

### `extract_ppc_slice.py`

Official local extraction step used to regenerate the boot PPC slice.

### `build_boot.py`

Builds the current boot test executable.

A successful build ends with:

```text
BOOT BUILD OK
```

### `graphics_lookup.h`

Contains indirect-call lookup support and passive diagnostics used to understand dynamic PPC dispatch.

Instrumentation added here must remain observational: it must not alter guest registers, memory, control flow or game behavior.

---

# Building the current boot test

## Requirements

The development environment currently uses Windows and a native C/C++ toolchain.

The Python launcher available for the scripts is currently:

```cmd
py
```

Do not assume a hardcoded Miniconda path. Development environments should use whichever compatible Python installation is available locally.

## Regenerate the PPC boot slice

From the repository root:

```cmd
py work\ppc\extract_ppc_slice.py --boot
```

The extractor must finish successfully before the resulting build is considered a valid new slice.

## Build

```cmd
py work\ppc\build_boot.py
```

Expected final message:

```text
BOOT BUILD OK
```

## Run

Example:

```cmd
cd work\ppc
burnout_boot_test.exe
```

For investigation it is usually more useful to capture a log:

```cmd
burnout_boot_test.exe > "..\visual-boot\run.log" 2>&1
```

Then return to the repository root:

```cmd
cd ..\..
```

---

# Dynamic-root workflow

When the runtime stops with something like:

```text
[LOOKUP] Missing target=0xXXXXXXXX LR=0xXXXXXXXX
```

**do not immediately add the target to the slice.**

The normal investigation is:

```text
Runtime Missing target
        │
        ▼
Confirm exact PPC function entry
        │
        ▼
Confirm PPC_FUNC_IMPL
        │
        ▼
Confirm full function mapping
        │
        ▼
Inspect LR / indirect callsite
        │
        ▼
Determine pointer provenance
        │
        ▼
Passive runtime probe if required
        │
        ▼
Prove runtime pointer == target
        │
        ▼
Add only that root
        │
        ▼
Official slice extraction
        │
        ▼
Build
        │
        ▼
Real _xstart run
```

Automation is allowed for repeated blockers of this already-understood class, provided every target still passes the validation rules.

---

# Mandatory investigation stops

Automated dynamic-root resolution must stop when a blocker is no longer simply a proven missing indirect PPC edge.

Examples include:

- access violation;
- exception/crash;
- corrupt or uncommitted guest pointer;
- target that is not an exact PPC function entry;
- PPC translation error;
- required unimplemented import;
- deadlock or lack of forward progress;
- behavior divergence;
- required runtime/kernel semantic change;
- required recompiler change;
- required Xenos CP change;
- any situation that would require a fake/stub implementation.

The automation must also stop at the **first naturally reached `VdSwap`** so graphics state can be captured before further changes.

---

# First `VdSwap` capture plan

When the original boot reaches `VdSwap`, the project should record at least:

```text
RB_SURFACE_INFO
RB_COLOR_INFO
RB_COLOR_MASK
RB_DEPTH_INFO
RB_DEPTHCONTROL
RB_MODECONTROL
RB_COPY_CONTROL
RB_COPY_DEST_BASE
RB_COPY_DEST_PITCH
RB_COPY_DEST_INFO
RPTR / WPTR
current ring buffer
current command buffer
current indirect buffer
recent draw commands
active shaders
```

Special attention should be paid to changes involving:

```text
0x10740000
0x10AD8000
0x10E70000
```

The first non-zero observations of the following are particularly important:

```text
RB_SURFACE_INFO
RB_COLOR_INFO
RB_COLOR_MASK
RB_COPY_CONTROL
```

No fake PC presentation should be introduced merely because `VdSwap` has been reached.

---

# Current graphics milestone

The current objective is **the first real game-generated image**.

The rough progression is:

```text
PPC boot                         ✓
Threads / synchronization       ✓ substantial progress
GPU ring / IB consumption       ✓
Xenos packet decoding           ✓ substantial progress
Shader packet handling          ✓ partial
Draw submission                 ✓ partial
EDRAM allocation                ✓
Valid render-target writes      in progress
Resolve / copy                  incomplete
Natural VdSwap                  not yet reached in current boot
Native PC presentation          incomplete
First visible game frame        not yet reached
```

Percent-complete estimates used during development are informal engineering estimates only and should not be interpreted as an objective project metric.

---

# What this repository does NOT contain

This repository is intended for recompilation/runtime development and should **not** contain copyrighted game data.

Do not commit or distribute:

- game executables obtained from retail content;
- extracted game assets;
- Xbox Games on Demand packages;
- proprietary audio/video/data files;
- encryption keys;
- console credentials;
- other copyrighted content required to run the original game.

Users are responsible for supplying any legally obtained game data required for their own local testing.

---

# Git workflow

Git checkpoints are preferred over ad-hoc copies of source files.

Before a significant change:

```cmd
git status
```

After a milestone is proven, commit the relevant source/configuration changes.

Examples of useful commit messages:

```text
checkpoint: real xstart boot
runtime: implement timer semantics
recompiler: support valid external bctr jump-table targets
graphics: complete 82362980 dynamic dispatch family
slice: add proven dynamic root 8210D528
slice: add proven dynamic root 8210E690
```

Generated build artifacts, large runtime logs and proprietary game data should normally remain ignored.

---

# Development philosophy

The central question when encountering a blocker is not:

> “What can we stub so the program keeps going?”

It is:

> “What behavior did the original Xbox 360 program expect here, and what is the smallest correct compatibility implementation that preserves that behavior on PC?”

This applies equally to PPC translation, kernel calls, synchronization, memory, Xenos command processing and presentation.

The result should remain traceable to the original program's execution rather than becoming a parallel reimplementation of the game.

---

# Near-term roadmap

The immediate work is centered on continuing the natural `_xstart` boot while resolving only validated dynamic PPC edges.

Near-term milestones are:

1. validate the `0x82353598 / LR 0x820C5DEC` indirect dispatch;
2. continue through subsequent legitimate dynamic roots;
3. reach `sub_82388B58` naturally through the original startup/frame path;
4. reach the first real `VdSwap`;
5. capture complete Xenos render/copy state at that point;
6. identify the first valid render target and EDRAM writes;
7. implement/complete required resolve/copy semantics;
8. connect the resulting real game output to native PC presentation;
9. obtain the first visible frame;
10. continue from initialization toward interactive gameplay.

---

# Experimental status

This is an active reverse-engineering/recompilation research project. It is **not currently a finished PC port**.

There is no guarantee of gameplay, visual output, compatibility, stability or performance at the current stage.

The project has nevertheless progressed beyond a proof-of-concept recompiler invocation: original PPC startup code, worker execution, synchronization, timers, GPU command buffers, Xenos state packets and real draw commands are already executing through the PC compatibility environment.

The next major visual milestone is the first naturally produced game frame.
