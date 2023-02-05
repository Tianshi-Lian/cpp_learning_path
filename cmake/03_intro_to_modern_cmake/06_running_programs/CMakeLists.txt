# ! configure time
find_package(Git QUIET)

if (Git_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.GIT")
    execute_process(
        COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        RESULT_VARIABLE GIT_SUBMOD_RESULT
    )
    if(NOT GIT_SUBMOD_RESULT EQUAL "0")
        message(FATAL_ERROR "Failed to update git submodules")
    endif()
endif()

# ! build time
find_package(PythonInterp REQUIRED)
add_custom_command(
    OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/include/generated.h"
    COMMAND "${PYTHON_EXECUTABLE}" "${CMAKE_CURRENT_SOURCE_DIR}/scripts/generate_header.py" --argument
    DEPENDS some_target
)

add_custom_target(
    generate_header ALL
    DEPENDS "${CMAKE_CURRENT_BINARY_DIR}/include/generated.h"
)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/include/generated.h DESTINATION include)
