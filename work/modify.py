from pathlib import Path
import json
p = Path(__file__).parent / 'ppc'
f = p / 'extract_ppc_slice.py'
s = f.read_text(encoding='utf-8')
s = s.replace('import re\n', 'import re\nimport json\nimport struct\n')
anchor = 'selected_impl = set()'
addition = '''# Indirect targets cannot be inferred from a register-based bctrl alone.
# Describe verified image tables or observed targets in a separate manifest.
manifest = json.loads((HERE / "graphics_slice.json").read_text(encoding="utf-8"))
mapping_text = (HERE / "ppc_func_mapping.cpp").read_text(encoding="utf-8")
mapping_entries = [(int(a, 16), n) for a, n in re.findall(
    r"\\{\\s*0x([0-9A-Fa-f]+),\\s*([A-Za-z_][A-Za-z0-9_]*)\\s*\\}", mapping_text)]
address_to_name = dict(mapping_entries)
image = (HERE / manifest["image"]).read_bytes()
image_base = int(manifest["image_base"], 0)
indirect_roots = set(manifest.get("extra_roots", []))
for table in manifest["function_tables"]:
    start = int(table["address"], 0) - image_base
    for index in range(table["count"]):
        offset = start + index * table["stride"] + table["target_offset"]
        if offset < 0 or offset + 4 > len(image):
            raise RuntimeError(f"Table outside image: {table['name']}")
        address = struct.unpack_from(">I", image, offset)[0]
        if address not in address_to_name:
            raise RuntimeError(f"Unknown callback 0x{address:08X} in {table['name']}[{index}]")
        indirect_roots.add(address_to_name[address])
for symbol in indirect_roots:
    if symbol not in aliases and symbol not in implementations:
        raise RuntimeError(f"Missing indirect implementation: {symbol}")

'''
s = s.replace(anchor, addition + anchor).replace('queue = list(ROOTS)', 'queue = list(ROOTS) + sorted(indirect_roots)')
anchor = '\n\nprint()\nprint("=== RESULTADO ===")'
addition = '''
    # Emit only mappings backed by the selected definitions. The full generated
    # mapping would require linking every PPC translation unit.
    out.write("PPCFuncMapping PPCFuncMappings[] = {\\n")
    for address, symbol in mapping_entries:
        if symbol in selected_alias or symbol in selected_impl:
            out.write(f"    {{ 0x{address:08X}, {symbol} }},\\n")
    out.write("    { 0, nullptr }\\n};\\n")
'''
assert anchor in s
s = s.replace(anchor, '\n' + addition + anchor)
f.write_text(s, encoding='utf-8', newline='\n')
manifest = dict(image='../Burnout4_External.pe', image_base='0x82000000', extra_roots=[], function_tables=[
    dict(name='CF38 first loop (r29 - 4)', address='0x82699330', count=97, stride=12, target_offset=4),
    dict(name='CF38 second loop (r29 - 4)', address='0x826997C0', count=20, stride=12, target_offset=4)])
(p/'graphics_slice.json').write_text(json.dumps(manifest, indent=2)+'\n')
f=p/'ppc_config.h'
s=f.read_text()
s=s.replace('#ifdef PPC_INCLUDE_DETAIL', '''// Checked runtime dispatch; generated PPC bodies remain untouched.
struct PPCContext;
void BurnoutCallIndirect(PPCContext& ctx, unsigned char* base, unsigned int target);
#define PPC_CALL_INDIRECT_FUNC(x) BurnoutCallIndirect(ctx, base, (unsigned int)(x))

#ifdef PPC_INCLUDE_DETAIL''')
f.write_text(s, newline='\n')
f=p/'graphics_init_test.cpp'
s=f.read_text()
s=s.replace('int main()', '#include "graphics_lookup.h"\n\nint main()')
s=s.replace('    std::printf(\n        "=== Burnout', '    std::setvbuf(stdout, nullptr, _IONBF, 0);\n    std::printf(\n        "=== Burnout')
s=s.replace('    if (!load_image(base))\n        return 1;', '    if (!load_image(base))\n        return 1;\n\n    if (!InitializeGraphicsLookup(base))\n        return 1;')
f.write_text(s, newline='\n')
