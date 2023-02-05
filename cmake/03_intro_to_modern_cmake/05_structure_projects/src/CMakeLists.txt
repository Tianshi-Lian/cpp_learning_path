# headers are not required for add_library but if wanted to show in IDEs then are required

# glob all the headers for cmake 3.12 or later
file(GLOB HEADER_LIST "${PROJECT_SOURCE_DIR}/include/project/*.h")

# make an automatic library (static or dynamic based on user settings)
add_library(project_library lib.cpp ${HEADER_LIST})

# we need the include directory, and so will anyone who uses this lib
target_include_directories(project_library PUBLIC "${PROJECT_SOURCE_DIR}/include")

# depends on boost
# target_link_libraries(project_library PRIVATE Boost::boost)

# all users of this library need c++11 or greater
target_compile_features(project_library PUBLIC cxx_std_11)

# help IDEs put headers in a nice place
source_group(
    TREE "${PROJECT_SOURCE_DIR}/include"
    PREFIX "Header Files"
    FILES ${HEADER_LIST}
)
