@echo off

cd %~dp0


rem reset secpol.msc settings to default (admin settings)
<nul set /p output="."
rem echo .
cd %windir%\system32
secedit /configure /cfg %windir%\inf\defltbase.inf /db defltbase.sdb /verbose 2>NUL 1<NUL


rem remove current group policy objects
<nul set /p output="."
rem echo .
rd /S /Q "%windir%\System32\GroupPolicyUsers" 2>NUL 1<NUL
rd /S /Q "%windir%\System32\GroupPolicy" 2>NUL 1<NUL

<nul set /p output="."
echo Running gpupdate (if it takes more than 60 seconds, cancel and re-run credrential app)
gpupdate /force 2>NUL 1<NUL

cd %~dp0
