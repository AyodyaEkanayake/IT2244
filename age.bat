@echo off

set /p year= Enter your birth year: 
set /p month= Enter your month:
set /p dates= Enter your date:
set /a yearNew=%date:~10,4% -%year%
set /a monthNew=%date:~4,2% -%month%
set /a dateNew=%date:~7,2% -%dates%
set dayNew=%date:~0,3%
echo Your are %yearNew% years, %monthNew% months, %dateNew% dates old.

echo The day is %dayNew%

pause 
