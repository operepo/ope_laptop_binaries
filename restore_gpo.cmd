@echo off

echo Restoring local GPO settings...
%~dp0\bin\lgpo.exe /g "%~dp0\gpo"


