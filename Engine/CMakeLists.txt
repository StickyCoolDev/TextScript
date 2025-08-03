file(GLOB_RECURSE SOURCES "src/*.cpp")
list(REMOVE_ITEM SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/pch.cpp")

add_library(Engine SHARED ${SOURCES})

add_library(Engine-pch OBJECT "${CMAKE_CURRENT_SOURCE_DIR}/src/pch.cpp")

target_link_libraries(Engine PRIVATE Engine-pch)

target_precompile_headers(Engine PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src/pch.h")

target_compile_definitions(Engine PUBLIC T_EXPORTS)

target_include_directories(Engine PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")

