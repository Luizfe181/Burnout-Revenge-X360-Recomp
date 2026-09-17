from pathlib import Path
import subprocess
p=Path(__file__).resolve().parent
compiler=r'C:\Program Files\Microsoft Visual Studio\18\Community\VC\Tools\Llvm\x64\bin\clang++.exe'
names='graphics_init_test ppc_graphics_init_min xbox_kernel xbox_memory xbox_mm xbox_mmio xbox_probe xbox_rtl xbox_vd xbox_xconfig xbox_virtual_memory xenos_cp'.split()
obj=p/'build-visual';obj.mkdir(exist_ok=True)
headers=max(f.stat().st_mtime_ns for f in list(p.glob('*.h'))+list(p.glob('*.inc')))
flags=['-std=c++17','-O0','-g','-mavx','-msse4.1','-include','stdio.h','-include','Windows.h']
for n in names:
    src=p/(n+'.cpp'); dst=obj/(n+'.obj')
    if not dst.exists() or dst.stat().st_mtime_ns<max(headers,src.stat().st_mtime_ns):
        print('Compile',n,flush=True)
        subprocess.run([compiler,*flags,'-c',str(src),'-o',str(dst)],cwd=p,check=True)
subprocess.run([compiler,*flags,*[str(obj/(n+'.obj')) for n in names],'-o',str(p/'graphics_init_test.exe')],cwd=p,check=True)
