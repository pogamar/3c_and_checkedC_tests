set "outputFile=aaaa.txt"
REM Delete the output file if it exists
if exist "%outputFile%" (
    del "%outputFile%"
)

for /f "tokens=1* delims=\" %%A in (
  'forfiles /s /m *.c /c "cmd /c echo @relpath"'
) do for %%F in (^"%%B) do echo %%~F \>> "%outputFile%"

pause