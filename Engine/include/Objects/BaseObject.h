#pragma once
#include <string>

namespace TextScript {
  class BaseObject {
  public:
    BaseObject(std::string name, int x=0, int y=0);
    
    int X = 0;
    int Y = 0;

  public:
    std::string GetName(){return m_Name;}
    std::string GetObjectID(){return m_ID;}
  private:
    std::string m_Name = "";
    std::string m_ID = "";
  };

}
