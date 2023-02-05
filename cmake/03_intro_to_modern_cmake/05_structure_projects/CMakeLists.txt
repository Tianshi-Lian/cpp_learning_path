cmake_minimum_required(VERSION 3.14...3.25)

project(
    ExampleStructure
    VERSION 1.0
    DESCRIPTION "An example project structure"
    LANGUAGES CXX
)

# only run the following on the main project
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)

    # ensure we use c++xx instead of g++xx
    set(CMAKE_CXX_EXTENSIONS OFF)

    # support folders in IDEs
    set_property(GLOBAL PROPERTY USE_FOLDERS ON)

    # enable testing for the main app
    include(CTest)

    # enable doc generation if available
    find_package(Doxygen)
    if(Doxygen_FOUND)
        add_subdirectory(docs)
    else()
        message(STATUS "Doxygen not found, not building docs")
    endif()
endif()

# added in cmake 3.11 & 3.14 to allow downloads during configure step
include(FetchContent)

# header only library so could be replace with submodule or fetch
# adds Boost
# find_package(Boost REQUIRED)

# download fmt (string formatting) lib
FetchContent_Declare(
    fmtlib
    GIT_REPOSITORY
    https://github.com/fmtlib/fmt.git
    GIT_TAG 5.3.0
)
FetchContent_MakeAvailable(fmtlib)

# library source
add_subdirectory(src)

# executable source
add_subdirectory(apps)

# tests source
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_subdirectory(tests)
endif()
