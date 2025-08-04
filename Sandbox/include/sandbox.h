#pragma once
#include "TextScript.h"
#include <iostream>

class Game : public TextScript::Application {
public:
  // Use the member initializer list to initialize the 'player' object
  Game(const std::string& name) 
    : TextScript::Application(name), player("player") {}
    
  void OnStart() override {
    LOG_INFO("Application is working");
    LOG_INFO("object name is " + player.GetName() + " and id=" + player.GetObjectID());
    player.X = 50;
    LOG_INFO("player position x:"+ std::to_string(player.X) + " y:"+ std::to_string(player.Y) );
  }
  void OnUpdate() override {
    player.Draw();
    refresh();
  }

  void OnInput(std::string Key) override {
    if (Key == "d" ) {
      player.X++;
    }
    if (Key == "a") {
      player.X--;
    }
    if (Key == "q"){
      Close();
      
    }
  }
private:
  TextScript::TextObject player; // Declare the member variable here
};

