#include <functional>
#include <iostream>
#include <span>
#include <vector>

int
section_1()
{
    std::cout << "Hello, World!" << std::endl;

    return 0;
}

int
section_2()
{
    std::cout << "Hello, World!\n"; // Comments are ignored

    std::cout << "It is nice to meet you.\n"; // Comments which aren't aligned can be hard
    std::cout << "Welcome, C++.\n";           // to read when lines are different length

    // Though comments are also be placed above
    std::cout << "This is section 1.2\n";

    /** There are also multi-line comments
     * where each line will be ignored
     * within the symbols
     *
     * It can be better to prefix these lines
     * to ensure the comments line up and
     * read nicely
     */

    // Commenting out code
    // std::cout << 1;

    // std::cout << 2;
    // std::cout << 3;

    /*
    std::cout << 4;
    std::cout << 5;
    */

    return 0;
}

int
section_3()
{
    int x;
    double width;

    int a, b;

    /**
     * 1.
     * Any information which can be used digitally
     *
     * 2.
     * A piece of data
     *
     * 3.
     * A named value
     *
     * 4.
     * The name given to a piece of data(variable)
     *
     * 5.
     * The way a piece of data should be interpreted, such as number or character
     *
     * 6.
     * A whole, decimal number
     */

    return 0;
}

std::array<std::function<int()>, 3> sections = { section_1, section_2, section_3 };

int
main(int argc, char* argv[])
{
    auto args = std::span(argv, std::size_t(argc));

    if (args.size() > 1) {
        const auto section_to_run = (std::strtoull(args[1], nullptr, 10));
        if (section_to_run > sections.size()) {
            std::cerr << "Error, trying to run section: " << section_to_run << " which does not exist." << std::endl;
            return -1;
        }
        else {
            return std::invoke(sections.at(section_to_run - 1)); // Decrement for 0 indexing.
        }
    }
    else {
        for (auto& section : sections) {
            std::invoke(section);
        }
    }
}
