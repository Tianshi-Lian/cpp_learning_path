# ! debug cmake files
message(STATUS "VARIABLE=${VARIABLE}")

include(CMakePrintHelpers)
cmake_print_variables(VARIABLE)
cmake_print_properties(
    TARGETS target
    PROPERTIES POSITION_INDEPENDENT_CODE
)

# ! tracing a cmake run
# cmake -S . -B build --trace-source=CMakeLists.txt

# ! build code in debug mode
# -DCMAKE_BUILD_TYPE=Debug
