@echo off
call "C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat" >nul
"C:\Users\luizf\Miniconda3\python.exe" "%~dp0build_boot.py"
