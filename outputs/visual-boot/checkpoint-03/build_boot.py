from pathlib import Path
import subprocess,json
from concurrent.futures import ThreadPoolExecutor
p=Path(__file__).resolve().parent
compiler=r'C:\Program Files\Microsoft Visual Studio\18\Community\VC\Tools\Llvm\x64\bin\clang++.exe'
runtime='graphics_init_test xbox_kernel xbox_memory xbox_mm xbox_mmio xbox_probe xbox_rtl xbox_vd xbox_xconfig xbox_virtual_memory xenos_cp'.split()
sources=[p/(n+'.cpp') for n in runtime]+[p/'ppc_boot'/n for n in json.loads((p/'ppc_boot/sources.json').read_text())]
objects=p/'build-boot';objects.mkdir(exist_ok=True)
headers=max(f.stat().st_mtime_ns for f in list(p.glob('*.h'))+list(p.glob('*.inc')))
flags=['-std=c++17','-O0','-g','-mavx','-msse4.1','-include','stdio.h','-include','Windows.h','-I',str(p)]
def compile(src):
    dst=objects/(src.name+'.obj')
    if not dst.exists() or dst.stat().st_mtime_ns<max(headers,src.stat().st_mtime_ns):
        print('Compile',src.name,flush=True)
        subprocess.run([compiler,*flags,'-c',str(src),'-o',str(dst)],cwd=p,check=True)
    return dst
with ThreadPoolExecutor(max_workers=2) as pool:
    objs=list(pool.map(compile,sources))
subprocess.run([compiler,*flags,*map(str,objs),'-o',str(p/'burnout_boot_test.exe')],cwd=p,check=True)
print('BOOT BUILD OK',flush=True)
