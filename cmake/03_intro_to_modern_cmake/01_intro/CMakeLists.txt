# Setting the version with backwards compat.
cmake_minimum_required(VERSION 3.7...3.25)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

# Base project function
project(my_project
    VERSION 1.0
    DESCRIPTION "An example project"
    LANGUAGES C CXX
)

# Executable with an include dir
add_executable(one two.cpp)
target_include_directories(one PUBLIC include)

# Static library
add_library(three STATIC four.cpp)

# Linking static libraries together
add_library(another STATIC another.cpp)
target_link_libraries(another PUBLIC three)



# Exercise 1
# Sets the minimum version of CMake required to 3.8
cmake_minimum_required(VERSION 3.8)

# Creates a top-level project called Calculator which is written in cpp
project(Calculator LANGUAGES CXX)

# Creates a static library called calclib from the files src/calclib.cpp include/calc/lib.hpp
add_library(calclib STATIC src/calclib.cpp include/calc/lib.hpp)
# Adds an include directory for calclib called include, marked as public so any target linking to this
# will also have access
target_include_directories(calclib PUBLIC include)
# Sets calclib to compile using c++11
target_compile_features(calclib PUBLIC cxx_std_11)

# Creates an executable target called calc from the file apps/calc.cpp
add_executable(calc apps/calc.cpp)
# Links the calc executable target against the calclib lib target, marked as public so calclib is available
# to any target which would use calc
target_link_libraries(calc PUBLIC calclib)
