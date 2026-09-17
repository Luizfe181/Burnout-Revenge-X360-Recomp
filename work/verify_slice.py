from pathlib import Path
import hashlib, json, re, struct
p = Path(__file__).parent / 'ppc'
original = Path('C:/burnoutrecomp/backup/ppc')
hashes = json.loads((p.parent/'original_hashes.json').read_text())
for name, expected in hashes.items():
    assert hashlib.sha256((original/name).read_bytes()).hexdigest() == expected, name
pattern = re.compile(r'PPC_FUNC_IMPL\((\w+)\) \{.*?^\}', re.M | re.S)
originals = {}
for f in original.glob('ppc_recomp.*.cpp'):
    for match in pattern.finditer(f.read_text(encoding='utf-8')):
        originals[match[1]] = match[0]
selected = dict((m[1],m[0]) for m in pattern.finditer((p/'ppc_graphics_init_min.cpp').read_text()))
for name, body in selected.items():
    assert body == originals[name], name
assert '__imp__sub_823EE808' in selected
slice_text = (p/'ppc_graphics_init_min.cpp').read_text()
mapping = dict((int(a,16),n) for a,n in re.findall(r'\{ 0x([A-Fa-f0-9]+), (\w+) \}',slice_text))
manifest = json.loads((p/'graphics_slice.json').read_text())
image = (p/manifest['image']).read_bytes()
count = 0
for table in manifest['function_tables']:
    for i in range(table['count']):
        off = int(table['address'],0)-int(manifest['image_base'],0)+i*table['stride']+table['target_offset']
        address, = struct.unpack_from('>I',image,off)
        assert address in mapping, hex(address)
        count += 1
print(f'PASS: {len(hashes)} original files unchanged; {len(selected)} bodies identical to original PPC; {count} callback entries mapped.')
