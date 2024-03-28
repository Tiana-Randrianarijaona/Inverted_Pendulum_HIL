@echo off

cd .

if "%1"=="" ("D:\INSTAL~1\PROGRA~1\MATLAB\R2023b\bin\win64\gmake"  -f wrapper.mk all) else ("D:\INSTAL~1\PROGRA~1\MATLAB\R2023b\bin\win64\gmake"  -f wrapper.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1