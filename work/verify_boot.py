from pathlib import Path
import hashlib,json,re
p=Path(__file__).resolve().parent/'ppc'
hashes=json.loads((p.parent/'original_hashes.json').read_text())
originals={n:h for n,h in hashes.items() if re.fullmatch(r'ppc_recomp\.\d+\.cpp',n)}
for n,h in originals.items(): assert hashlib.sha256((p/n).read_bytes()).hexdigest()==h,n
pattern=re.compile(r'PPC_FUNC_IMPL\((\w+)\) \{.*?^\}',re.M|re.S)
bodies={m[1]:m[0] for n in originals for m in pattern.finditer((p/n).read_text(encoding='utf-8'))}
count=0
for f in (p/'ppc_boot').glob('ppc_recomp.*.cpp'):
 for m in pattern.finditer(f.read_text(encoding='utf-8')):
  assert bodies[m[1]]==m[0],m[1]
  count+=1
print(f'PASS: {len(originals)} original SHA256 hashes unchanged; {count} boot bodies match exact originals.')
