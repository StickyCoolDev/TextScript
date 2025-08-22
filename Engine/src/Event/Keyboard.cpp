#include "Event/Keyboard.h"
#include "pch.h"

namespace TextScript{
    KeyboardButtonPressEvent::KeyboardButtonPressEvent(const std::string& Key)
    : m_Key(Key){

    }
    std::string KeyboardButtonPressEvent::GetEventName() {
        return "KeyboardButtonPressEvent";
    }
    KeyboardButtonPressEvent::ArrowKey KeyboardButtonPressEvent::GetArrowKeyPress() {
        if (m_Key[0] >= 0 && m_Key[0] <= 255){
            return ArrowKey::NONE;
        }
        else{
            switch (m_Key[0]){
                case KEY_UP:
                    return ArrowKey::UP;
                    break;
                case KEY_DOWN:
                    return ArrowKey::DOWN;
                    break;
                case KEY_LEFT:
                    return ArrowKey::LEFT;
                    break;
                case KEY_RIGHT:
                    return ArrowKey::RIGHT;
                    break;
            }
        }
    }
    std::string KeyboardButtonPressEvent::GetKeyPress(){
      if (m_Key[0] >= 0 && m_Key[0] <= 255) {
        return m_Key;
      }
    }
}
