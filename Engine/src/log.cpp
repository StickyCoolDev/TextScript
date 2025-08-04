#include "log.h"
#include "pch.h"

namespace TextScript {
    namespace Logger {
        void log_info(std::string message){
          std::cout << "\x1b[44m INFO  \x1b[0m "<< message << std::endl;
        }

        void log_warn(std::string message){
          std::cout << "\033[48;5;208m WARN  \033[0m " << message << std::endl;
        }

        void log_error(std::string message){
          std::cout << "\033[101m ERROR \033[0m " << message << std::endl;
        }
    }
}
