#include <iostream>
#include <string>

// * This isn't taught yet but is here to ensure compilation.
double
apply_discount(double price, double discount)
{
    return price - discount;
}

int global_var = 42;

int
main()
{

    // ! 2.2.1
    {
        int sum = 0, value, units_sold = 0;
        std::string book("0-201-78345-X");

        double price = 109.99, discount = price * 0.16;
        double sale_price = apply_discount(price, discount);

        int init_1 = 0;
        int init_2 = { 0 };
        int init_3(0);
        int init_4{ 0 };

        long double ld = 3.1415926536;
        // int a{ld}, b = {ld}; // You can't use a list initializer with narrowing types
        int c(ld), d = ld; // Regular assignment is fine, but value is truncated

        std::string str;
        std::cout << str << std::endl; // ""
    }
    std::cout << std::endl << std::endl;

    // Exercise 2.9
    /*
    (a) std::cin >> int input_value;
    Illegal, this would try and input into "int", which is a type and not a variable.

    (b) int i = { 3.14 };
    Illegal, trying to initialize an int to a floating point value while using initializer list which
    disallows narrowing.

    (c) double salary = wage = 9999.99;
    Illegal in this case, but valid format. The variable wage is undefined and therefore can't be used
    to initialize salary, however if it was defined & initialized then this would be valid.

    (d) int i = 3.14;
    Legal, this doesn't use list initialization so this is fine but the value will be narrowed as int
    will not accept floating point values.
    */

    // Exercise 2.10
    /*
    std::string global_str;         // ""
    int global_int;                 // 0
    int main() {
        int local_int;              // undefined
        std::string local_str;      // ""
    }
    */

    // ! 2.2.2

    // Exercise 2.11
    /*
    (a) extern int ix = 1024;
    Definition as this is initialized.

    (b) int iy;
    Definition and initialized according to it's location.

    (c) extern int iz;
    Declaration as this has no initialization and is marked as extern.
    */

    // ! 2.2.3
    {
        int somename, someName, SomeName, SOMENAME;
        int _Jello = 5;
        int me__llo = 4;
        int __mello = 6;
    }

    // Exercise 2.2.3
    /*
    (a) int double = 3.14;
    Invalid, double is reserved.

    (b) int _;
    Valid.

    (c) int catch-22;
    Invalid. Cannot use hyphens in variable names.

    (d) int 1_or_2 = 1;
    Invalid, cannot start name with a number.

    (e) double Double = 3.14;
    Valid, variables names are case-sensitive.
    */

    // ! 2.2.4
    {
        int unique = 0;
        std::cout << global_var << " " << unique << std::endl;

        int global_var = 5; // Shadows the global definition.
        std::cout << global_var << " " << unique << std::endl;

        std::cout << ::global_var << " " << unique << std::endl;
    }
    std::cout << std::endl << std::endl;

    // Exercise 2.13
    // j = 100

    // Exercise 2.14
    // Yes - the loop i will shadow the outer i.
    // 100 45

    return 0;
}

int _Hello = 5;
