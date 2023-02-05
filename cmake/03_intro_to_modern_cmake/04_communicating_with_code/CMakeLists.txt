# ! configure file
# vars from cmake into c++
# see Version.h.in
configure_file(
    "${PROJECT_SOURCE_DIR}/Version.h.in"
    "${PROJECT_BINARY_DIR}/Version.h"
)

# ! reading files
# vars from c++ into cmake
set(VERSION_REGEX "#define MY_VERSION[ \t]+\"(.+)\"")
file(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/Version.h"
    VERSION_STRING REGEX ${VERSION_REGEX}
)
string(REGEX REPLACE ${VERSION_REGEX} "\\1" VERSION_STRING ${VERSION_STRING})
project(program
    LANGUAGES CXX
    VERSION ${VERSION_STRING}
)
