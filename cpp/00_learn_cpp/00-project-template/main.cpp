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

std::array<std::function<int()>, 1> sections = { section_1 };

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
