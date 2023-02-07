# ! position independent code
# globally
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
# per target
set_target_properties(foo_lib PROPERTIES POSITION_INDEPENDENT_CODE ON)

# ! find library
find_library(MATH_LIBRARY m)
if(MATH_LIBRARY)
    target_link_libraries(foo_target PUBLIC ${MATH_LIBRARY})
endif()

# ! link time optimisation
# requires cmake 3.9+
include(CheckIPOSupported)
check_ipo_supported(RESULT result)
if(result)
    # globally
    set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)
    # per target
    set_target_properties(foo_target PROPERTIES INTERPROCEDURAL_OPTIMIZATION TRUE)
endif()
