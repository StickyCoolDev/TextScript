#pragma once
#include <string>
namespace TextScript {
  class BaseObject {
  public:
    BaseObject(std::string name, int x=0, int y=0);
    
    
    int X = 0;
    int Y = 0;

    std::string GetName(){return m_Name;}
  private:
    std::string m_Name = "";
    std::string m_ID = "";
  };

}
