from pathlib import Path
import difflib, hashlib, json, shutil
root = Path(__file__).resolve().parent.parent
p = root/'work/ppc'
original = Path('C:/burnoutrecomp/backup/ppc')
out = root/'outputs/lookup-fix'
(out/'files').mkdir(parents=True, exist_ok=True)
(out/'logs').mkdir(exist_ok=True)
names = ['extract_ppc_slice.py', 'graphics_slice.json', 'graphics_dispatch.h',
         'graphics_lookup.h', 'graphics_init_test.cpp', 'ppc_graphics_init_min.cpp', 'xbox_mmio.cpp']
diff = []
preconditions = {}
for name in names:
    shutil.copy2(p/name, out/'files'/name)
    prev = original/name
    preconditions[name] = hashlib.sha256(prev.read_bytes()).hexdigest() if prev.exists() else None
    # The generated file is delivered whole. Review source changes separately.
    if name == 'ppc_graphics_init_min.cpp': continue
    a = prev.read_text(encoding='utf-8').splitlines(True) if prev.exists() else []
    b = (p/name).read_text(encoding='utf-8').splitlines(True)
    diff.extend(difflib.unified_diff(a,b,fromfile='a/'+name,tofile='b/'+name))
(out/'changes.patch').write_text(''.join(diff),encoding='utf-8')
(out/'apply-preconditions.json').write_text(json.dumps(preconditions,indent=2))
for name in ['run_first_lookup_fix.log','run_av.log','run_third.log','run_final.log',
             'lookup_self_test.log','lookup_missing_test.log','lookup_invalid_test.log',
             'lookup_unaligned_test.log','build_final.log','extract_final.log']:
    shutil.copy2(root/'work'/name, out/'logs'/name)
shutil.copy2(root/'work/original_hashes.json',out/'original-hashes.json')
print(out)
