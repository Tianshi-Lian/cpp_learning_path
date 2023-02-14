# ! catch2 installed on system
find_package(Catch2 3 REQUIRED)

# use catch2 main
add_executable(tests test.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

# use custom main
add_executable(custom-main-tests test.cpp test-main.cpp)
target_link_libraries(custom-main-tests PRIVATE Catch2::Catch2)

# ! fetch repo
include(FetchContent)

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.0.1 # or later
)
FetchContent_MakeAvailable(Catch2)

add_executable(tests test.cpp)

# if your cpp has it's own main() use Catch2::Catch2
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
