@echo off
SETLOCAL ENABLEEXTENSIONS
SETLOCAL ENABLEDELAYEDEXPANSION

SET ESC=[
SET ESC_CLEAR=%ESC%2j
SET ESC_RESET=%ESC%0m
SET ESC_GREEN=%ESC%32m
SET ESC_RED=%ESC%31m
SET ESC_YELLOW=%ESC%33m

if [%1] EQU [] (
    rem No param, use master branch
    SET GIT_BRANCH=master

) else (
    rem Param provided, use it as the current branch
    SET GIT_BRANCH=%1    
    echo using git branch %GIT_BRANCH%
)

rem Base folder is passed in when after it gets copied to the temp location so
rem it knows where to target git commands
if [%2] EQU [] (
    SET BASE_FOLDER=%~dp0
) else (
    SET BASE_FOLDER=%2
)

rem Need to copy git files to a temp location
set GIT_TEMP=%windir%\Temp\Git\
set GIT_PATH=%GIT_TEMP%bin\git.exe
rem make sure folder exists
md %GIT_TEMP% 1>NUL 2>NUL

rem echo %BASE_FOLDER% %GIT_TEMP%
if /I %BASE_FOLDER%==%GIT_TEMP% (
    echo "Copying To Temp Location... %BASE_FOLDER% -> %GIT_TEMP%"
    echo f | xcopy /FY %BASE_FOLDER%PullUpdates.cmd %GIT_TEMP%PullUpdates.cmd
    rem Relaunch from temp folder
    call %GIT_TEMP%PullUpdates.cmd %1 %2
    exit /b 0
) else (
    echo running from tmp folder, target: %BASE_FOLDER%
)

rem /Q for quiet, /F for full
SET QUIET_FLAG=/Q


rem Copy git files over to temp folder
xcopy /ECIHRKY %QUIET_FLAG% %BASE_FOLDER%bin\* %GIT_TEMP%bin\
xcopy /ECIHRKY %QUIET_FLAG% %BASE_FOLDER%cmd\* %GIT_TEMP%cmd\
xcopy /ECIHRKY %QUIET_FLAG% %BASE_FOLDER%dev\* %GIT_TEMP%dev\
xcopy /ECIHRKY %QUIET_FLAG% %BASE_FOLDER%mingw64\* %GIT_TEMP%mingw64\
xcopy /ECIHRKY %QUIET_FLAG% %BASE_FOLDER%usr\* %GIT_TEMP%usr\


rem echo %~dp0
chdir $BASE_FOLDER%/..
set PROJECT_PATH=%CD%
rem echo %PROJECT_PATH%
cd $BASE_FOLDER%


echo %ESC_GREEN%Killing OPE_LMS app if running...%ESC_RESET%
taskkill /f /im OPE_LMS.exe   1>NUL 2>NUL

echo %ESC_GREEN%Stoping any running mgmt apps...%ESC_RESET%
taskkill /f /im mgmt.exe   1>NUL 2>NUL

rem echo checking for local git repo...
if EXIST %PROJECT_PATH%/.git (
  rem echo "Git repo exists..."
) ELSE (
  echo %ESC_GREEN% Initilizing Local Git Repo...
  %GIT_PATH% -C "%PROJECT_PATH%" init  >> nul 2>&1
  rem git clean -fd?
  rem We will do a hard reset later and clear all local files
  rem %GIT_PATH% -C "%PROJECT_PATH%" add . >> nul 2>&1
)

echo %ESC_GREEN%Updating Laptop Binaries to the latest update...%ESC_RESET%

rem Add the online origin
%GIT_PATH% -C "%PROJECT_PATH%" remote remove ope_origin >> nul 2>&1
%GIT_PATH% -C "%PROJECT_PATH%" remote add ope_origin https://github.com/operepo/ope_laptop_binaries.git 
rem >> nul 2>&1

rem Add the offline origin
%GIT_PATH% -C "%PROJECT_PATH%" remote remove ope_smc_origin >> nul 2>&1
%GIT_PATH% -C "%PROJECT_PATH%" remote add ope_smc_origin git://smc.ed/ope_laptop_binaries.git >> nul 2>&1

rem Which origin were we able to pull from?
SET PULL_ORIGIN=ope_origin

rem Try to pull the online origin
echo %ESC_GREEN%trying online git pull...%ESC_RESET%
rem stash save just in case
%GIT_PATH% -C "%PROJECT_PATH%" fetch --depth=1 -uf !PULL_ORIGIN! %GIT_BRANCH% 
rem >> nul 2>&1

if !ERRORLEVEL! NEQ 0 (
    rem Failed to pull from the 
    echo.
    echo.
    echo %ESC_YELLOW%Online pull failed, pulling from local smc server%ESC_RESET%
    echo.
    
    SET PULL_ORIGIN=ope_smc_origin
    rem %GIT_PATH% pull !PULL_ORIGIN! %GIT_BRANCH% >> nul 2>&1
    %GIT_PATH% -C "%PROJECT_PATH%" fetch --depth=1 -uf !PULL_ORIGIN! %GIT_BRANCH% 
    rem >> nul 2>&1

    
    if !ERRORLEVEL! NEQ 0 (
        echo.
        echo.
        echo %ESC_RED%***** Failed to git pull from local SMC server, You may not have the latest Laptop Software *****%ESC_RESET%
        echo.
        rem echo !PULL_ORIGIN!
        exit /B 2
    ) else (
        echo %ESC_GREEN%-- Updated from local SMC server.%ESC_RESET%
    )
) else (
    echo %ESC_GREEN%-- Updated from online github server.%ESC_RESET%
    
)

rem Force us to the current HEAD (force us to update)
echo %ESC_GREEN%Checking out changes...%ESC_RESET%
rem Remove current master branch
%GIT_PATH% -C "%PROJECT_PATH%" -d !PULL_ORIGIN!/%GIT_BRANCH%
rem Kill local changes
rem %GIT_PATH% -C "%PROJECT_PATH%" checkout *
%GIT_PATH% -C "%PROJECT_PATH%" checkout -f -B %GIT_BRANCH% !PULL_ORIGIN!/%GIT_BRANCH%
rem >> nul 2>&1
rem Reset to current HEAD
%GIT_PATH% -C "%PROJECT_PATH%" reset --hard !PULL_ORIGIN!/%GIT_BRANCH%
rem Delete local changed files
rem %GIT_PATH% -C "%PROJECT_PATH%" clean -fdx
rem Checkout current files
%GIT_PATH% -C "%PROJECT_PATH%" checkout -f -B %GIT_BRANCH% !PULL_ORIGIN!/%GIT_BRANCH%

if !ERRORLEVEL! NEQ 0 (
    echo.
    echo.
    echo %ESC_RED%***** Error during rebase! You have local changes - Laptop Binaries NOT Updated. *****%ESC_RESET%
    echo.
    exit /B 2
) else (
    echo %ESC_GREEN%Laptop Binaries Update Finished!%ESC_RESET%
)

rem Show current rev
%GIT_PATH% -C "%PROJECT_PATH%" rev-parse HEAD

exit /b 0
