#include "Objects/TextObject.h"
#include "pch.h"

namespace TextScript {
  void TextObject::Draw(){
    clear();
    mvprintw(Y, X, "%s", Text.c_str());
  }
}
