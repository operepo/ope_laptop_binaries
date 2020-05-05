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


cd %~dp0
rem echo %~dp0

echo %ESC_GREEN%Killing OPE_LMS app if running...%ESC_RESET%
taskkill /f /im OPE_LMS.exe   1>NUL 2>NUL

rem echo checking for local git repo...
if EXIST ../.git (
  rem echo "Git repo exists..."
) ELSE (
  echo %ESC_GREEN% Initilizing Local Git Repo...
  %~dp0\bin\git.exe init ..  >> nul 2>&1
  %~dp0\bin\git.exe add ../. >> nul 2>&1
)

echo %ESC_GREEN%Updating Laptop Binaries to the latest update...%ESC_RESET%

rem Add the online origin
%~dp0bin\git.exe remote remove ope_origin >> nul 2>&1
%~dp0\bin\git.exe remote add ope_origin https://github.com/operepo/ope_laptop_binaries.git 
rem >> nul 2>&1

rem Add the offline origin
%~dp0\bin\git.exe remote remove ope_smc_origin >> nul 2>&1
%~dp0\bin\git.exe remote add ope_smc_origin git://smc.ed/ope_laptop_binaries.git >> nul 2>&1

rem Which origin were we able to pull from?
SET PULL_ORIGIN=ope_origin

rem Try to pull the online origin
echo %ESC_GREEN%trying online git pull...%ESC_RESET%
%~dp0\bin\git.exe pull !PULL_ORIGIN! %GIT_BRANCH% >> nul 2>&1

if !ERRORLEVEL! NEQ 0 (
    rem Failed to pull from the 
    echo.
    echo.
    echo %ESC_YELLOW%Online pull failed, pulling from local smc server%ESC_RESET%
    echo.
    
    SET PULL_ORIGIN=ope_smc_origin
    %~dp0\bin\git.exe pull !PULL_ORIGIN! %GIT_BRANCH% >> nul 2>&1
    
    if !ERRORLEVEL! NEQ 0 (
        echo.
        echo.
        echo %ESC_RED%***** Failed to git pull from local SMC server, You may not have the latest Laptop Software *****%ESC_RESET%
        echo.
        rem echo !PULL_ORIGIN!
        exit /B 2f
    ) else (
        echo %ESC_GREEN%-- Updated from local SMC server.%ESC_RESET%
    )
) else (
    echo %ESC_GREEN%-- Updated from online github server.%ESC_RESET%
    
)

rem Force us to the current HEAD (force us to update)
echo %ESC_GREEN%Checking out changes...%ESC_RESET%
%~dp0\bin\git.exe checkout %GIT_BRANCH% 
rem >> nul 2>&1
%~dp0\bin\git.exe rebase !PULL_ORIGIN!/%GIT_BRANCH% >> nul 2>&1
if !ERRORLEVEL! NEQ 0 (
    echo.
    echo.
    echo %ESC_RED%***** Error during rebase! You have local changes - Laptop Binaries NOT Updated. *****%ESC_RESET%
    echo.
    exit /B 2
) else (
    echo %ESC_GREEN%Laptop Binaries Update Finished!%ESC_RESET%
)
