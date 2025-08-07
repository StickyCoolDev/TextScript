#pragma once
#include "TextScript.h"
#include <iostream>

class Game : public TextScript::Application {
public:
  Game(const std::string& name) 
    : TextScript::Application(name), player("player") {}
    
  void OnStart() override {
    LOG_INFO("Application is working");
    LOG_INFO("object name is " + player.GetName() + " and id=" + player.GetObjectID());
    player.X = 0;
    LOG_INFO("player position x:"+ std::to_string(player.X) + " y:"+ std::to_string(player.Y) );
  }
  void OnUpdate() override {
    player.Draw();
    RefreshScreen();
  }

  void OnInput(TextScript::KeyboardButtonPressEvent Key) override {
    if (Key.GetKeyPress() == "d" ) {
      player.X++;
    }
    if (Key.GetKeyPress() == "a") {
      player.X--;
    }
    if (Key.GetKeyPress() == "q"){
      Close();
      
    }
  }
private:
  TextScript::TextObject player;
};

