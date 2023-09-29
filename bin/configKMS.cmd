echo %ESC_GREEN%[ ---- Configuring Laptop for Student Use ---- ]%ESC_RESET%
echo.


rem Contributions from Mike Huse - https://github.com/operepo/ope/issues/86
:dtime_start
echo %ESC_GREEN%[ ---- Updating System Time ---- ]%ESC_RESET%
date /T
time /T
echo Is the system date/time correct?
choice /N /C YN /T 10 /D Y /M "Press N to set date/time [y/n]"
IF ERRORLEVEL ==2 GOTO setdatetime
IF ERRORLEVEL ==1 GOTO skipsetdatetime
:setdatetime
time
date

:skipsetdatetime

rem Add code to update KMS and run licensing
:set_kms_start
echo %ESC_GREEN%[ ---- Configuring Laptop to get its Windows licensing ---- ]%ESC_RESET%

rem  ***** Change IP Address and KMS name for your server below. You can also replace the IP address with the KMS name as well ******
echo Do you want to set KMS and Office activation servers?
choice /C yn /T 10 /D n /M "Press Y to set activation servers [y/n]"
if errorlevel 2 goto skipsetkmsserver
set KMS_URL=
rem TODO - Pull this from the registry?
set DEFAULT_KMS_URL=172.29.20.115
set OFFICE_URL=
set DEFAULT_OFFICE_URL=wwcc-kms.wwcc-wsp.edu
rem SET OFFICE_PATH="c:\program files (x86)\microsoft office\office16\"
REM **Just trying something**
echo Default KMS IP is: %DEFAULT_KMS_URL%
REM cscript %windir%\system32\slmgr.vbs /skms %DEFAULT_KMS_URL%
SET /p KMS_URL=Enter KMS Server URL/IP [default %DEFAULT_KMS_URL%]:
if %errorlevel%==1 SET KMS_URL=%DEFAULT_KMS_URL%
    
echo Setting KMS URL: %KMS_URL%
cscript %windir%\system32\slmgr.vbs /skms %KMS_URL%
cscript %windir%\system32\slmgr.vbs /ato


if exist "c:\program files\microsoft office\root" (


goto office19

) else (

goto office16

)


:office16

SET OFFICE_PATH="c:\program files (x86)\microsoft office\office16\"

SET /p OFFICE_URL=Enter Office Server URL/IP [default %DEFAULT_OFFICE_URL%]:
if %errorlevel%==1 SET OFFICE_URL=%DEFAULT_OFFICE_URL%

echo Setting Office KMS URL: %OFFICE_URL%

cscript %OFFICE_PATH%ospp.vbs /sethst:%OFFICE_URL%
cscript %OFFICE_PATH%ospp.vbs /act

goto end


:office19

SET OFFICE_PATH="c:\program files\microsoft office\office16\"

SET /p OFFICE_URL=Enter Office Server URL/IP [default %DEFAULT_OFFICE_URL%]:
if %errorlevel%==1 SET OFFICE_URL=%DEFAULT_OFFICE_URL%

echo Setting Office KMS URL: %OFFICE_URL%

cscript %OFFICE_PATH%ospp.vbs /sethst:%OFFICE_URL%
cscript %OFFICE_PATH%ospp.vbs /act
goto end

:end



:skipsetkmsserver
