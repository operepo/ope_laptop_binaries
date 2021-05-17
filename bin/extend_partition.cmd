@echo off
SETLOCAL ENABLEEXTENSIONS
SETLOCAL ENABLEDELAYEDEXPANSION

rem assign a tmp file
set tfile=%temp%\aa11aa.txt

set disk=%systemdrive%
set vol_num=-1

rem Get the volumes - find the one that matches the system drive
for /F "tokens=2,3" %%A in ('echo list vol ^|diskpart') do (
    set vnum=%%A
    set drive=%%B
    rem echo !drive!
    if "%disk%" == "!drive!:" (
        echo found system volume.
        set vol_num=!vnum!
    )
    rem echo !vol_num! !drive!
    
)

if !vol_num! == -1 (
    echo Volume not found!
    exit /b
) else (
    rem give it a go
    echo Expanding Vol: !vol_num!
    echo select volume !vol_num! > %tfile%
    echo extend >> %tfile%

    rem diskpart /s %tfile%
)

exit /b
