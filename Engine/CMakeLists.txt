file(GLOB_RECURSE SOURCES "src/*.cpp" "src/Objects/*.cpp")
list(REMOVE_ITEM SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/pch.cpp")

add_library(Engine-pch OBJECT "${CMAKE_CURRENT_SOURCE_DIR}/src/pch.cpp")
target_include_directories(Engine-pch PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")

add_library(Engine SHARED ${SOURCES})

target_link_libraries(Engine PRIVATE Engine-pch)
target_link_libraries(Engine PUBLIC ncurses)


target_precompile_headers(Engine PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include/pch.h")

target_compile_definitions(Engine PUBLIC T_EXPORTS)

target_include_directories(Engine PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")

