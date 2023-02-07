# ! meta compiler features
target_compile_features(foo_target PUBLIC cxx_std_11)
set_target_properties(foo_target PROPERTIES CXX_EXTENSIONS OFF)

# ! global and property settings
set(CMAKE_CXX_STANDARD 11 CACHE STRING "The C++ standard to use")
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set_target_properties(
    foo_target PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)
