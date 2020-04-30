@echo off


rem https://docs.microsoft.com/en-us/windows-hardware/drivers/devtest/bcdedit--set


echo Setting secure boot options

bcdedit /timeout 0
bcdedit /set {bootmgr} displaybootmenu no
 
rem Use standard policy - no F8 key
bcdedit /set {current} bootmenupolicy Standard
bcdedit /set {default} bootmenupolicy Standard
rem bcdedit /set {globalsettings} bootmenupolicy Standard

rem Try to boot normally every time - helps to not show recovery options
bcdedit /set {current} bootstatuspolicy ignoreallfailures
bcdedit /set {default} bootstatuspolicy ignoreallfailures
rem bcdedit /set {globalsettings} bootstatuspolicy ignoreallfailures


bcdedit /set {current} recoveryenabled off
bcdedit /set {default} recoveryenabled off
bcdedit /set {globalsettings} recoveryenabled off

rem bcdedit /set {current} recoveryenabled No


bcdedit /set {current} advancedoptions off
bcdedit /set {default} advancedoptions off
bcdedit /set {globalsettings} advancedoptions off

bcdedit /set {current} bootems off
bcdedit /set {default} bootems off
rem bcdedit /set {gloabalsettings} bootems off


bcdedit /set {current} optionsedit off
bcdedit /set {default} optionsedit off
rem bcdedit /set {gloabalsettings} optionsedit off

rem disable Win Recovery Environment (WinRE)
reagentc /disable




bcdedit /deletevalue {current} safeboot

rem Option to kill safemode w bluescreen/error
rem HKEY_LOCAL_MACHINE\System\CurrentControlSet\Control\SafeBoot
rem rename "minimal" and "Network" to cause blue screens
rem OK IF THERE ARE FAILURES ON SECOND RUNS!
echo Modifying Registry to break safeboot
reg copy HKLM\System\CurrentControlSet\Control\SafeBoot\Minimal HKLM\System\CurrentControlSet\Control\SafeBoot\MinimalX /s
reg delete HKLM\System\CurrentControlSet\Control\SafeBoot\Minimal /f

reg copy HKLM\System\CurrentControlSet\Control\SafeBoot\Network HKLM\System\CurrentControlSet\Control\SafeBoot\NetworkX /s
reg delete HKLM\System\CurrentControlSet\Control\SafeBoot\Network /f



