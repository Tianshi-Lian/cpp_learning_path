# Set our binary output directory to build/dist
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/dist)

add_executable(program
    src/main.cpp
)
target_link_libraries(program
    PRIVATE project_options project_warnings
)
target_include_directories(program
    PUBLIC include
)
set_target_properties(program PROPERTIES
    LINK_WHAT_YOU_USE ON
)
