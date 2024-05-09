@echo off

SET CREDENTIAL_VERSION=1.0.25

rem escape code for colors
SET ESC=[
SET ESC_CLEAR=%ESC%2j
SET ESC_RESET=%ESC%0m
SET ESC_GREEN=%ESC%32m
SET ESC_RED=%ESC%31m
SET ESC_YELLOW=%ESC%33m

echo %ESC_GREEN% Credential Version - %CREDENTIAL_VERSION% %ESC_RESET%

rem Run credential process... This should be started from the 
rem CredentialLaptop script in the parent folder which switches to
rem admin mode (e.g. windows UAC prompt)

REM CHECK FOR COMPATIBLE WINDOWS EDITION
SET CompatWinInstall=false
SET IsWin10=false
SET IsHomeEdition=true
SET NetAlive=false
SET OnSyncBox=false

rem See if this is win 10
FOR /f "usebackq tokens=3,4" %%A in (`reg query "HKLM\SOFTWARE\Microsoft\Windows NT\CurrentVersion" /v ProductName`) DO (
    rem echo "--> FOUND %%A %%B"
    if /I "%%A %%B"=="Windows 10" SET IsWin10=true
)

rem See if this is Home/Enterprise/Professional
FOR /f "usebackq tokens=3" %%A in (`reg query "HKLM\SOFTWARE\Microsoft\Windows NT\CurrentVersion" /v EditionID`) DO (
    rem echo "--> FOUND %%A"
    if /I "%%A"=="Enterprise" SET IsHomeEdition=false
    if /I "%%A"=="Professional" SET IsHomeEdition=false
	if /I "%%A"=="Education" SET IsHomeEdition=false
)

rem SET IsHomeEdition=true
rem SET IsWin10=false

if "%IsHomeEdition%"=="true" (
    echo %ESC_RED% -- WARNING Win 10 Home Edition Detected!! Credential tool is only designed to run on Win 10 Pro or Enterprise. %ESC_RESET%
    choice /C yn /T 10 /D n /M "Press y for to run credential anyway, or n to stop"
    if errorlevel 2 goto endcredential
)
if "%IsWin10%"=="false" (
    echo %ESC_RED% -- WARNING Invalid Windows Version Detected!! Credential tool is only designed to run on Win 10 Pro or Enterprise. %ESC_RESET%
    choice /C yn /T 10 /D n /M "Press y for to run credential anyway, or n to stop"
    if errorlevel 2 goto endcredential
)

echo -- Reset GPO Settings --
call "%~dp0reset_gpo.cmd"

echo -- Reset Firewall Settings --
call "%~dp0reset_firewall_rules.cmd"

rem CHECK FOR NETWORK CONNECTION
echo Testing network connection...
rem DEBUG - An address that should have bad replies
rem SET PingAddr="192.168.77.1"
rem PRODUCTION - the main ip for the sync box, if you can't ping this, you aren't plugged in
SET PingAddr="202.5.222.1"
FOR /f "usebackq tokens=1" %%A in (`PING -n 2 %PingAddr%`) DO (
    REM Check the current line for the word reply
    rem echo "--> %%A"
    if /I "%%A"=="Reply" SET NetAlive=true
)

if "%NetAlive%"=="true" (
    rem Network up and on the sync box
    SET OnSyncBox=true
) ELSE (
    rem Network not up or not on the sync box
    SET OnSyncBox=false
    echo %ESC_RED% -- WARNING Not plugged into a sync box or network not active!!!%ESC_RESET%
    choice /C y /T 3 /D y /M "Continue? (y/n) "
    rem choice /C yn /T 10 /D n /M "Press y for to run credential anyway, or n to stop"
    rem if errorlevel 2 goto endcredential
)


echo NetAlive: %NetAlive%, IsWin10: %IsWin10%, IsHomeEdition: %IsHomeEdition%
rem DEBUG - Stop script early when debugging
rem goto endcredential

echo -- Adding CERT Trusts for OPE Services --
call "%~dp0trust_ope_certs.cmd"
echo.
rem Make sure vstudio redists are installed
echo -- %ESC_GREEN%Installing required packages - please wait... %ESC_RESET% --
call "%~dp0install_vc_runtimes.cmd"
echo.
rem Ask if logs should be cleared
call "%~dp0clear_logs.cmd"
echo.
echo.
echo %ESC_GREEN% Credential Version - %CREDENTIAL_VERSION% %ESC_RESET%
echo.
echo.
echo -- Running Credential App to setup student account and link with Canvas...
set credential_app="%~dp0..\laptop_credential\credential.exe"
REM set credential_app="python %~dp0\laptop_credential\app.py"
echo %credential_app%
REM || exit makes the script stop if the credential fails
"%credential_app%"
REM %credential_app% || pause && exit /b 1
IF %ERRORLEVEL% NEQ 0 (
    REM error in credentialing
    echo.
    echo ****** CRITICAL ERROR!!! - CREDENTIAL APP - FINISHED WITH ERROR!!! *******
    echo.
    call "%programdata%\ope\Services\mgmt\mgmt.exe" bad_credential
    pause
    exit /b 2
    rem exit /b %ERRORLEVEL%
)

echo -- Installing latest OPEService...
call "%~dp0install_service.cmd" 2>NUL 1>NUL
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo %ESC_RED%****** CRITICAL ERROR!!! - ERROR Installing OPEService!!! *******%ESC_RESET%
    echo.
    call "%programdata%\ope\Services\mgmt\mgmt.exe" bad_credential
    pause
    exit /b 2
)
echo.

rem apply only gpo firewall rules?
echo -- Applying firewall settings...
call "%~dp0import_firewall_rules.cmd"
echo.

echo -- Applying windows group policy...
call "%~dp0restore_gpo.cmd"
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo %ESC_RED%****** CRITICAL ERROR!!! - ERROR Applying Group Policy rules!!! *******%ESC_RESET%
    echo.
    call "%programdata%\ope\Services\mgmt\mgmt.exe" bad_credential
    pause
    exit /b 2
)
echo.

echo -- Locking down boot options...
call "%~dp0lock_down_boot_options.cmd" >> nul 2>&1
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo %ESC_RED%****** CRITICAL ERROR!!! - ERROR Locking down boot options!!! *******%ESC_RESET%
    echo.
    call "%programdata%\ope\Services\mgmt\mgmt.exe" bad_credential
    pause
    exit /b 2
)
echo.


rem ADMIN PASSWORD SHOULD BE AUTO SET DURING Credential
rem echo(
rem echo(
rem echo [91m -- Set an Admin password for this laptop!!!![0m
rem echo(
rem echo Hit CTRL + ALT + Delete and choose "Change Password"
rem echo - This will let you set an admin password for this laptop
rem echo - DO NOT USE YOUR NORMAL ADMIN PASSWORD FOR YOUR NETWORK!!
rem pause
rem echo(
rem echo(
rem echo [101m -- Are you sure you set the admin password?[0m
rem pause


rem echo Done. 
echo.
echo Make sure to set a unique admin password in the BIOS and disable alternative boot devices.
echo Student will need to plug in to the secure docking station, login and run the LMS app to download Canvas files.
pause
echo %ESC_RED% -- WARNING - Don't forget to set an admin BIOS password!!!%ESC_RESET%
pause

rem exit

:endcredential
rem This shouldn't be needed - install_service handles all this and we
rem get a hard failure then if it doesn't work
rem net start OPEService 2>NUL 1>NUL
rem if %ERRORLEVEL% NEQ 0 (
rem     echo.
rem     echo %ESC_RED%****** CRITICAL ERROR!!! - ERROR STARTING OPEService!!! *******%ESC_RESET%
rem     echo.
rem     call %programdata%\ope\Services\mgmt\mgmt.exe bad_credential
rem     pause
rem     exit /b 2
rem )


rem if everything went ok, then we can enable the user account.
call %programdata%\ope\Services\mgmt\mgmt.exe enable_student_user
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo %ESC_RED%****** CRITICAL ERROR!!! - ERROR Enabling Student Account *******%ESC_RESET%
    echo.
    call "%programdata%\ope\Services\mgmt\mgmt.exe" bad_credential
    pause
    exit /b 2
)

echo %ESC_GREEN%========== Credential Compete! ==========%ESC_RESET%
exit /B 0
