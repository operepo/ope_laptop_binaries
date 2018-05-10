
rem Run credential process... This should be started from the 
rem CredentialLaptop script in the parent folder which switches to
rem admin mode (e.g. windows UAC prompt)

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
    pause
    exit /b %ERRORLEVEL%
)

echo -- Installing latest OPEService...
call %~dp0install_service.cmd 2>NUL 1<NUL

rem apply only gpo firewall rules?
echo -- Applying firewall settings...
call %~dp0import_firewall_rules.cmd

echo -- Applying windows group policy...
call %~dp0restore_gpo.cmd



echo(
echo(
echo ^<ESC^>[91m -- Set an Admin password for this laptop!!!![0m
echo(
echo Hit CTRL + ALT + Delete and choose "Change Password"
echo - This will let you set an admin password for this laptop
echo - DO NOT USE YOUR NORMAL ADMIN PASSWORD FOR YOUR NETWORK!!
pause
echo(
echo(
echo ^<ESC^>[101m -- Are you sure you set the admin password?[0m
pause


echo Done. 
echo(
echo Make sure to set a unique admin password in the BIOS and disable alternative boot devices.
echo Student will need to plug in to the secure docking station, login and run the LMS app to download Canvas files.
pause
echo -- WARNING - Don't forget to set an admin BIOS password!!!
pause