@echo off
:: Turns off command echoing in the script to make output cleaner (only your intended echo/output will show)

echo username %username%
:: Displays the current logged-in Windows username using the environment variable %username%

echo windows version  
:: Displays the text "windows version" as a label

ver      :: Displays the current Windows version

color 5  
:: Changes the Command Prompt text and background color (5 = purple background with white text)

date  :: Displays the current system date and prompts for a new one (press Enter to keep current date)

dir  :: Lists all files and directories in the current working directory

pause
:: Pauses the script and displays "Press any key to continue..." until a key is pressed
`