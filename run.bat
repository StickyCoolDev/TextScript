@echo off
setlocal

set "CMAKE_FILES=.\CMakeFiles"

if exist "%CMAKE_FILES%" (
   echo cmake files found
) else (
    echo CMakeFiles not found. running cmake
    cmake .
)

if "%~1"=="" (
    echo build and run
    echo Usage: %~nx0 ^<executable_name^>
    exit /b 1
)

set EXECUTABLE_NAME=%~1

cls

type message.txt
echo %EXECUTABLE_NAME%

cmake --build .

echo.
echo running App
".\bin\%EXECUTABLE_NAME%.exe"

