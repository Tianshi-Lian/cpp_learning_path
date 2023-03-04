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

int
section_4()
{
    int width;
    width = 5;

    int height;
    height = 3;
    height = 7;

    int b = 5;     // copy initialization
    int c(6);      // direct initialization
    int d{ 7 };    // direct list initialization - preferred in c++11 onwards
    int e = { 8 }; // copy list initialization
    int f{};       // value initialization

    int i = 5, j = 6;
    int k(7), l(8);
    int m{ 9 }, n{ 10 };
    int o = { 11 }, p = { 12 };
    int q{}, r{};

    [[maybe_unused]] int x; // c++17 hint to the compiler it's okay this is unused

    /**
     * 1.
     * Initialization has to be done at creation, assignment is always a copy overwrite at any point
     *
     * 2.
     * Direct list initialization
     *
     * 3.
     * Default initialization is when no value is assigned at creation, the value is undefined. Should be avoided.
     * Value initialization is explicitly initializing with a known, default value, usually 0. Better practice.
     */

    return 0;
}

int
section_5()
{

    std::cout << "We can also print numbers using std::cout: ";
    std::cout << 4 << std::endl;

    int x{ 3 };
    std::cout << "And also our variable x: ";
    std::cout << x << std::endl;

    std::cout << "Printing"
              << " multiple"
              << " parts "
              << " is"
              << " possible"
              << " for "
              << "concatenation" << std::endl;

    std::cout << "Which allows printing the value x: " << x << " in one statement too" << std::endl;

    std::cout << "We can avoid flushing the buffer from std::endl\nby using the special character \\n instead.\n";

    int value{};
    std::cin >> value;
    std::cout << "You entered: " << value << "\n";

    std::cout << "Enter two numbers separated by a single space: ";
    int i{};
    int j{};
    std::cin >> i >> j;
    std::cout << "You entered: " << i << " and " << j << "\n";

    /**
     * 1.
     * a) outputs 0 and then exits
     * b) outputs the value truncated to an integer and then exits
     * c) outputs the value
     * d) outputs 0 and then exits
     * e) outputs maximum integer value and then exits
     * f) outputs the numeric part and then exits
     */

    return 0;
}

void
do_nothing(int&)
{
}

int
section_6()
{
    int x;
    do_nothing(x);
    std::cout << x << std::endl; // NOLINT

    /**
     * 1.
     * A variable which has never been assigned a value. The value it does have is junk left over at the memory address it was
     * given. Using it is undefined behaviour.
     *
     * 2.
     * Undefined behaviour is doing something which the C++ specification does not describe how it should work. The can lead to
     * all manner of issues, errors, crashes and "weirdness" as there is literally no definition for how it should function.
     */

    return 0;
}

int
section_7()
{
    /**
     * 1.
     * correct
     * incorrect, starts with underscore
     * incorrect, starts with uppercase
     * invalid, contains whitespace
     * incorrect, starts with uppercase
     * invalid, uses keyword
     * correct
     * invalid, starts with number,
     * correct
     *
     */

    return 0;
}

int
section_8()
{
    std::cout << "Hello "
                 "world!";

    return 0;
}

int
main(int argc, char* argv[])
{
    const std::vector<std::function<int()>> sections = { section_1, section_2, section_3, section_4,
                                                         section_5, section_6, section_7, section_8 };

    auto args = std::span(argv, std::size_t(argc));

    if (args.size() > 1) {
        const auto section_to_run = (std::strtoull(args[1], nullptr, 10));
        if (section_to_run > sections.size()) {
            std::cerr << "Error, trying to run section: " << section_to_run << " which does not exist." << std::endl;
            return -1;
        }
        else {
            std::cout << "Running section: " << section_to_run << std::endl;
            return std::invoke(sections.at(section_to_run - 1)); // Decrement for 0 indexing.
        }
    }
    else {
        for (auto& section : sections) {
            std::invoke(section);
            std::cout << std::endl;
        }
    }
}
