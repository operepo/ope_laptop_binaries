@echo off

rem Run credential process... This should be started from the 
rem CredentialLaptop script in the parent folder which switches to
rem admin mode (e.g. windows UAC prompt)

REM CHECK FOR COMPATIBLE WINDOWS EDITION
SET CompatWinInstall=false
SET IsWin10=false
SET IsHomeEdition=true

rem See if this is win 10
FOR /f "usebackq tokens=3,4" %%A in (`reg query "HKLM\SOFTWARE\Microsoft\Windows NT\CurrentVersion" /v ProductName`) DO (
    echo "--> FOUND %%A %%B"
    if /I "%%A %%B"=="Windows 10" SET IsWin10=true
)

rem See if this is Home/Enterprise/Professional
FOR /f "usebackq tokens=3" %%A in (`reg query "HKLM\SOFTWARE\Microsoft\Windows NT\CurrentVersion" /v EditionID`) DO (
    echo "--> FOUND %%A"
    if /I "%%A"=="Enterprise" SET IsHomeEdition=false
    if /I "%%A"=="Professional" SET IsHomeEdition=false
)

if "%IsHomeEdition%"=="true") DO (
    echo [91m -- WARNING Invalid windows edition!!! Credentialing is only designed to run on Win 10 Pro or Enterprise [0m
    choice /C yn /T 10 /D n /M "Press y for to run credential anyway, or n to stop"
    if errorlevel 2 goto endcredential
)
if "%IsWin10%"=="false") DO (
    echo [91m -- WARNING Invalid windows edition!!!! Credentialing is only designed to run on Win 10 Pro or Enterprise [0m
    choice /C yn /T 10 /D n /M "Press y for to run credential anyway, or n to stop"
    if errorlevel 2 goto endcredential
)

rem CHECK FOR NETWORK CONNECTION
SET NetAlive=false

FOR /f "usebackq tokens=1" %%A in (`PING -n 2 192.168.77.1`) DO (
    REM Check the current line for the word reply
    rem echo "--> %%A"
    if /I "%%A"=="Reply" SET NetAlive=true
)

SET OnSyncBox=false
if "%NetAlive%"=="true" (
    rem Network up and on the sync box
    SET OnSyncBox=true
) ELSE (
    rem Network not up or not on the sync box
    SET OnSyncBox=false
    echo [91m -- WARNING Not plugged into a sync box or network not active!!![0m
    choice /C yn /T 10 /D n /M "Press y for to run credential anyway, or n to stop"
    if errorlevel 2 goto endcredential
)


echo "NetAlive: %NetAlive%, IsWin10: %IsWin10%, IsHomeEdition: %IsHomeEdition%"
goto endcredential

echo -- Reset GPO Settings --
call %~dp0reset_gpo.cmd

echo -- Reset Firewall Settings --
call %~dp0reset_firewall_rules.cmd

echo -- Adding CERT Trusts for OPE Services --
call %~dp0trust_ope_certs.cmd

rem Make sure vstudio redists are installed
call %~dp0vcredist_x86.exe /install /quiet

rem Ask if logs should be cleared
call %~dp0clear_logs.cmd

echo -- Running Credential App to setup student account and link with Canvas...
set credential_app="%~dp0..\laptop_credential\credential.exe"
REM set credential_app="python %~dp0\laptop_credential\app.py"
echo %credential_app%
REM || exit makes the script stop if the credential fails
%credential_app% 
REM %credential_app% || pause && exit /b 1
IF %ERRORLEVEL% NEQ 0 (
    REM error in credentialing
    echo "CREDENTIAL APP - FINISHED WITH ERROR!!!"
    pause
    rem exit /b %ERRORLEVEL%
)

echo -- Installing latest OPEService...
call %~dp0install_service.cmd 2>NUL 1<NUL

rem apply only gpo firewall rules?
echo -- Applying firewall settings...
call %~dp0import_firewall_rules.cmd

echo -- Applying windows group policy...
call %~dp0restore_gpo.cmd

echo -- Locking down boot options...
call %~dp0lock_down_boot_options.cmd



rem ADMIN PASSWORD SHOULD BE AUTO SET DURING Credential
rem echo(
rem echo(
rem echo [91m -- Set an Admin password for this laptop!!!![0m
rem echo(
rem echo Hit CTRL + ALT + Delete and choose "Change Password"
rem echo - This will let you set an admin password for this laptop
rem echo - DO NOT USE YOUR NORMAL ADMIN PASSWORD FOR YOUR NETWORK!!
rem pause
rem echo(
rem echo(
rem echo [101m -- Are you sure you set the admin password?[0m
rem pause


rem echo Done. 
echo(
echo Make sure to set a unique admin password in the BIOS and disable alternative boot devices.
echo Student will need to plug in to the secure docking station, login and run the LMS app to download Canvas files.
pause
echo [91m -- WARNING - Don't forget to set an admin BIOS password!!!
pause

:endcredential
