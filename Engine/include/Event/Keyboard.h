#pragma once

#include "pch.h"
#include "Event/Event.h"
#include <string>

namespace TextScript {
  class KeyboardButtonPressEvent : BaseEvent {
  public:
    enum class ArrowKey{
      NONE,
      UP,
      DOWN,
      LEFT,
      RIGHT,
    };

    KeyboardButtonPressEvent(const std::string& Key);
    ArrowKey GetArrowKeyPress();
    std::string GetEventName() override;
    std::string GetKeyPress();
  private:
    std::string m_Key = "";
  };
}

