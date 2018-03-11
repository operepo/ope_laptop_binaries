@echo off

netsh advfirewall import "%~dp0rc\firewall_config.wfw"
