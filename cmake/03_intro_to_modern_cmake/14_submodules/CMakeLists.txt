# ! git submodule

find_package(Git QUIET)

if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
    option(GIT_SUBMODULE "Check submodules during build" ON)

    if(GIT_SUBMODULE)
        message(STATUS "Updating submodules")
        execute_process(
            COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            RESULT_VARIABLE GIT_SUBMOD_RESULT
        )

        if (NOT GIT_SUBMOD_RESULT EQUAL "0")
            message(FATAL_ERROR "Failed to update git submodules with ${GIT_SUBMOD_RESULT}")
        endif()
    endif()
endif()

if (NOT EXISTS "${PROJECT_SOURCE_DIR}/extern/repo/CMakeLists.txt")
    message(FATAL_ERROR "Git submodules do not exist")
endif()

add_subdirectory(extern/repo)
