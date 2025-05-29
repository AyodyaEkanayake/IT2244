@echo off 
set /p year=Enter your birth year: 
set /p month=Enter your birth month:
set /p dayB=Enter your birth date: 
set /a age= %date:~10,4%-%year%
set /a monthN=%date:~4,2%-%month%
set /a dateN=%date:~7,2%-%dayB%
set day=%date:~0,3%
echo your age is %age% years %monthN% months %dateN% days old
echo The day is %day%
pause
