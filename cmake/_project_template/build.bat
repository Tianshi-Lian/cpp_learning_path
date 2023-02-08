@echo off

if not exist "build/dist/" (
    mkdir build\dist
)

if not exist "build/build.ninja" (
    cmake -S ./ -B ./build -G "Ninja" -D CMAKE_CXX_COMPILER=g++
)

cd build
ninja
