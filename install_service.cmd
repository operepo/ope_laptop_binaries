
net stop OPEService

cd %~dp0

svc\OPEService.exe -install -auto -interactive

net start OPEService