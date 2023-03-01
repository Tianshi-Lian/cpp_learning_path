include_guard()

# Set common project settings for this CMake project
function(set_standard_project_settings)
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
        message(STATUS "Using ccache.")
        set(CMAKE_CXX_COMPILER_LAUNCHER ${CCACHE})
        set(CMAKE_CACHEFILE_DIR ${CMAKE_BINARY_DIR})
    else()
        message(STATUS "Could not find ccache.")
    endif()

    # Generates compile_commands.json
    set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

    # Disable compiler extensions to ensure compliance with ISO C++ standards
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    set(CMAKE_CXX_EXTENSIONS OFF)

    # Enable link time optimisation by default for release
    if(${CMAKE_BUILD_TYPE} STREQUAL "Release")
        include(CheckIPOSupported)
        check_ipo_supported(RESULT result)

        if(result)
            set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)
        endif()
    endif()
endfunction()

# Set the common compiler warnings for the provided project
function(set_compiler_warnings project_name)
    option(WARNINGS_AS_ERRORS "Treat compiler warnings as errors" TRUE)

    set(CLANG_WARNINGS
        -Wall
        -Wextra # reasonable and standard
        -Wextra-semi # Warn about semicolon after in-class function definition.
        -Wshadow # warn the user if a variable declaration shadows one from a parent context
        -Wnon-virtual-dtor # warn the user if a class with virtual functions has a non-virtual destructor. This helps catch hard to track down memory errors
        -Wold-style-cast # warn for c-style casts
        -Wcast-align # warn for potential performance problem casts
        -Wunused # warn on anything being unused
        -Woverloaded-virtual # warn if you overload (not override) a virtual function
        -Wpedantic # warn if non-standard C++ is used
        -Wconversion # warn on type conversions that may lose data
        -Wsign-conversion # warn on sign conversions
        -Wnull-dereference # warn if a null dereference is detected
        -Wdouble-promotion # warn if float is implicit promoted to double
        -Wformat=2 # warn on security issues around functions that format output (ie printf)
        -Wimplicit-fallthrough # warn on statements that fallthrough without an explicit annotation
    )

    set(GCC_WARNINGS
        ${CLANG_WARNINGS}
        -Wmisleading-indentation # warn if indentation implies blocks where blocks do not exist
        -Wduplicated-cond # warn if if / else chain has duplicated conditions
        -Wduplicated-branches # warn if if / else branches have duplicated code
        -Wlogical-op # warn about logical operations being used where bitwise were probably wanted
        -Wuseless-cast # warn if you perform a cast to the same type
    )

    if(WARNINGS_AS_ERRORS)
        message(TRACE "Warnings are treated as errors")
        list(APPEND CLANG_WARNINGS -Werror)
        list(APPEND GCC_WARNINGS -Werror)
    endif()

	if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
		set(PROJECT_WARNINGS ${CLANG_WARNINGS})
	else()
		set(PROJECT_WARNINGS ${GCC_WARNINGS})
	endif()

    target_compile_options(${project_name} INTERFACE ${PROJECT_WARNINGS})
endfunction()
