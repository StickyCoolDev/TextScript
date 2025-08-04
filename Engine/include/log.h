#pragma once
#include <string>
#ifdef _WIN32
  #ifdef T_EXPORTS
    #define TEXTSCRIPT_API __declspec(dllexport)
  #else
    #define TEXTSCRIPT_API __declspec(dllimport)
  #endif
#else // For Linux/macOS
  #define TEXTSCRIPT_API
#endif

namespace TextScript {
    namespace Logger {
        TEXTSCRIPT_API void log_info(std::string message);
        TEXTSCRIPT_API void log_warn(std::string message);
        TEXTSCRIPT_API void log_error(std::string message);
    }
}
#define LOG_INFO(MESSSAGE)  TextScript::Logger::log_info(MESSSAGE)
#define LOG_WARN(MESSSAGE)  TextScript::Logger::log_warn(MESSSAGE)
#define LOG_ERROR(MESSSAGE) TextScript::Logger::log_error(MESSSAGE)
