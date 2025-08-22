@echo off
setlocal

:: Define the directories to clean
set "DIRECTORIES=.\ .\%~dp0Sandbox\ .\%~dp0Engine\"

:: Define the files and directories to remove
set "REMOVE_TARGETS=CMakeCache.txt CMakeFiles cmake_install.cmake Makefile build bin lib install"

:: A counter to track if anything was removed
set "CLEANED_SOMETHING=0"

echo Starting CMake cleanup process...

:: Loop through each specified directory
for %%d in (%DIRECTORIES%) do (
    echo.
    echo Searching for files in: "%%d"

    :: Check if the directory exists
    if exist "%%d" (
        :: Loop through each target to remove
        for %%t in (%REMOVE_TARGETS%) do (
            :: Use 'if exist' to check for the file or directory before attempting to delete
            if exist "%%d%%t" (
                echo   - Removing %%d%%t
                rd /s /q "%%d%%t" >nul 2>&1
                if not errorlevel 1 (
                    set "CLEANED_SOMETHING=1"
                )
            )
        )
    ) else (
        echo Warning: Directory not found: "%%d"
    )
)

echo.
echo Cleanup complete.
echo.

if %CLEANED_SOMETHING% equ 0 (
    echo No CMake files or directories were found to remove.
) else (
    echo Successfully removed specified CMake build artifacts.
)

endlocal

