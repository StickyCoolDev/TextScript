#pragma once
#include "TextScript.h"

class Game : public TextScript::Application {
public:
  Game(const std::string& name) : TextScript::Application(name) {}

  void OnStart() override {
    LOG_INFO("Application is working");
  }
};

