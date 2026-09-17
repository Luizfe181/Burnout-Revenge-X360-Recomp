@echo off
call "C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat" >nul
clang++ -std=c++17 -O0 -g -mavx -msse4.1 -include Windows.h gpu_cp_test.cpp ppc\xenos_cp.cpp -o gpu_cp_test.exe
if errorlevel 1 exit /b 1
gpu_cp_test.exe
if errorlevel 1 exit /b 1
gpu_cp_test.exe unknown
if %errorlevel% neq 5 exit /b 1
exit /b 0
