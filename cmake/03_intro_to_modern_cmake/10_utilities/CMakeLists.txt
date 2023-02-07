# ! ccache
find_program(CCACHE_PROGRAM ccache)
if(CCACHE_PROGRAM)
    set(CMAKE_CXX_COMPILER_LAUNCHER "${CCACHE_PROGRAM}")
    set(CMAKE_CUDA_COMPILER_LAUNCHER "${CCACHE_PROGRAM}")
endif()

# ! clang-tidy
# cmake -S . -B build-tidy -DCMAKE_CXX_CLANG_TIDY="$(which clang-tidy);-fix"
# cmake --build build -j 1

# ! include-what-you-use
# cmake -S . -B build-iwyu -DCMAKE_CXX_INCLUDE_WHAT_YOU_USE=include-what-you-use
# cmake --build build-iwyu 2> iwyu.out
# fix_includes.py < iwyu.out

# ! link what you use
set_target_properties(foo_target PROPERTIES LINK_WHAT_YOU_USE ON)

# ! clang-format
# git ls-files -- '*.cpp' '*.h' | xargs clang-format -i -style=file
# git diff --exit-code --color
