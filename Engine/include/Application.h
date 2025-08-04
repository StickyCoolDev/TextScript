#pragma once

#ifdef _WIN3
  #ifdef T_EXPORTS
    #define TEXTSCRIPT_API __declspec(dllexport)
  #else
    #define TEXTSCRIPT_API __declspec(dllimport)
  #endif
#else //Linux/macOS
  #define TEXTSCRIPT_API
#endif

#include "pch.h"

namespace TextScript {
  class TEXTSCRIPT_API Application {
  public:
    Application(std::string name);
    virtual ~Application();

    void Run();
    void Close();

    virtual void OnStart();
    virtual void OnUpdate();
    virtual void OnInput(std::string Key);
    
  private:
    bool m_IsRunning = true;
    std::string m_ApplicationName = "";
    std::string m_CurrentKeyboardKey = "";
  };
}; // namespace TextScript

