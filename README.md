# TextScript
a conosle base game engine made with C++(Ncurses) and Cmake

## How to Run
first clean any unwanted files
```bash
chmod u+x run clean # add permissions to run as an executable
./clean
```
then run the **run** script:
```bash
./run Sandbox # set the executable as Sandbox
```
## How to use 
```cpp
#include "TextScript.h" // include game engine
#include "sandbox.h"    // import our 'game'

int main() {
   Game game("Sandbox App"); // initialise the app
   game.Run(); // run the app
   return 0;
}

```

top level CMakeLists.txt:
```Cmake
cmake_minimum_required(VERSION 3.10)

project(TextScript CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

add_subdirectory(Engine)

add_subdirectory(Sandbox)
```
