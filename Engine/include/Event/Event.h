#pragma once
#include "pch.h"

namespace TextScript {
  enum class EventType {
    Base,
    KeyboardKeyPress,
    MouseMovement,
    MouseButtonPress,
  };

  class BaseEvent {
  public:
    virtual std::name GetEventName(){ return "BaseEvent"; }
    virtual EventType GetEventType(){ return EventType::Base; }
  };
}
