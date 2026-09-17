#!/usr/bin/env python3
"""
Fail-closed orchestrator for the already validated dynamic_root_apply_one.py.

It NEVER pre-adds future roots. Per cycle:
  1. validate/apply exactly the blocker in the current log
  2. run official extract_ppc_slice.py --boot
  3. run official build_boot.py and require BOOT BUILD OK
  4. run burnout_boot_test.exe once and save a new log
  5. stop on VdSwap, AV/exception, new import, unexpected lookup LR,
     no next lookup, unexpected process exit without a valid lookup, or descriptor-family divergence
  6. otherwise use the newly produced log for the next cycle

Generated PPC is never edited by this script.
"""
from pathlib import Path
import argparse, subprocess, sys, re, datetime

EXPECTED_LR = 0x823629FC

def run_capture(cmd, cwd, logfile=None):
    p = subprocess.run(cmd, cwd=str(cwd), text=True,
                       stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    out = p.stdout or ""
    if logfile is not None:
        logfile.write_text(out, encoding="utf-8", errors="replace")
    return p.returncode, out

def stop(reason, **state):
    print("\nAUTO-LOOP STOP")
    print("REASON     =", reason)
    for k,v in state.items():
        print(f"{k.upper():<10} = {v}")
    raise SystemExit(0)

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("initial_log", type=Path)
    ap.add_argument("--ppc-dir", type=Path, default=Path("work/ppc"))
    ap.add_argument("--validator", type=Path, default=Path("dynamic_root_apply_one.py"))
    ap.add_argument("--max-cycles", type=int, default=25)
    a=ap.parse_args()

    root=Path.cwd().resolve()
    ppc=(root/a.ppc_dir).resolve()
    validator=(root/a.validator).resolve()
    current=(root/a.initial_log).resolve()
    visual=(root/"work/visual-boot").resolve()
    visual.mkdir(parents=True, exist_ok=True)

    required=[validator, ppc/"extract_ppc_slice.py", ppc/"build_boot.py",
              ppc/"burnout_boot_test.exe", current]
    missing=[str(x) for x in required if not x.exists()]
    if missing:
        stop("required file missing", missing="; ".join(missing))

    py=sys.executable

    for cycle in range(1,a.max_cycles+1):
        text=current.read_text(encoding="utf-8", errors="replace")

        if "VdSwap" in text:
            stop("VdSwap observed; mandatory milestone stop", log=current)
        if re.search(r"\b(?:AV|ACCESS_VIOLATION|EXCEPTION_ACCESS_VIOLATION)\b", text, re.I):
            stop("AV/exception marker observed", log=current)

        misses=re.findall(r"\[LOOKUP\]\s+Missing target=0x([0-9A-Fa-f]+)\s+LR=0x([0-9A-Fa-f]+)", text)
        if not misses:
            stop("no next [LOOKUP] Missing blocker", log=current)
        target_s, lr_s=misses[-1]
        target=int(target_s,16); lr=int(lr_s,16)
        if lr != EXPECTED_LR:
            stop("lookup LR left proven sub_82362980 family",
                 target=f"{target:08X}", lr=f"{lr:08X}", log=current)

        print(f"\n=== CYCLE {cycle}: target {target:08X}, LR {lr:08X} ===")

        # The validated helper remains the authority for SNAP/MAPPING/PPC_IMPL/
        # manifest checks and performs exactly one root append with backup.
        rc,out=run_capture(
            [py, str(validator), str(current), "--ppc-dir", str(ppc), "--apply-one"],
            root)
        print(out, end="" if out.endswith("\n") else "\n")
        if rc != 0:
            stop("validator/apply-one process failed", target=f"{target:08X}", log=current)
        if "DECISION   = ADDED " not in out and "DECISION   = ALREADY PRESENT " not in out:
            stop("apply-one did not produce an approved decision",
                 target=f"{target:08X}", log=current)
        if "DECISION   = ADDED " in out and "VERIFY     = PASS" not in out:
            stop("apply-one did not confirm post-write verification",
                 target=f"{target:08X}", log=current)

        rc,ext=run_capture([py, "extract_ppc_slice.py", "--boot"], ppc)
        extract_log=visual/f"auto-extract-{cycle:02d}-{target:08X}.log"
        extract_log.write_text(ext, encoding="utf-8", errors="replace")
        print(f"EXTRACT    = {'PASS' if rc==0 else 'FAIL'} ({extract_log})")
        if rc != 0:
            stop("official extractor failed", target=f"{target:08X}", log=extract_log)

        rc,bld=run_capture([py, "build_boot.py"], ppc)
        build_log=visual/f"auto-build-{cycle:02d}-{target:08X}.log"
        build_log.write_text(bld, encoding="utf-8", errors="replace")
        build_ok=(rc==0 and "BOOT BUILD OK" in bld)
        print(f"BUILD      = {'BOOT BUILD OK' if build_ok else 'FAIL'} ({build_log})")
        if not build_ok:
            stop("build failed or BOOT BUILD OK absent",
                 target=f"{target:08X}", log=build_log)

        run_log=visual/f"auto-run-{cycle:02d}-{target:08X}.log"
        rc,runout=run_capture([str(ppc/"burnout_boot_test.exe")], ppc, run_log)
        print(f"RUN        = exit {rc} ({run_log})")

        # The harness may intentionally return nonzero when BurnoutCallIndirect
        # reports the next missing dynamic PPC target. Therefore the exit code
        # alone is not a failure. First inspect semantic stop markers and the
        # next lookup; only a nonzero exit WITHOUT a valid expected lookup is
        # considered an execution failure.
        if "VdSwap" in runout:
            stop("VdSwap observed; mandatory milestone stop",
                 target=f"{target:08X}", log=run_log)
        if re.search(r"\b(?:AV|ACCESS_VIOLATION|EXCEPTION_ACCESS_VIOLATION)\b", runout, re.I):
            stop("AV/exception marker observed after run",
                 target=f"{target:08X}", log=run_log)

        # Treat common unresolved-import markers as a new blocker class.
        if re.search(r"(?:unimplemented|unresolved|missing)\s+import|BURNOUT_UNREACHED_IMPORT", runout, re.I):
            stop("new/unimplemented import blocker observed",
                 target=f"{target:08X}", log=run_log)

        next_misses=re.findall(
            r"\[LOOKUP\]\s+Missing target=0x([0-9A-Fa-f]+)\s+LR=0x([0-9A-Fa-f]+)",
            runout)
        if not next_misses:
            stop("run produced no next lookup blocker; table may have ended or blocker class changed",
                 target=f"{target:08X}", log=run_log)

        nt,nlr=(int(next_misses[-1][0],16), int(next_misses[-1][1],16))
        if nlr != EXPECTED_LR:
            stop("next lookup belongs to a different indirect-dispatch family",
                 target=f"{nt:08X}", lr=f"{nlr:08X}", log=run_log)

        if rc != 0:
            print(f"RUN EXIT   = {rc} accepted: valid next LOOKUP Missing in proven family")

        print(f"NEXT       = {nt:08X} LR={nlr:08X}")
        current=run_log

    stop("max-cycles reached", log=current)

if __name__=="__main__":
    main()
