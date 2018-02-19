@echo off

cd %~dp0

echo Restoring local GPO settings...
%~dp0lgpo.exe /g "%~dp0rc\post_gpo"


