# Set our binary output directory to bin
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_executable(program
    main.cpp
)
target_link_libraries(program
    PUBLIC project_options project_warnings
)
