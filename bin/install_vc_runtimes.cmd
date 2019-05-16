@echo off

echo ----> Installing MSVC Runtimes - 2005...
call %~dp0vcredist_x64_2005.exe /q
call %~dp0vcredist_x86_2005.exe /q


echo ----> Installing MSVC Runtimes - 2008...
call %~dp0vcredist_x64_2008.exe /install /quiet
call %~dp0vcredist_x86_2008.exe /install /quiet

echo ----> Installing MSVC Runtimes - 2010...
call %~dp0vcredist_x64_2010.exe /install /quiet
call %~dp0vcredist_x86_2010.exe /install /quiet

echo ----> Installing MSVC Runtimes - 2012...
call %~dp0vcredist_x64_2012.exe /install /quiet
call %~dp0vcredist_x86_2012.exe /install /quiet

echo ----> Installing MSVC Runtimes - 2013...
call %~dp0vcredist_x64_2013.exe /install /quiet
call %~dp0vcredist_x86_2013.exe /install /quiet

echo ----> Installing MSVC Runtimes - 2015 to 2019...
call %~dp0vc_redist.x64_15_to_19.exe /install /quiet
call %~dp0vc_redist.x86_15_to_19.exe /install /quiet

rem Shouldn't need this as it should be one of the prev (15 or 17)
rem echo ----> Installing MSVC Runtimes - LMS redist...
rem call %~dp0..\lms\vc_redist.x64.exe /install /quiet


rem Shouldn't need this - dlls should be located in the app folder
rem NOTE - As of 5/16/19 - qt still needing 1.0.? Open ssl version
rem call %~dp0Win64OpenSSL_Light-1_1_1b.exe /silent /allusers /nocancel /norestart /closeapplications /restartapplications /noicons
rem  /verysilent
