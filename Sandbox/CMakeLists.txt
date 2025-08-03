add_executable(Sandbox src/main.cpp)

target_include_directories(Sandbox PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(Sandbox PRIVATE Engine)

