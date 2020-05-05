@echo off
SETLOCAL ENABLEEXTENSIONS
SETLOCAL ENABLEDELAYEDEXPANSION

rem escape code for colors
SET ESC=[
SET ESC_CLEAR=%ESC%2j
SET ESC_RESET=%ESC%0m
SET ESC_GREEN=%ESC%32m
SET ESC_RED=%ESC%31m
SET ESC_YELLOW=%ESC%33m

echo %ESC_GREEN%Stopping OPEService...%ESC_RESET%
net stop OPEService
if %ERRORLEVEL% NEQ 0 (
    echo %ESC_YELLOW%STOP OPEService Failed - This isn't an issue if it is the first time you are credentialing this laptop. %ESC_RESET%
)

rem need to copy the OPEService folder into the proper location

echo %ESC_GREEN%Copying latest version of Services...%ESC_RESET%
if exist OPEService.py (
    rem echo In dev folder  %~dp0
    rem %~dp0\dist\svc\OPEService.exe -install -auto -interactive
    rem /Q instead of F
    xcopy /ECIHRKY /Q %~dp0\dist\* %programdata%\ope\Services\ 
) else (
    rem echo In binary folder
    rem %~dp0\..\svc\OPEService.exe -install -auto -interactive
    xcopy /ECIHRKY /Q %~dp0\..\Services\* %programdata%\ope\Services\
    
)

rem add service to safe mode so it will boot then too
echo %ESC_GREEN%Enabling OPEService in SafeMode%ESC_RESET%
set SERVICE_NAME=OPEService
reg add "HKLM\SYSTEM\CurrentControlSet\Control\SafeBoot\Minimal\%SERVICE_NAME%" /ve /F /d Service /t REG_SZ

reg add "HKLM\SYSTEM\CurrentControlSet\Control\SafeBoot\Network\%SERVICE_NAME%" /ve /F /d Service /t REG_SZ

rem Install the service - ensure it is installed w the proper settings 
rem --startup
echo %ESC_GREEN%Registering OPEService...%ESC_RESET%
%programdata%\ope\Services\OPEService\OPEService.exe -auto -interactive install 

echo %ESC_GREEN%Enabling OPEService AutoRecovery Options...%ESC_RESET%
rem Set service recovery options
rem SC qfailure %SERVICE_NAME%
rem SC failure %SERVICE_NAME% reset=0 actions=restart/60000/restart/60000/run/1000
SC failure %SERVICE_NAME% reset=0 actions=restart/60000/restart/60000/reboot/1000  >> nul 2>&1
rem sc failure %SERVICE_NAME% command= ""C:\Windows\System32\WindowsPowerShell\v1.0\powershell.exe" "C:\AT\MyPowerShellScript.ps1" "possibleArguments""

echo %ESC_GREEN%Starting OPEService...%ESC_RESET%
net start OPEService3
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo %ESC_RED%ERROR Starting OPE Service! - Something wen't VERY wrong. %ESC_RESET%
    echo.
    call %programdata%\ope\Services\mgmt\mgmt.exe bad_credential
    exit /B 2
)

