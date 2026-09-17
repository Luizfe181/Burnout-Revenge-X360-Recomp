# _xstart dynamic roots

## 01 — `sub_82369920`

- **Target:** `0x82369920` / `sub_82369920`
- **LR / caller:** `0x8222E3CC`, `sub_8222E2E0 + 0xEC`
- **Mechanism:** `bctrl` through vtable slot 0: `[[r31 + 0xB50] + 0]`.
- **Origin / legitimacy:** runtime vtable pointer of the initialized subobject; exact mapped PPC function entry. Its PPC body writes `r4/r5` to receiver offsets `+4448/+4452`.
- **Why root:** direct-call extraction cannot infer runtime vtable slots.
- **Automatic dependencies:** `sub_82366690` was retained through the direct tail call from the prior root `sub_8236AE58`; this target itself has no direct PPC callee.

## 02 — `sub_82367F78`

- **Target:** `0x82367F78` / `sub_82367F78`
- **LR / caller:** `0x8222E51C`, `sub_8222E2E0 + 0x23C`
- **Mechanism:** `bctrl` through `[ [r28] + 164 ]` (vtable slot at byte offset `0xA4`).
- **Origin / legitimacy:** `r28` is a subobject initialized in `sub_8222E2E0`; its vtable is read from guest state, and the target is an exact original PPC entry. The target stores the caller-supplied `r4/r5` at object offsets `+4500/+4504` and returns success.
- **Why root:** runtime vtable dispatch is not statically discoverable by the direct-call slice extractor.

## 03 — `sub_822239D0`

- **Target:** `0x822239D0` / `sub_822239D0`
- **LR / caller:** `0x8222E584`, `sub_8222E2E0 + 0x2A4`
- **Mechanism:** `bctrl` through vtable slot 0: load vtable from `[r31]`, then target from `[vtable]`.
- **Origin / legitimacy:** `r31` is the initialized owner object in `sub_8222E2E0`; exact mapped PPC function entry. It tail-calls `sub_82361A18`, which the extractor will retain as a direct dependency.
- **Why root:** runtime virtual dispatch is not statically discoverable.

## 04 — `sub_820BC860`

- **Target:** `0x820BC860` / `sub_820BC860`
- **LR / caller:** `0x820BC838`, `sub_820BC7E0 + 0x58`
- **Mechanism:** `bctrl` through slot 0: loop selects one of three subobjects, loads `[subobject]` then `[vtable]`.
- **Origin / legitimacy:** `sub_820BC7E0` constructs the three guest subobject addresses at `r3+624`, `+616`, and `+620` immediately before the loop. `sub_820BC860` is an exact PPC entry that clears fields `+4/+8/+12`.
- **Why root:** a valid runtime vtable dispatch outside direct-call extraction.

## 05 — `sub_820BC878`

- **Target:** `0x820BC878` / `sub_820BC878`
- **LR / caller:** `0x820BC838`, `sub_820BC7E0 + 0x58`
- **Mechanism:** same verified three-subobject vtable slot-0 loop.
- **Origin / legitimacy:** dynamically selected next subobject from the array constructed immediately before the loop. Exact PPC entry; initializes fields and records the three ranges (`+4/+8/+12`).
- **Why root:** dynamically proven function-pointer target; no proximity expansion was used.

## 06 — `sub_820BCCE8`

- **Target:** `0x820BCCE8` / `sub_820BCCE8`
- **LR / caller:** `0x820BC838`, `sub_820BC7E0 + 0x58`
- **Mechanism:** same verified vtable slot-0 loop over the third constructed subobject.
- **Origin / legitimacy:** exact original PPC entry; initializes its own ranges at `+4/+8/+12`. Dynamically observed, not selected by address proximity.

## 07 — `sub_82350D90`

- **Target:** `0x82350D90` / `sub_82350D90`
- **LR / caller:** `0x823517E8`, `sub_82351720 + 0xC8`
- **Mechanism:** `bctrl` through a method-table slot at `[ [r30] + 8 ]`; receiver `r3=r30`, argument `r4=r31`.
- **Origin / legitimacy:** exact original PPC function entry, reached from an initialized object method table. It reads the passed descriptor and executes direct calls that will be retained by extraction.
- **Why root:** direct-call slicing cannot infer the runtime method table entry.

## 08 — `sub_82351400`

- **Target:** `0x82351400` / `sub_82351400`
- **LR / caller:** `0x82351800`, `sub_82351720 + 0xE0`
- **Mechanism:** second `bctrl` on the same valid method table, slot at byte offset `+12`; receiver `r3=r30`, argument `r4=r29`.
- **Origin / legitimacy:** exact PPC entry; processes the passed string/descriptor and calls direct dependencies.

## 09 — `sub_82151C00`

- **Target:** `0x82151C00` / `sub_82151C00`
- **LR / caller:** `0x82341784`, `sub_823413E8`
- **Mechanism:** `bctrl` through slot 0 of the initialized object at `r31 + 0x260460`.
- **Origin / legitimacy:** exact PPC entry; clears receiver fields `+4/+8/+64`. The target came from a guest vtable read immediately before `mtctr`.

## 10 — `sub_8220F660`

- **Target:** `0x8220F660`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Mechanism:** valid `bctrl` through `[ [r3] + 0 ]` on an initialized guest entry.
- **Legitimacy:** exact original PPC state/event-handler entry; dynamic dispatch only.



## 11 - `sub_8220F9F8`

- **Target:** `0x8220F9F8`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Mechanism:** virtual `bctrl` through slot zero after the caller builds `r3 = [r30 + 8] + r31`.
- **Runtime proof:** `r3=82A59ED0`, `[r3]=820398F4`, and `[[r3]+0]=8220F9F8`; all three guest reads were committed. The dispatch retained `r30=820385C0`, `r31=82A59E98`, and lookup target `8220F9F8`.
- **Legitimacy:** `sub_8220F9F8` is an exact original PPC function entry. The live descriptor/object/vtable chain proves an un-inferred dynamic dispatch, with no indication of pointer corruption.
- **Why root:** the direct-call extractor cannot discover this runtime vtable slot.


## 12 - `sub_82208E28`

- **Target:** `0x82208E28`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Mechanism and runtime proof:** same instrumented virtual slot-zero dispatch: `r3=82A5A3F8`, `[r3]=820398F8`, `[[r3]+0]=82208E28`, all committed; `r30=820385D0`, `r31=82A59E98`.
- **Legitimacy:** exact original PPC function entry in `ppc_recomp.25.cpp`, with standard prologue/body. The coherent descriptor/object/vtable chain shows a dynamic target omitted only by direct-call slicing.


## 13 - `sub_8220D4F8`

- **Target:** `0x8220D4F8`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** same live slot-zero path: `r3=82A5A920`, `[r3]=8203942C`, `[[r3]+0]=8220D4F8`, all committed; `r30=820385E0`, `r31=82A59E98`.
- **Legitimacy:** exact original PPC entry in `ppc_recomp.25.cpp`; no invalid-object or pointer indication.


## 14 - `sub_8220D840`

- **Target:** `0x8220D840`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** slot-zero chain remained coherent: `r3=82A5A998`, `[r3]=8203943C`, `[[r3]+0]=8220D840`, all committed; `r30=820385F0`, `r31=82A59E98`.
- **Legitimacy:** exact original PPC entry in `ppc_recomp.25.cpp`, reached only because direct-call slicing cannot infer the vtable.


## 15 - `sub_82205B50`

- **Target:** `0x82205B50`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** exact same checked dispatch: `r3=82A5A9C0`, `[r3]=82039440`, `[[r3]+0]=82205B50`, all committed; `r30=82038600`, `r31=82A59E98`.
- **Legitimacy:** original PPC entry in `ppc_recomp.25.cpp`; target was omitted solely by dynamic vtable dispatch.


## 16 - `sub_82206500`

- **Target:** `0x82206500`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** checked slot-zero dispatch: `r3=82A5A9D8`, `[r3]=82039444`, `[[r3]+0]=82206500`, all committed; `r30=82038610`, `r31=82A59E98`.
- **Legitimacy:** exact original PPC entry in `ppc_recomp.25.cpp`; dynamic vtable target only.


## 17 - `sub_82205FE8`

- **Target:** `0x82205FE8`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** checked slot-zero chain: `r3=82A5A9F8`, `[r3]=82039448`, `[[r3]+0]=82205FE8`, all committed; `r30=82038620`, `r31=82A59E98`.
- **Legitimacy:** exact original PPC entry in `ppc_recomp.25.cpp`; omitted only by dynamic vtable dispatch.


## 18 - `sub_82205F28`

- **Target:** `0x82205F28`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** checked slot-zero chain: `r3=82A5AA58`, `[r3]=8203944C`, `[[r3]+0]=82205F28`, all committed; `r30=82038630`, `r31=82A59E98`.
- **Legitimacy:** exact original PPC entry in `ppc_recomp.25.cpp`; dynamic vtable target only.


## 19 - `sub_82205540`

- **Target:** `0x82205540`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** checked slot-zero chain: `r3=82A5AAB0`, `[r3]=82039450`, `[[r3]+0]=82205540`, all committed; `r30=82038640`, `r31=82A59E98`.
- **Legitimacy:** exact original PPC entry in `ppc_recomp.25.cpp`; dynamic vtable target only.


## 20 - `sub_822056B8`

- **Target:** `0x822056B8`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** same checked virtual slot-zero dispatch, with guest object/vtable/slot committed and target equal to the lookup value.
- **Static proof:** exact mapped original PPC function entry in `ppc_recomp.25.cpp`, with a normal prologue and body; no internal-block or data interpretation.
- **Reason:** direct-call extraction cannot infer this vtable edge.


## 21 - `sub_822059B0`

- **Target:** `0x822059B0`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** `r3=82A5AB30`, `[r3]=82039458`, `[[r3]+0]=822059B0`; all committed, with `r30=82038660`, `r31=82A59E98`.
- **Static proof:** exact original PPC function entry in `ppc_recomp.25.cpp`; dynamic vtable edge only.


## 22 - `sub_82213900`

- **Target:** `0x82213900`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** `r3=82A5AB50`, `[r3]=8203945C`, `[[r3]+0]=82213900`; all committed, with `r30=82038670`, `r31=82A59E98`.
- **Static proof:** exact original PPC entry in `ppc_recomp.26.cpp`; no pointer-corruption evidence, and omission is the dynamic vtable edge.


## 23 - `sub_82206230`

- **Target:** `0x82206230`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** `r3=82A5AC60`, `[r3]=82039460`, `[[r3]+0]=82206230`, all committed; `r30=82038680`, `r31=82A59E98`.
- **Static proof:** exact original PPC entry in `ppc_recomp.25.cpp`; dynamic vtable edge only.


## Dispatch-table observation: `sub_82362980`

- `r31` is the fixed owner base (`r3` at function entry); each receiver is `r31 + lwz(r30+8)`.
- `r30` starts as descriptor `r5`, advances by 16 after each completed virtual call, and the next 64-bit word at `[r30]` is the loop sentinel. A zero word exits.
- Static image inspection at descriptor base `0x820385B0` finds **61 nonzero entries**, followed by a zero sentinel at `0x82038980`. This is observational only; no unobserved handler was added.
- Current target was index 14 (zero based), so 46 descriptor entries remain after it if execution retains this table.

## 24 - `sub_82205170`

- **Target:** `0x82205170`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** `r3=82A5AC80`, `[r3]=82039464`, `[[r3]+0]=82205170`; all committed, with `r30=82038690`, `r31=82A59E98`.
- **Static proof:** exact original PPC function entry in `ppc_recomp.25.cpp`, normal prologue/body; omitted only by the dynamic slot-zero edge.


## 25 - `sub_822052A8` (descriptor 15/61)

- **Descriptor:** `0x820386A0`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** `r3=82A5ACA0`, `[r3]=82039468`, `[[r3]+0]=822052A8`; all committed; `r30=820386A0`, `r31=82A59E98`.
- **Static proof:** exact original PPC entry in `ppc_recomp.25.cpp`, normal body; omitted only by the observed slot-zero vtable edge.
- **Progress:** descriptors completed: 16/61; remaining: 45.


## 26 - `sub_8220ED30` (descriptor 16/61)

- **Descriptor:** `0x820386B0`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** `r3=82A5AD90`, `[r3]=82039480`, `[[r3]+0]=8220ED30`; all committed; `r30=820386B0`, `r31=82A59E98`.
- **Static proof:** exact original PPC entry in `ppc_recomp.25.cpp`; dynamic vtable edge only.
- **Progress:** descriptors completed: 17/61; remaining: 44.


## 27 - `sub_8220EF00` (descriptor 17/61)

- **Descriptor:** `0x820386C0`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** `r3=82A5ADB0`, `[r3]=82039484`, `[[r3]+0]=8220EF00`; committed coherent chain.
- **Static proof:** exact original PPC entry in `ppc_recomp.25.cpp`; dynamic edge only.
- **Progress:** 18/61 completed; 43 remaining.


## 28 - `sub_822076D8` (descriptor 18/61)

- **Descriptor:** `0x820386D0`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** `r3=82A5AD20`, `[r3]=82039470`, `[[r3]+0]=822076D8`; committed coherent chain.
- **Static proof:** exact original PPC entry in `ppc_recomp.25.cpp`; dynamic edge only.
- **Progress:** 19/61 completed; 42 remaining.


## 29 - `sub_822077C8` (descriptor 19/61)

- **Descriptor:** `0x820386E0`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** target observed through the same committed slot-zero vtable chain.
- **Static proof:** exact original PPC entry in `ppc_recomp.25.cpp`; dynamic edge only.
- **Progress:** 20/61 completed; 41 remaining.


## 30 - `sub_820A3988` (descriptor 20/61)

- **Descriptor:** `0x820386F0`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** `r3=82A5AD58`, `[r3]=82039478`, `[[r3]+0]=820A3988`; all reads committed and coherent.
- **Static proof:** exact original PPC entry in `ppc_recomp.1.cpp`; same dynamic vtable family despite a different code shard.
- **Progress:** 21/61 completed; 40 remaining.


## 31 - `sub_822078E0` (descriptor 21/61)

- **Descriptor:** `0x82038700`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** `r3=82A5AD78`, `[r3]=8203947C`, `[[r3]+0]=822078E0`; committed coherent chain.
- **Static proof:** exact original PPC entry in `ppc_recomp.25.cpp`; dynamic edge only.
- **Progress:** 22/61 completed; 39 remaining.


## 32 - `sub_82207508` (descriptor 22/61)

- **Descriptor:** `0x82038710`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** `r3=82A5AD00`, `[r3]=8203946C`, `[[r3]+0]=82207508`; committed coherent chain.
- **Static proof:** exact original PPC entry in `ppc_recomp.25.cpp`; dynamic edge only.
- **Progress:** 23/61 completed; 38 remaining.


## 33 - `sub_822079A0` (descriptor 23/61)

- **Descriptor:** `0x82038720`; **LR/caller:** `0x823629FC`, `sub_82362980`.
- **Runtime proof:** `r3=82A5ADD0`, `[r3]=82039488`, `[[r3]+0]=822079A0`; committed coherent chain.
- **Static proof:** exact original PPC entry in `ppc_recomp.25.cpp`; dynamic edge only.
- **Progress:** 24/61 completed; 37 remaining.


## 34 - `sub_8220E140` (descriptor 24/61)

- **Snapshot/runtime proof:** descriptor `0x82038730` yielded `r3=82A5ADF0`, vtable `8203948C`, slot zero `8220E140`, matching the validated snapshot.
- **Static proof:** exact original PPC entry in `ppc_recomp.25.cpp`; dynamic vtable edge only.
- **Progress:** 25/61 completed; 36 remaining.


## 35 - `sub_8220E448` (descriptor 25/61)

- **Snapshot/runtime proof:** `desc=82038740`, `r3=82A5B190`, vtable `82039494`, slot 0 `8220E448`, matching the 61-entry validated snapshot.
- **Static proof:** exact original PPC entry in `ppc_recomp.25.cpp`; dynamic vtable edge only.
- **Progress:** 26/61 completed; 35 remaining.


## 36 - `sub_8220E980` (descriptor 26/61)

- **Snapshot/runtime proof:** descriptor `0x82038750`, object `82A5AE10`, vtable `82039490`, slot 0 `8220E980`; matches validated snapshot.
- **Static proof:** exact original PPC entry in `ppc_recomp.25.cpp`; dynamic edge only.
- **Progress:** 27/61 completed; 34 remaining.


## 37 - `sub_8220E938` (descriptor 27/61)

- **Snapshot/runtime proof:** descriptor `0x82038760`, object `82A5B1B0`, vtable `82039498`, slot 0 `8220E938`; matching snapshot.
- **Static proof:** exact original PPC entry in `ppc_recomp.25.cpp`; dynamic edge only.
- **Progress:** 28/61 completed; 33 remaining.


## 38 - `sub_82213180` (descriptor 28/61)

- **Snapshot/runtime proof:** descriptor `0x82038770`, object `82A5B1D0`, vtable `8203949C`, target `82213180`; validated snapshot match.
- **Static proof:** exact original PPC entry in `ppc_recomp.26.cpp`; dynamic edge only.
- **Progress:** 29/61 completed; 32 remaining.


## 39 - `sub_82212B78` (descriptor 29/61)

- Snapshot match; exact original PPC entry in `ppc_recomp.26.cpp`. Progress: 30/61; 31 remaining.


## 40 - `sub_822122C8` (descriptor 30/61)

- Snapshot match; exact original PPC entry in `ppc_recomp.26.cpp`. Progress: 31/61; 30 remaining.


## 41 - `sub_822073A0` (descriptor 31/61)

- Snapshot match; exact original PPC entry in `ppc_recomp.25.cpp`. Progress: 32/61; 29 remaining.


## 42 - `sub_82209AC0` (descriptor 32/61)

- Snapshot match; exact original PPC entry in `ppc_recomp.25.cpp`. Shared by descriptors 32..36. Progress after execution expected through 37/61.


## 43 - `sub_82208590` (descriptor 37/61)

- Snapshot match; exact original PPC entry in `ppc_recomp.25.cpp`. Progress: 38/61; 23 remaining.


## 44 - `sub_82208A78` (descriptor 38/61)

- Snapshot match; exact original PPC entry in `ppc_recomp.25.cpp`. Progress: 39/61; 22 remaining.


## 45 - `sub_822088A8` (descriptor 39/61)

- Snapshot match; exact original PPC entry in `ppc_recomp.25.cpp`. Progress: 40/61; 21 remaining.


## 46 - `sub_82208968` (descriptor 40/61)

- Snapshot match; exact original PPC entry in `ppc_recomp.25.cpp`. Progress: 41/61; 20 remaining.
