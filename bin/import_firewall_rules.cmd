@echo off

rem reset settings to default
netsh advfirewall reset

rem turn on all profiles
rem netsh advfirewall set allprofiles state on

rem turn on logging
rem netsh advfirewall set currentprofile logging filename "c:\programdata\ope\tmp\log\pfirewall.log"

netsh advfirewall import "%~dp0rc\firewall_config.wfw"
rem netsh advfirewall export "%~dp0rc\firewall_config.wfw"
