# ! control flow
if(variable)
# if variable = ON, YES, TRUE, Y or != 0
else()
    # if variable = OFF, NO, FALSE N, IGNORE, NOTFOUND, "", == 0 or ends in -NOTFOUND
endif()

# prevent variable expansion, quote the test
if("${variable}")
# if variable is not false-like
else()
    # variable is "" (false)
endif()

# if NOT, TARGET, EXISTS, DEFINED
# if STREQUAL, AND, OR, MATCHES, VERSION_LESS, VERSION_LESS_EQUAL

# ! generator-expressions
# evaluated at build time or install time

# debug-only compile flag
target_compile_options(MyTarget PRIVATE "$<$<CONFIG:Debug>:--my-flag>")

# expands to
#
# config = CONFIG.Debug ? Debug : NULL
# return config ? --my-flag : NULL

# sets different include directories for when building and installing
target_include_directories(
    MyTarget
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

# ! macros and functions

function(SIMPLE REQUIRED_ARGS)
    message(STATUS "Simple arguments: ${REQUIRED_ARGS}, followed by ${ARGN}")
    set(${REQUIRED_ARGS} "From SIMPLE" PARENT_SCOPE)
endfunction()

simple(OutVar Foo Bar)
message("Output: ${OutVar}")
# -- Simple arguments: OutVar, followed by Foo;Bar
# Output: From SIMPLE

# ! arguments
function(COMPLEX)
    cmake_parse_arguments(
        COMPLEX_PREFIX
        "SINGLE;ANOTHER"
        "ONE_VALUE;ALSO_ONE_VALUE"
        "MULTI_VALUES"
        ${ARGN}
    )
endfunction()

complex(SINGLE ONE_VALUE, value MULTI_VALUES some other values)
# COMPLEX_PREFIX_SINGLE = TRUE
# COMPLEX_PREFIX_ANOTHER = FALSE
# COMPLEX_PREFIX_ONE_VALUE = "value"
# COMPLEX_PREFIX_ALSO_ONE_VALUE = <UNDEFINED>
# COMPLEX_PREFIX_MULTI_VALUES = "some;other;values"
