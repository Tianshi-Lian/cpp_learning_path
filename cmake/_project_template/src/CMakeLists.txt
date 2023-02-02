# Set our binary output directory to build/dist
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/dist)

add_executable(program
    main.cpp
)
target_link_libraries(program
    PUBLIC project_options project_warnings
)
