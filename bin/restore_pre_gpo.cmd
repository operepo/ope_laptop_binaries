@echo off

cd %~dp0

echo Restoring local GPO settings...
%~dp0\lgpo.exe /g "%~dp0\..\rc\pre_gpo"


