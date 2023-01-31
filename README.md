# C++ Learning Path
By Rob Graham, 2023

## Contents
1. [**Contents**](#contents)
1. [**About**](#about)
1. [**Recommended Tools**](#recommended-tools)
1. [**Path**](#path)
    1. [C++](#path_cpp)
    1. [CMake](#path_cmake)

## About
The C++ Learning Path is an ordered collection of learning resources I have personally curated from the best of classics up to new, modern best practices. The idea behind this is to start from pre-C++11 and work all the way up to C++20/23 to build a really solid foundation in C++, best practices, how to work with it professionally and see how and why it has evolved. This should allow one to have a deep knowledge of C++ and understand why a lot of things are the way they are to enable better decision making in which features to use and why. This learning path includes books, videos and web-based tutorials, which cover C++ from early days, to design patterns, how to use modern CMake and Conan package management, usage of Catch2 or CTest, large-scale modular software design, all the way up to modern C++20/23.

This repository contains all the code I have personally written while following this path.

## Recommended Tools
### Windows
- **git** - https://git-scm.com/ - one of the most widely used version control systems around. Every single company will use some form of version control system, git is free and open-source, along with being used by many companies. You should learn the very basics and use it from the start to get used to working with version control \([Free crash course](https://www.udemy.com/course/git-and-github-crash-course-creating-a-repository-from-scratch/), [Semantic commits](https://nitayneeman.com/posts/understanding-semantic-commit-messages-using-git-and-angular/)\).
- **WinLibs** - https://winlibs.com/ - this is a pre-built collection of GCC, clang and MinGW64. You can extract this folder and then just add the `mingw64\bin` to your PATH to get access to the two main C++ compilers on your Terminal.
- **CMake** - https://cmake.org/ - while a little clunky CMake is used by almost every large enterprise and project for building, testing and packaging software. Even if you don't use it personally, you will have to use it at some point for building external libraries and this is why it is included in the learning path below.
- **Ninja** - https://ninja-build.org/ - a generator for CMake. Ninja is designed around speed and creating/generating builds as fast as possible. Ninja is used by many companies including Google and LLVM, plus a multitude of others. It's very lightweight and portable, using a single executable. You can just drop the executable in the `mingw64\bin` and not have to worry.
- **Conan** - https://conan.io/ - a cross platform package manager for C and C++. This utilizes modern CMake to make handling packages and modules easy. Packages can be handled locally or privately and some of the later CMake and C++ resources rely on it for managing very large, modular projects.

## Path
It is recommended to start with C++ Primer and then use LearnCpp for revision or repetition every couple of chapters. It's also recommended to start with C++ for a few chapters until you are comfortable writing small, multiple-file programs and then swapping to CMake for at least up to and including `An Introduction to Modern CMake`. You can then continue the C++ path while utilising the knowledge learned with CMake. After that it is up to the reader to decide when and how much time to invest into learning CMake, though I would recommend completing at least up to, or including, `Professional CMake` before starting `C++ In Action` and completing `Git, CMake, Conan` before starting `Large-Scale C++ Process and Architecture` so you can apply the learned knowledge during these books.

The "State" column below shows my personal progress with this path, where:
- C = Complete
- I = In Progress
- P = (to) Purchase

<a name="path_cpp"></a>
### **C++**
|Order|State|Resource|Link|
|---|---|---|---|
|  0|I| LearnCpp | https://www.learncpp.com/
|  1|I| [C++ Primer 5th ed](cpp/01_cpp_primer)
|  2| | Effective C++ 3rd ed
|  3| | More Effective C++ 1st ed
|  4| | Effective STL 1st ed
|  5| | Exceptional C++ 1st ed
|  6| | More Exceptional C++ 1st ed
|  7| | Exceptional C++ Style 1st ed
|  8| | C++ Coding Standards 1st ed
|  9| | Design Patterns 1st ed
| 10| | Modern C++ Design, Generics & Patterns 1st ed
| 11| | C++ In Action Web ed
| 12|P| Embracing Modern C++ Safely 
| 13| | Effective Modern C++ 1st ed 
| 14|P| C++ Move Semantics The Complete Guide
| 15|P| C++17 The Complete Guide
| 16|P| C++ Templates The Complete Guide
| 17| | C++ Concurrency In Action 1st ed
| 18|P| C++20 The Complete Guide
| 19|P| Software Architecture with C++
| 20|P| C++ High Performance
| 21|P| Beautiful C++
| 22|P| Large-Scale C++ Process and Architecture Vol 1
| 23|P| Large-Scale C++ Process and Architecture Vol 2
| 24|P| Large-Scale C++ Process and Architecture Vol 3

<a name="path_cmake"/></a>
### **CMake**
|Order|State|Resource|Link|
|---|---|---|---|
| 1|C| [Intro to CMake](cmake/01_intro_to_cmake) | https://www.youtube.com/watch?v=HPMvU64RUTY
| 2|C| [The Ultimate CMake Quick Start](cmake/02_ultimate_quick_start) | https://www.youtube.com/watch?v=YbgH7yat-Jo
| 3|I| An Introduction to Modern CMake | https://cliutils.gitlab.io/modern-cmake/
| 4| | LLVM CMake Primer | https://llvm.org/docs/CMakePrimer.html
| 5| | Modern CMake for Modular Design | https://www.youtube.com/watch?v=eC9-iRN2b04
| 6| | Effective CMake | https://www.youtube.com/watch?v=bsXLMQ6WgIk
| 7| | Professional CMake | https://crascit.com/professional-cmake/
| 8| | Git, CMake, Conan | https://www.youtube.com/watch?v=6sWec7b0JIc
| 9| | CMake & Conan 3 Years Later | https://www.youtube.com/watch?v=mrSwJBJ-0z8

<td></tr>
</table>
