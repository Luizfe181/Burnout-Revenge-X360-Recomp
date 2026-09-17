from pathlib import Path
import hashlib, json, shutil
root = Path(__file__).resolve().parent.parent
package = root/'outputs/lookup-fix'
target = Path('C:/burnoutrecomp/backup/ppc')
expected = json.loads((package/'apply-preconditions.json').read_text())
backup = package/'before-apply'
backup.mkdir(exist_ok=True)
for name, digest in expected.items():
    dest = target/name
    actual = hashlib.sha256(dest.read_bytes()).hexdigest() if dest.exists() else None
    if actual != digest:
        raise SystemExit(f'STOP: file changed since review: {dest}')
for name in expected:
    dest = target/name
    if dest.exists(): shutil.copy2(dest,backup/name)
    shutil.copy2(package/'files'/name,dest)
baseline = json.loads((package/'original-hashes.json').read_text())
for name, digest in baseline.items():
    if name.startswith('ppc_recomp.'):
        assert hashlib.sha256((target/name).read_bytes()).hexdigest() == digest, name
print(f'Applied {len(expected)} files; 90 original PPC translation units unchanged.')
