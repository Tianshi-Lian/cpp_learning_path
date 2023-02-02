include_guard()

# Set a default built type if none specified
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    message(
        STATUS "Setting build type to 'Debug' as none were specified."
    )
    set(CMAKE_BUILD_TYPE
        Debug
        CACHE STRING "Choose the type of build." FORCE)
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()

# Finds and activates ccache for builds
find_program(CCACHE ccache)
if(CCACHE)
    message("Using ccache...")
    set(CMAKE_CXX_COMPILER_LAUNCHER ${CCACHE})
    set(CMAKE_CACHEFILE_DIR ${CMAKE_BINARY_DIR})
else()
    message("Could not find ccache...")
endif()

# Generates compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
