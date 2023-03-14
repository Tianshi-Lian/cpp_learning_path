#include <iostream>

int
main()
{
    // 1.4.1
    int sum = 0, value = 1;
    while (value <= 10) {
        sum += value;
        ++value;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

    std::cout << std::endl << std::endl;

    // Excerise 1.9
    sum = 0, value = 50;
    while (value <= 100) {
        sum += value;
        ++value;
    }
    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

    std::cout << std::endl << std::endl;

    // Excercise 1.10
    value = 10;
    std::cout << "Numbers from 10 to 1: " << std::endl;
    while (value > 0) {
        std::cout << value-- << " ";
    }
    std::cout << std::endl;

    std::cout << std::endl << std::endl;

    // Exercise 1.11
    int user_1 = 0, user_2 = 0;
    std::cout << "Enter two numbers to print their range: " << std::endl;
    std::cin >> user_1 >> user_2;
    std::cout << "Numbers from " << user_1 << " to " << user_2 << std::endl;
    while (user_1 <= user_2) {
        std::cout << user_1++ << " ";
    }
    std::cout << std::endl;

    std::cout << std::endl << std::endl;

    // 1.4.2
    int sum_2 = 0;
    for (int value_2 = 1; value <= 10; ++value) {
        sum_2 += value_2;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

    std::cout << std::endl << std::endl;

    // Exercise 1.12
    /*
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;

    This loop will go through the range of numbers from -100 to 100 inclusively, storing the value in
    the variable i. It keeps sum of the values by adding i to sum in the loop body. The final value of
    this loop will be 0.
    */

    // Exercise 1.13
    sum_2 = 0;
    for (int i = 50; i <= 100; ++i) {
        sum_2 += i;
    }
    std::cout << "Sum of 50 to 100 inclusive is " << sum_2 << std::endl;

    std::cout << "Numbers from 10 to 1: " << std::endl;
    for (int i = 10; i > 0; --i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << std::endl << std::endl;

    // Exercise 1.14
    /*
    for doens't leak variables into outer scope but is longer to read/write
    */

    // Exercise 1.15
    // error: missing ) in parameter list for main
    // int main ( {
    // }
    // error: used colon, not a semicolon, after endl
    // std::cout << "Read each file." << std::endl:
    // error: missing quotes around string literal
    // std::cout << Update master. << std::endl;
    // error: second output operator is missing
    // std::cout << "Write new master." std::endl;
    // error: missing ; on return statement
    // return 0
    // error: incorrect type usage
    // int num = "hello";
    // error: mispelling variable name
    // int value_1 = 0;
    // std::cin >> value_2;
    // error: missing namespace
    // int value_2 = 0;
    // cin >> value_2;

    // 1.4.3
    int sum_3 = 0, value_3 = 0;
    std::cout << "Enter numbers to add " << std::endl;
    while (std::cin >> value_3) {
        sum_3 += value_3;
    }
    std::cout << "The sum of your input is " << sum_3 << std::endl;

    std::cin.clear(); // this "technically" isn't learned yet, but needed for single file.
    std::cout << std::endl << std::endl;

    // Exercise 1.16
    int product = 1, input = 0;
    std::cout << "Enter numbers to multiply " << std::endl;
    while (std::cin >> input) {
        product *= input;
    }
    std::cout << "The product of your numbers is " << product << std::endl;

    std::cin.clear();
    std::cout << std::endl << std::endl;

    // 1.4.4
    int current_value = 0, value_4 = 0;
    std::cout << "Enter a range of numbers to count their frequency " << std::endl;
    if (std::cin >> current_value) {
        int count = 1;
        while (std::cin >> value_4) {
            if (value_4 == current_value) {
                ++count;
            }
            else {
                std::cout << current_value << " occurs " << count << " times" << std::endl;
                current_value = value_4;
                count = 1;
            }
        }
        std::cout << current_value << " occurs " << count << " times" << std::endl;
    }

    std::cin.clear();
    std::cout << std::endl;

    // Exercise 1.17
    // If they are all equal it should be fine. It won't hit the else statement but it will still
    // hit the EOF and then print using the final std::cout.

    // Exercise 1.18
    // Input   2 2 2 2 2
    // Output  2 occurs 5 times
    // Input   1 2 3 4 5
    // Output  1 occurs 1 times 2 occurs 1 times 3 occurs 1 times 4 occurs 1 times 5 occurs 1 times

    // Exercise 1.19
    std::cout << "Enter two number to print range " << std::endl;
    int num_1 = 0, num_2 = 0;
    std::cin >> num_1 >> num_2;
    if (num_1 > num_2) {
        int temp = num_1;
        num_1 = num_2;
        num_2 = temp;
    }
    std::cout << "Your range is " << std::endl;
    while (num_1 <= num_2) {
        std::cout << num_1++ << " ";
    }
    std::cout << std::endl;

    std::cout << std::endl << std::endl;

    return 0;
}
