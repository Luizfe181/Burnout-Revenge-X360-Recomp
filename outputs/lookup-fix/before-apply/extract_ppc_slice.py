import re
from pathlib import Path

ROOTS = [
    "sub_82150520",
    "sub_825B4D40",
]
HERE = Path(__file__).resolve().parent
OUTPUT = HERE / "ppc_graphics_init_min.cpp"

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

def extract_braced_block(text, brace_pos):
    depth = 0
    i = brace_pos

    in_string = False
    in_char = False
    in_line_comment = False
    in_block_comment = False
    escape = False

    while i < len(text):
        c = text[i]
        n = text[i + 1] if i + 1 < len(text) else ""

        if in_line_comment:
            if c == "\n":
                in_line_comment = False
            i += 1
            continue

        if in_block_comment:
            if c == "*" and n == "/":
                in_block_comment = False
                i += 2
                continue
            i += 1
            continue

        if in_string:
            if escape:
                escape = False
            elif c == "\\":
                escape = True
            elif c == '"':
                in_string = False
            i += 1
            continue

        if in_char:
            if escape:
                escape = False
            elif c == "\\":
                escape = True
            elif c == "'":
                in_char = False
            i += 1
            continue

        if c == "/" and n == "/":
            in_line_comment = True
            i += 2
            continue

        if c == "/" and n == "*":
            in_block_comment = True
            i += 2
            continue

        if c == '"':
            in_string = True
            i += 1
            continue

        if c == "'":
            in_char = True
            i += 1
            continue

        if c == "{":
            depth += 1

        elif c == "}":
            depth -= 1

            if depth == 0:
                return text[brace_pos:i + 1]

        i += 1

    raise RuntimeError("Bloco com chaves nao terminou")


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

selected_impl = set()
selected_alias = set()
queue = list(ROOTS)

external = set()


while queue:
    symbol = queue.pop()

    # Já é uma implementação direta?
    if symbol in implementations:
        if symbol in selected_impl:
            continue

        selected_impl.add(symbol)

        body = implementations[symbol]["body"]

        for called in calls_from(body):
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

with OUTPUT.open("w", encoding="utf-8", newline="\n") as out:
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


print()
print("=== RESULTADO ===")
print(f"Roots:                {', '.join(ROOTS)}")
print(f"Implementacoes:       {len(selected_impl)}")
print(f"Aliases:              {len(selected_alias)}")
print(f"Arquivo:              {OUTPUT.name}")

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