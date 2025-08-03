#pragma once
#include "TextScript.h"
#include <iostream>

class Game : public TextScript::Application {
public:
  Game(const std::string& name) : TextScript::Application(name) {}

  void OnStart() override {
    LOG_INFO("Application is working");
    TextScript::BaseObject player("player");
    LOG_INFO("object name is " + player.GetName() + "and id=" + player.GetObjectID());
    player.X = 12;
    LOG_INFO("player position x:"+ std::to_string(player.X) + " y:"+ std::to_string(player.Y) );
  }
};

