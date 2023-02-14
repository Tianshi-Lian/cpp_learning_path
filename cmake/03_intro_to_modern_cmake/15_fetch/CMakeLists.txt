# ! FetchContent

include(FetchContent)
FetchContent_Declare(
    catch
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.3.1
)

# cmake 3.14+
FetchContent_MakeAvailable(catch)
