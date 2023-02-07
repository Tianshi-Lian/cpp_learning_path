cmake_minimum_required(VERSION 3.25)

# Main project settings
project(myproject
    VERSION 0.0.1
    DESCRIPTION "New project"
    LANGUAGES CXX
)
include(cmake/standard_project_settings.cmake)

# Set default compile features
add_library(project_options INTERFACE)
target_compile_features(project_options INTERFACE cxx_std_11)

# Set default compiler warnings
add_library(project_warnings INTERFACE)
include(cmake/compiler_warnings.cmake)
set_project_warnings(project_warnings)

# Allow optional static analysis
include(cmake/static_analysis.cmake)

# Enable precompiled headers with a global PCH
option(ENABLE_PCH "Enable Precompiled Headers" ON)
if(ENABLE_PCH)
    target_precompile_headers(project_options INTERFACE <map> <memory> <string> <vector> <utility>)
endif()

add_subdirectory(app)
