@echo off

cd %~dp0


rem reset secpol.msc settings to default (admin settings)
cd %windir%\system32
secedit /configure /cfg %windir%\inf\defltbase.inf /db defltbase.sdb /verbose


rem remove current group policy objects
rd /S /Q "%windir%\System32\GroupPolicyUsers"
rd /S /Q "%windir%\System32\GroupPolicy"

gpupdate /force


