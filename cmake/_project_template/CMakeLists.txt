cmake_minimum_required(VERSION 3.25)

project(myproject CXX)
include(cmake/standard_project_settings.cmake)

add_library(project_options INTERFACE)
target_compile_features(project_options INTERFACE cxx_std_11)

add_library(project_warnings INTERFACE)

# Set default compiler warnings
include(cmake/compiler_warnings.cmake)
set_project_warnings(project_warnings)

# Allow optional static analysis
include(cmake/static_analysis.cmake)

# Enable precompiled headers with a global PCH
option(ENABLE_PCH "Enable Precompiled Headers" ON)
if(ENABLE_PCH)
    target_precompile_headers(project_options INTERFACE <map> <memory> <string> <vector> <utility>)
endif()

include_directories(include)

add_subdirectory(src)
