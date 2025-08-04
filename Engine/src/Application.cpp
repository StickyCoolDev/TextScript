#include "pch.h"
#include "Application.h"
#include "log.h"

namespace TextScript {
  Application::Application(std::string name)
    : m_ApplicationName(name) {
    // app initialization logic here
  }

  Application::~Application() {
    // cleanup logic here
  }

  void Application::Run() {
    OnStart();
    initscr();

    while (m_IsRunning) {
      OnUpdate();

      m_CurrentKeyboardKey = getch();
      if (m_CurrentKeyboardKey == ""){}
      else {
        OnInput(m_CurrentKeyboardKey);
        m_CurrentKeyboardKey = "";
      }

      std::this_thread::sleep_for(std::chrono::milliseconds(100)); // sleep for 0.1 second
    }
    
  }

  void Application::Close() {
    m_IsRunning = false;
    endwin();
    LOG_INFO("\033[48;5;208m\033[37mEngine\033[0m User exited Application");
  }

  void Application::OnStart() {
    // Override in derived class
  }

  void Application::OnUpdate() {
    // Override in derived class
  }
  void Application::OnInput(std::string Key){
    // Override in derived class 
  }
} // namespace TextScript

