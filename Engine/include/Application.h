#pragma once

#include "textscript_api.h"
#include "pch.h"
#include "Event/Keyboard.h"

namespace TextScript {
  class TEXTSCRIPT_API Application {
  public:
    Application(std::string name);
    virtual ~Application();

    void Run();
    void Close();
    void RefreshScreen();

    virtual void OnStart();
    virtual void OnUpdate();
    virtual void OnInput(KeyboardButtonPressEvent Key);
    
  private:
    bool m_IsRunning = true;
    std::string m_ApplicationName = "";
    std::string m_CurrentKeyboardKey = "";
  };
};

