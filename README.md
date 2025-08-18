# TextScript
a conosle base game engine made with C++(Ncurses) and Cmake


<img src="https://github.com/user-attachments/assets/8137ed62-85df-4596-95ee-23b9ae4ded08"></img>

## How to Run
first clean any unwanted files
```bash
chmod u+x run clean # add permissions to run as an executable
./clean
```
then run the **run** script:
```bash
cmake .
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

sandbox.h:
```cpp
#pragma once
#include "TextScript.h"

class Game : public TextScript::Application {
public:
  Game(const std::string& name)
    : TextScript::Application(name), player("player") {}

  void OnStart() override {
    // This function is called once at the start of the application.
    LOG_INFO("Application is working");
    LOG_INFO("Object name is " + player.GetName() + " and ID=" + player.GetObjectID());
    player.X = 0;
    player.Y = 0;
    LOG_INFO("Player position x:" + std::to_string(player.X) + " y:" + std::to_string(player.Y));
  }

  void OnUpdate() override {
    // This function is called every frame.
    player.Draw();
    RefreshScreen();
  }

  void OnInput(TextScript::KeyboardButtonPressEvent Key) override {
    // This function handles keyboard input.
    if (Key.GetKeyPress() == "d") {
      player.X++;
    }
    if (Key.GetKeyPress() == "a") {
      player.X--;
    }
    if (Key.GetKeyPress() == "q") {
      Close(); // Quits the application.
    }
  }

private:
  TextScript::TextObject player;
};


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
