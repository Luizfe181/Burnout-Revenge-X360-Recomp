@echo off
call "C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat" >nul
"C:\Program Files\Microsoft Visual Studio\18\Community\VC\Tools\Llvm\x64\bin\clang++.exe" -std=c++17 -O0 -g -mavx -msse4.1 -include stdio.h -include Windows.h graphics_init_test.cpp ppc_graphics_init_min.cpp xbox_kernel.cpp xbox_memory.cpp xbox_mm.cpp xbox_mmio.cpp xbox_probe.cpp xbox_rtl.cpp xbox_vd.cpp xbox_xconfig.cpp xbox_virtual_memory.cpp xenos_cp.cpp -o graphics_init_test.exe
