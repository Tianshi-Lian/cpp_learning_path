# almost all CMake files should start with this
cmake_minimum_required(VERSION 3.12...3.25)

# project statement which should always list the language
# version is also recommended to initialise other vars
project(
  SimpleExample
  VERSION 1.0
  LANGUAGES CXX
)

# default library where libname matches target name, with the usual extensions on your system
add_library(MyLibExample simple_lib.cpp simple_lib.hpp)

# executable file where output name matches target name
add_executable(MyExample simple_example.cpp)

# link the targets together, in this case the executable depends on the lib
target_link_libraries(MyExample PRIVATE MyLibExample)
