@echo off
setlocal enabledelayedexpansion

set "folderPath=%cd%"   REM Sets the current folder as the folder path
set "outputFile=aaaa.txt"

echo Processing .c files in %folderPath%...

REM Delete the output file if it exists
if exist "%outputFile%" (
    del "%outputFile%"
)

REM Loop through .c files in the current folder
for /R "%folderPath%" %%F in (*.c) do (
    REM Get the file name
    set "filename=%%~nxF"
    
    REM Append a backslash at the end of the filename
    echo !filename! \>> "%outputFile%"
)

echo Processing complete. Results saved in %outputFile%.

pause
endlocal
