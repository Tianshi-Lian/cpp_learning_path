#include <iostream>
#include <ostream>

int main() {
    // Book
    std::cout << "Enter two numbers:" << std::endl;
    int value_1 = 0, value_2 = 0;
    std::cin >> value_1 >> value_2;
    std::cout << "The sum of " << value_1 << " and " << value_2 << " is " << value_1 + value_2 << std::endl;

    std::cout << std::endl << std::endl;

    // Exercise 1.3
    std::cout << "Hello, World" << std::endl;

    std::cout << std::endl << std::endl;

    // Exercise 1.4
    std::cout << "Enter two more numbers:" << std::endl;
    std::cin >> value_1 >> value_2;
    std::cout << "The product of " << value_1 << " and " << value_2 << " is " << value_1 * value_2 << std::endl;

    std::cout << std::endl << std::endl;

    // Exercise 1.5
    std::cout << "The product of ";
    std::cout << value_1;
    std::cout << " and ";
    std::cout << value_2;
    std::cout << " is ";
    std::cout << value_1 * value_2;
    std::cout << std::endl;

    std::cout << std::endl << std::endl;

    // Exercise 1.6
    /*
        std::cout << "The sum of " << value_1;
                  << " and " << value_2;
                  << " is " << value_1 + value_2 << std::endl;

    This program would not be legal because the expression is ended by the ; on
    the first line and therefore the ostream would not be accessible by the
    lines following it.

    To fix, you could either remove the ; from the end of the first and second line,
    combine the three lines into a single expression, or add std::cout to the front
    of lines two and three.
     */
    // Solution 1
    std::cout << "The sum of " << value_1 << " and " << value_2 << " is " << value_1 + value_2 << std::endl;

    return 0;
}
