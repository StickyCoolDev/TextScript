#pragma once
#include "pch.h"
#include "textscript_api.h"

namespace TextScript {
    namespace TEXTSCRIPT_API Logger {
        TEXTSCRIPT_API void log_info(std::string message);
        TEXTSCRIPT_API void log_warn(std::string message);
        TEXTSCRIPT_API void log_error(std::string message);
    }
}

// Logging macros
#define LOG_INFO(MESSSAGE)  TextScript::Logger::log_info(MESSSAGE)
#define LOG_WARN(MESSSAGE)  TextScript::Logger::log_warn(MESSSAGE)
#define LOG_ERROR(MESSSAGE) TextScript::Logger::log_error(MESSSAGE)
