#include <iostream>

#include <lib/lib.h>

int main() {

    lib::print_message();

    const u32 value = 5;
    std::cout << "Value: " << value << std::endl;

    return 0;
}
