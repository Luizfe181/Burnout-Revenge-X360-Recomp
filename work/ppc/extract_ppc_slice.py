import re
import json
import struct
import argparse
from pathlib import Path

ROOTS = [
    "sub_82150520",
    "sub_825B4D40",
]
HERE = Path(__file__).resolve().parent
OUTPUT = HERE / "ppc_graphics_init_min.cpp"
parser = argparse.ArgumentParser()
parser.add_argument('--boot', action='store_true', help='Extract real XEX entry point into per-source shards')
args = parser.parse_args()
if args.boot:
    ROOTS.append('_xstart')

# Somente os arquivos originais gerados.
files = sorted(
    HERE.glob("ppc_recomp.*.cpp"),
    key=lambda p: int(re.search(r"\.(\d+)\.cpp$", p.name).group(1))
)

print(f"Arquivos PPC encontrados: {len(files)}")

# ------------------------------------------------------------
# Lê todos os arquivos.
# ------------------------------------------------------------

sources = {}

for path in files:
    sources[path] = path.read_text(
        encoding="utf-8",
        errors="replace"
    )

# ------------------------------------------------------------
# Extrai um bloco {...} balanceando chaves.
# ------------------------------------------------------------

# Skip complete lexical tokens instead of visiting every generated character.
# Comments and quoted literals may contain braces; only standalone braces count.
brace_tokens = re.compile(r"//[^\n]*|/\*[\s\S]*?\*/|\"(?:\\.|[^\"\\])*\"|'(?:\\.|[^'\\])*'|[{}]")
def extract_braced_block(text, brace_pos):
    depth = 0
    for token in brace_tokens.finditer(text, brace_pos):
        value = token.group(0)
        if value == "{": depth += 1
        elif value == "}":
            depth -= 1
            if depth == 0: return text[brace_pos:token.end()]
    raise RuntimeError("Unterminated generated function")


# ------------------------------------------------------------
# Índice das implementações PPC_FUNC_IMPL(...)
# ------------------------------------------------------------

implementations = {}

impl_pattern = re.compile(
    r"PPC_FUNC_IMPL\s*\(\s*([A-Za-z_][A-Za-z0-9_]*)\s*\)"
)

for path, text in sources.items():
    for m in impl_pattern.finditer(text):
        name = m.group(1)

        brace = text.find("{", m.end())

        if brace == -1:
            continue

        body = extract_braced_block(text, brace)

        implementations[name] = {
            "name": name,
            "file": path,
            "prefix": text[m.start():brace],
            "body": body,
        }


# ------------------------------------------------------------
# Índice dos weak aliases:
#
# __attribute__((alias("__imp__sub_XXXXXXXX")))
# PPC_WEAK_FUNC(sub_XXXXXXXX);
# ------------------------------------------------------------

aliases = {}

alias_pattern = re.compile(
    r'__attribute__\s*\(\(\s*alias\s*\(\s*"([^"]+)"\s*\)\s*\)\)'
    r'\s*PPC_WEAK_FUNC\s*\(\s*([A-Za-z_][A-Za-z0-9_]*)\s*\)\s*;',
    re.MULTILINE
)

for path, text in sources.items():
    for m in alias_pattern.finditer(text):
        target = m.group(1)
        alias = m.group(2)

        aliases[alias] = {
            "target": target,
            "text": m.group(0),
            "file": path,
        }


print(f"Implementacoes encontradas: {len(implementations)}")
print(f"Weak aliases encontrados:   {len(aliases)}")


# ------------------------------------------------------------
# Descobre chamadas do formato:
#
# foo(ctx, base);
# ------------------------------------------------------------

call_pattern = re.compile(
    r"\b([A-Za-z_][A-Za-z0-9_]*)\s*\(\s*ctx\s*,\s*base\s*\)"
)


def calls_from(text):
    return set(call_pattern.findall(text))


# ------------------------------------------------------------
# Resolve um símbolo.
#
# sub_XXXXXXXX normalmente é weak alias para
# __imp__sub_XXXXXXXX.
# ------------------------------------------------------------

# Indirect targets cannot be inferred from a register-based bctrl alone.
# Describe verified image tables or observed targets in a separate manifest.
manifest = json.loads((HERE / "graphics_slice.json").read_text(encoding="utf-8"))
mapping_text = (HERE / "ppc_func_mapping.cpp").read_text(encoding="utf-8")
mapping_entries = [(int(a, 16), n) for a, n in re.findall(
    r"\{\s*0x([0-9A-Fa-f]+),\s*([A-Za-z_][A-Za-z0-9_]*)\s*\}", mapping_text)]
address_to_name = dict(mapping_entries)
image = (HERE / manifest["image"]).read_bytes()
image_base = int(manifest["image_base"], 0)
indirect_roots = set(manifest.get("extra_roots", []))
if args.boot:
    indirect_roots.update(manifest.get("boot_extra_roots", []))
for table in manifest["function_tables"] + (manifest.get("boot_function_tables", []) if args.boot else []):
    start = int(table["address"], 0) - image_base
    for index in range(table["count"]):
        offset = start + index * table["stride"] + table["target_offset"]
        if offset < 0 or offset + 4 > len(image):
            raise RuntimeError(f"Table outside image: {table['name']}")
        address = struct.unpack_from(">I", image, offset)[0]
        if address == 0 and table.get("allow_null", False):
            continue
        if address not in address_to_name:
            raise RuntimeError(f"Unknown callback 0x{address:08X} in {table['name']}[{index}]")
        indirect_roots.add(address_to_name[address])
for symbol in indirect_roots:
    if symbol not in aliases and symbol not in implementations and symbol not in address_to_name.values():
        raise RuntimeError(f"Missing indirect implementation: {symbol}")


materialized_references = {}
def materialized_targets(body, owner):
    # Conservative retention only: never rewrites the PPC or executes candidates.
    # Recognize literal/address construction in straight-line register assignments.
    known, found = {}, set()
    for line in body.splitlines():
        if line.startswith('loc_') or '(ctx, base);' in line:
            known.clear()
        m = re.fullmatch(r'\s*ctx\.r(\d+)\.[su](?:32|64) = (.*);', line)
        if not m: continue
        dst, rhs = int(m[1]), m[2]
        value = None
        if re.fullmatch(r'-?\d+', rhs): value = int(rhs)
        else:
            expr = re.fullmatch(r'ctx\.r(\d+)\.[su](?:32|64)(?: ([+|]) (-?\d+))?', rhs)
            if expr and int(expr[1]) in known:
                value = known[int(expr[1])]
                if expr[2] == '+': value += int(expr[3])
                elif expr[2] == '|': value |= int(expr[3])
        known.pop(dst, None)
        if value is not None:
            value &= 0xffffffff
            known[dst] = value
            if value in address_to_name:
                found.add(address_to_name[value])
                materialized_references.setdefault(owner, {})[f'{value:08X}'] = line.strip()
    return found

selected_impl = set()
selected_alias = set()
queue = list(ROOTS) + sorted(indirect_roots)

external = set()


while queue:
    symbol = queue.pop()

    # Já é uma implementação direta?
    if symbol in implementations:
        if symbol in selected_impl:
            continue

        selected_impl.add(symbol)

        body = implementations[symbol]["body"]

        for called in calls_from(body) | (materialized_targets(body, symbol) if args.boot else set()):
            if called == symbol:
                continue

            if called in aliases:
                queue.append(called)

            elif called in implementations:
                queue.append(called)

            else:
                external.add(called)

        continue

    # É alias?
    if symbol in aliases:
        if symbol in selected_alias:
            continue

        selected_alias.add(symbol)

        target = aliases[symbol]["target"]

        if target in implementations:
            queue.append(target)
        else:
            external.add(target)

        continue

    external.add(symbol)


# ------------------------------------------------------------
# Se uma implementação chama um alias, precisamos manter
# esse alias no arquivo final.
# ------------------------------------------------------------

changed = True

while changed:
    changed = False

    for impl_name in list(selected_impl):
        body = implementations[impl_name]["body"]

        for called in calls_from(body):
            if called in aliases and called not in selected_alias:
                selected_alias.add(called)
                target = aliases[called]["target"]

                if target in implementations and target not in selected_impl:
                    selected_impl.add(target)
                    changed = True


# ------------------------------------------------------------
# Gera arquivo mínimo.
# ------------------------------------------------------------

if not args.boot:
    with OUTPUT.open("w", encoding="utf-8", newline="\n") as out:
        out.write('#include "graphics_dispatch.h"\n')
        out.write('#include "ppc_recomp_shared.h"\n\n')
    
        out.write("// ========================================================\n")
        out.write("// AUTO-GENERATED PPC SLICE\n")
        out.write(f"// Roots: {', '.join(ROOTS)}\n")
        out.write("// Original ppc_recomp.*.cpp files are NOT modified.\n")
        out.write("// ========================================================\n\n")
    
        # Aliases primeiro.
        for name in sorted(selected_alias):
            info = aliases[name]
    
            out.write(
                f"// alias {name} -> {info['target']} "
                f"from {info['file'].name}\n"
            )
    
            out.write(info["text"])
            out.write("\n\n")
    
        # Implementações.
        for name in sorted(selected_impl):
            info = implementations[name]
    
            out.write(
                f"// --------------------------------------------------------\n"
                f"// {name} from {info['file'].name}\n"
                f"// --------------------------------------------------------\n"
            )
    
            out.write(info["prefix"])
            out.write(info["body"])
            out.write("\n\n")
    
    
        # Emit only mappings backed by the selected definitions. The full generated
        # mapping would require linking every PPC translation unit.
        out.write("PPCFuncMapping PPCFuncMappings[] = {\n")
        for address, symbol in mapping_entries:
            if symbol in selected_alias or symbol in selected_impl or (args.boot and symbol in external):
                out.write(f"    {{ 0x{address:08X}, {symbol} }},\n")
        out.write("    { 0, nullptr }\n};\n")
else:
    directory = HERE / "ppc_boot"
    directory.mkdir(exist_ok=True)
    def save(name, content):
        path = directory / name
        if not path.exists() or path.read_text(encoding="utf-8") != content:
            path.write_text(content, encoding="utf-8", newline="\n")
    generated = []
    for source in files:
        impls = sorted(n for n in selected_impl if implementations[n]["file"] == source)
        als = sorted(n for n in selected_alias if aliases[n]["file"] == source)
        if not impls and not als:
            continue
        content = '#include "graphics_dispatch.h"\n#include "ppc_recomp_shared.h"\n'
        for name in als:
            content += aliases[name]["text"] + "\n"
        for name in impls:
            content += implementations[name]["prefix"] + implementations[name]["body"] + "\n"
        save(source.name, content)
        generated.append(source.name)
    content = '#include "ppc_recomp_shared.h"\nPPCFuncMapping PPCFuncMappings[] = {\n'
    for address, symbol in mapping_entries:
        if symbol in selected_alias or symbol in selected_impl or (args.boot and symbol in external):
            content += f"    {{ 0x{address:08X}, {symbol} }},\n"
    content += "    { 0, nullptr }\n};\n"
    save("mapping.cpp", content)
    generated.append("mapping.cpp")
    implemented_imports = set()
    for runtime in HERE.glob("xbox_*.cpp"):
        runtime_text = runtime.read_text(encoding="utf-8")
        # Runtime imports may be intentionally terminal probes.  They are still
        # implementations and must not be emitted again in import_probes.cpp.
        implemented_imports.update(re.findall(
            r"^\s*(?:PPC_FUNC|PPC_FUNC_IMPL|PROBE_IMPORT|BURNOUT_UNREACHED_IMPORT)\(\s*(\w+)\s*\)",
            runtime_text,
            re.M,
        ))
    unresolved = sorted(n for n in external if n not in implemented_imports)
    if any(not n.startswith('__imp__') for n in unresolved):
        raise RuntimeError(f"Non-import dependencies missing: {unresolved}")
    content = '#include "ppc_recomp_shared.h"\n#include <cstdio>\n#include <cstdlib>\nextern void BurnoutReportPpcState();\n'
    for name in unresolved:
        content += f'PPC_FUNC({name}) {{ std::fprintf(stdout,"[BOOT IMPORT STOP] {name}\\n"); BurnoutReportPpcState(); std::exit(6); }}\n'
    save("import_probes.cpp", content)
    generated.append("import_probes.cpp")
    save("materialized_references.json", json.dumps(materialized_references,indent=2,sort_keys=True))
    save("sources.json", json.dumps(generated,indent=2))
    save("unresolved_imports.json", json.dumps(unresolved,indent=2))


print()
print("=== RESULTADO ===")
print(f"Roots:                {', '.join(ROOTS)}")
print(f"Implementacoes:       {len(selected_impl)}")
print(f"Aliases:              {len(selected_alias)}")
print(f"Arquivo:              {'ppc_boot/' if args.boot else OUTPUT.name}")

print()
print("Implementacoes selecionadas:")

for name in sorted(selected_impl):
    print(
        f"  {name:32} "
        f"{implementations[name]['file'].name}"
    )

print()
print("Aliases selecionados:")

for name in sorted(selected_alias):
    print(
        f"  {name:32} -> "
        f"{aliases[name]['target']}"
    )

print()
print("Chamadas externas/nao encontradas:")

for name in sorted(external):
    if name not in selected_impl and name not in selected_alias:
        print(f"  {name}")
