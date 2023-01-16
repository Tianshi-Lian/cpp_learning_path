#include <iostream>

int main() {

    // ! 2.1.1

    // Exercise 2.1
    /*
    short     - integral type which is at least 16 bits
    int       - integral type which is at least 16 bits
    long      - integral type which is at least 32 bits
    long long - integral type which is at least 64 bits
    unsigned  - on it's own, a non-negative int. As a modifier it specifies the proceding
                type cannot be negative, essentially doubling it's max value
    signed    - on it's own, an int. As a modifier it specifies the proceding type can be
                a positive or negative value.
    float     - floating point type which has at least 6 significant digits
    double    - floating point type which has at least 10 significant digits
    */

    // Exercise 2.2
    /*
    For the rate, principal and payment of a mortgage I would use either float or double for
    all values due to the fact that floating-point precision would be needed to store these
    values (6.5%, $250,000.00, $500.00). The choice between float and double would come down
    to which was more performant on the system the solution is to be ran on as all these values
    would only need 2 decimal places, so either type could store them comfortably.
    */

    // ! 2.1.2
    {
        bool b = 42;            // b is true
        int i = b;              // i == 1
        i = 3.14;               // i == 3
        double pi = i;          // pi == 3.0
        unsigned char c = -1;   // c == 255
        signed char c2 = 256;   // c2 == undefined

        int num = 42;
        if (num) // condition will be true as value converted to bool (non-0 is true)
            num  = 0;

        unsigned u = 10;
        int v = -42;
        std::cout << v + v << std::endl;
        std::cout << u + v << std::endl;

        unsigned u2 = 42;
        std::cout << u2 - u << std::endl;
        std::cout << u - u2 << std::endl;
    }
    std::cout << std::endl << std::endl;

    // Exercise 2.3
    {
        /*
        unsigned u = 10, u2 = 42;
        std::cout << u2 - u << std::endl;  // 32
        std::cout << u - u2 << std::endl;  // 4294967264
        int i = 10, i2 = 42;
        std::cout << i2 - i << std::endl;  // 32
        std::cout << i - i2 << std::endl;  // -32
        std::cout << i - u << std::endl;   // 0
        std::cout << u - i << std::endl;   // 0
        */
        unsigned u = 10, u2 = 42;
        std::cout << u2 - u << std::endl;
        std::cout << u - u2 << std::endl;
        int i = 10, i2 = 42;
        std::cout << i2 - i << std::endl;
        std::cout << i - i2 << std::endl;
        std::cout << i - u << std::endl;
        std::cout << u - i << std::endl;
    }
    std::cout << std::endl << std::endl;

    // ! 2.1.3
    {
        int decimal = 20;
        int octal = 024;
        int hexadecimal = 0x14;

        double floating_decimal = 3.14159;
        double floating_exponent_1 = 31.14159E0;
        double floating_exponent_2 = 0e0;
        double floating_1 = 0.;
        double floating_2 = .001;

        char letter = 'a';
        // <?> world = "Hello, World"; // string literal. '\0' gets appended to the end.
        // 'a'.length = 1     "a".length == 2
        std::cout << "A really, really long string literal can "
                     "be split across multiple lines and each line"
                     " will be concatenated into a single literal." << std::endl;
        std::cout << '\a';
        std::cout << '\n';
        std::cout << "\tHi!\n";
        std::cout << "Hi \x4dO\115!\n";

        wchar_t w = L'a';
        unsigned long long ull = 42ULL;
        float f = 1E-3F;
        long double ld = 3.14159L;

        bool test = false;
        if (test == false)
            test = true;
    }
    std::cout << std::endl << std::endl;

    // Exercise 2.5
    /*
    (a) ’a’, L’a’, "a", L"a"
      char, wchar_t, string, wstring (string using wchar_t)
    (b) 10, 10u, 10L, 10uL, 012, 0xC
      int, unsigned, long, unsigned long, int, int
    (c) 3.14, 3.14f, 3.14L
      double, float, long double
    (d) 10, 10u, 10., 10e-2
      int, unsigned, double, double
    */

    // Exercise 2.6
    /*
    The latter definition would use an octal literal, so therefore the value of day
    would be the same as 07 == 7. However month would error as 09 is not valid.
    */

    // Exercise 2.7
    /*
    (a) "Who goes with F\145rgus?\012"
        "Who goes with Fergus?\f" (line feed). String literal.
    (b) 3.14e1L
        3.141. Long double.
    (c) 1024f
        1024.0. Float.
    (d) 3.14L
        3.14. Double.
    */

    // Exercise 2.8
    {
        std::cout << "2\115\n";
        std::cout << 2 << "\t\115" << '\n';
    }

    return 0;
}
