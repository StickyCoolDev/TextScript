#pragma once

#include "pch.h"
#include "Objects/BaseObject.h"

namespace TextScript {
  class TextObject : public TextScript::BaseObject {
  public:
    TextObject(const std::string& name) : BaseObject(name) {} 
    std::string Text = "█";
    
    void Draw();
  private:
    
  };
}
