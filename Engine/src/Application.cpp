#include "pch.h"
#include "Application.h"


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
      std::this_thread::sleep_for(std::chrono::milliseconds(100)); // sleep for 0.1 second
    }
    
  }

  void Application::Close() {
    m_IsRunning = false;
    endwin();
  }

  void Application::OnStart() {
    // Override in derived class
  }

  void Application::OnUpdate() {
    // Override in derived class
  }
} // namespace TextScript

