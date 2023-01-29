@echo off

if not exist "bin/" mkdir bin

pushd bin

cmake -G "Ninja" -D CMAKE_CXX_COMPILER=g++ ../
ninja

popd
