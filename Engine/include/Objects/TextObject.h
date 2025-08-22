#pragma once

#include "pch.h"
#include "Objects/BaseObject.h"
#include "textscript_api.h"

namespace TextScript {
  class TEXTSCRIPT_API TextObject : public TextScript::BaseObject {
  public:
    TextObject(const std::string& name) : BaseObject(name) {} 
    std::string Text = "█";
    
    void Draw();
  private:
    
  };
}
