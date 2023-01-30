@echo off

if not exist "bin/" (
    mkdir bin
)

pushd bin

    if not exist "build.ninja" (
        cmake -G "Ninja" -D CMAKE_CXX_COMPILER=g++ ../
    )

    ninja

popd
