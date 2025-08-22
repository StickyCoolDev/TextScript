#pragma once

#include "pch.h"
#include "textscript_api.h"

namespace TextScript {
  class TEXTSCRIPT_API BaseObject {
  public:
    BaseObject(const std::string& name, int x=0, int y=0);
    unsigned short X = 0;
    unsigned short Y = 0;
    
  public:
    std::string GetName(){ return m_Name;}
    std::string GetObjectID(){ return m_ID; }

  private:
    std::string m_Name = "";
    std::string m_ID = "";
  };

}
