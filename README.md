# C++ Learning Path

## About
The C++ Learning Path is an ordered collection of learning resources I have personally curated from the best of classics up to new, modern best practices. The idea behind this is to start from pre-C++11 and work all the way up to C++20/23 to build a really solid foundation in C++, best practices, how to work with it professionally and see how and why it has evolved. This should allow one to have a deep knowledge of C++ and understand why a lot of things are the way they are to enable better decision making in which features to use and why. This learning path includes books, videos and web-based tutorials, which cover C++ from early days, to design patterns, how to use modern CMake and Conan package management, usage of Catch2 or CTest, large-scale modular software design, all the way up to modern C++20/23.

This repository contains all the code I have personally written while following this path.

## Recommended Tools
### Windows
- **git** - https://git-scm.com/ - one of the most widely used version control systems around. Every single company will use some form of version control system, git is free and open-source, along with being used by many companies. You should learn the very basics and use it from the start to get used to working with version control. [Free crash course](https://www.udemy.com/course/git-and-github-crash-course-creating-a-repository-from-scratch/).
- **WinLibs** - https://winlibs.com/ - this is a pre-built collection of GCC, clang and MinGW64. You can extract this folder and then just add the `mingw64\bin` to your PATH to get access to the two main C++ compilers on your Terminal.
- **CMake** - https://cmake.org/ - while a little clunky CMake is used by almost every large enterprise and project for building, testing and packaging software. Even if you don't use it personally you will have to use it at some point for building external libraries and this is why one of the learning paths are purely for CMake.
- **Conan** - https://conan.io/ - a cross platform package manager for C and C++. This utilizes modern CMake to make handling packages and modules easy. Packages can be handled locally or privately and some of the later CMake and C++ resources rely on it for managing very large, modular projects.

## Path
It is recommended to start with C++ Primer and then use LearnCpp for revision or repition every couple of chapters. It's also recommended to start with C++ for a few chapters until you are comfortable writing small, multiple-file programs and then swapping to CMake for at least the first 2-3 resources and then continue the C++ path while utilising the knowledge learned with CMake.

The "State" column below shows my personal progress with this path, where:
- C = Complete
- I = In Progress
- P = (to) Purchase

<table>
<tr><th>C++</th></tr>
<tr><td valign="top">

|Order|State|Resource|Link|
|---|---|---|---|
|  0 |I| LearnCpp | https://www.learncpp.com/
|  1 |I| [C++ Primer 5th ed](cpp/01_cpp_primer)
|  2 | | Effective C++ 3rd ed
|  3 | | More Effective C++ 1st ed
|  4 | | Effective STL 1st ed
|  5 | | Exceptional C++ 1st ed
|  6 | | More Exceptional C++ 1st ed
|  7 | | Exceptional C++ Style 1st ed
|  8 | | C++ Coding Standards 1st ed
|  9 | | Design Patterns 1st ed
| 10 | | Modern C++ Design, Generics & Patterns 1st ed
| 11 | | C++ In Actions Web ed
| 12 |P| Embracing Modern C++ Safely 
| 13 | | Effective Modern C++ 1st ed 
| 14 |P| C++ Move Semantics The Complete Guide
| 15 |P| C++17 The Complete Guide
| 16 |P| C++ Templates The Complete Guide
| 17 | | C++ Concurrency In Action 1st ed
| 18 |P| C++20 The Complete Guide
| 19 |P| Software Architecture with C++
| 20 |P| C++ High Performance
| 21 |P| Beautiful C++
| 22 |P| Large-Scale C++ Process and Architecture Vol 1
| 23 |P| Large-Scale C++ Process and Architecture Vol 2
| 24 |P| Large-Scale C++ Process and Architecture Vol 3

</td></tr>
</table>

<table>
<tr><th>CMake</th></tr>
<tr><td valign="top">

|Order|State|Resource|Link|
|---|---|---|---|
| 1 | | The Ultimate CMake Quick Start   | https://www.youtube.com/watch?v=YbgH7yat-Jo
| 2 | | An Introduction to Modern CMake  | https://cliutils.gitlab.io/modern-cmake/
| 3 | | LLVM CMake Primer                | https://llvm.org/docs/CMakePrimer.html
| 4 | | Modern CMake for Modular Design  | https://www.youtube.com/watch?v=eC9-iRN2b04
| 5 | | Effective CMake                  | https://www.youtube.com/watch?v=bsXLMQ6WgIk
| 6 | | Professional CMake               | https://crascit.com/professional-cmake/
| 7 | | Git, CMake, Conan                | https://www.youtube.com/watch?v=6sWec7b0JIc
| 8 | | CMake & Conan 3 Years Later      | https://www.youtube.com/watch?v=mrSwJBJ-0z8

<td></tr>
</table>
