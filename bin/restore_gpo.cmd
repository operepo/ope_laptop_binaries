@echo off

cd %~dp0

echo Restoring local GPO settings...
%~dp0lgpo.exe /g "%~dp0rc\gpo" 
rem 2>NUL 1<NUL


%windir%\system32\gpupdate /force 