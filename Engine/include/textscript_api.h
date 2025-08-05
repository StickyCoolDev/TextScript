#pragma once

#ifdef _WIN32
  #ifdef T_EXPORTS
    #define TEXTSCRIPT_API __declspec(dllexport)
  #else
    #define TEXTSCRIPT_API __declspec(dllimport)
  #endif
#else // For Linux/macOS
  #define TEXTSCRIPT_API
#endif
