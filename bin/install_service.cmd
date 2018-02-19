
net stop OPEService

cd %~dp0
cd ..

svc\OPEService.exe -install -auto -interactive

net start OPEService