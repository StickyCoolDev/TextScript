#include "Objects/TextObject.h"
#include "pch.h"

namespace TextScript {
  void TextObject::Draw(){
    clear();
    move(Y, X);
    addstr(Text.c_str());
  }
}
