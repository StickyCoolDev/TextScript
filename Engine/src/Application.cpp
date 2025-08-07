#include "pch.h"
#include "Application.h"
#include "log.h"
#include "Event/Keyboard.h"

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
        KeyboardButtonPressEvent Key(m_CurrentKeyboardKey);
        OnInput(Key);
      }

      std::this_thread::sleep_for(std::chrono::milliseconds(100)); // sleep for 0.1 second
    }
    
  }

  void Application::Close() {
    m_IsRunning = false;
    endwin();
    LOG_INFO("\033[48;5;208m\033[37m Engine \033[0m exited Application");
  }

  void Application::RefreshScreen(){
    refresh();
  }

  void Application::OnStart(){
    // Override in derived class
  }

  void Application::OnUpdate() {
    // Override in derived class
  }
  void Application::OnInput(KeyboardButtonPressEvent Key){
    // Override in derived class 
  }
} // namespace TextScript

