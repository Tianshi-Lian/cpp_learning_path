#include <iostream>

int main() {
    // ! 2.5.1
    {
        typedef double wages;     // wages is a synonym for double
        typedef wages base, *p;   // base is a synonym for double, p for double*

        using hours = int;   // hours is a synonym for int
        hours work_time = 5;

        typedef char* pstring;
        const pstring str = 0;   // str is a constant pointer to char
        const pstring* ps;       // ps is a pointer to a constant pointer to char
    }

    // ! 2.5.2
    {
        int value_1 = 3;
        int value_2 = 5;
        auto item = value_1 + value_2;

        auto i = 0, *p1 = &i;
        // auto sz = 0, pi = 3.14; // error: deduced types must be the same

        int x = 0, &r = i;
        auto a = r;   // deduces int as r is a reference to an int object, copying the value of i

        const int ci = i, &cr = ci;
        auto b = ci;    // deduces int as ci is top-level const (copies value of ci)
        auto c = cr;    // deduces int as cr is just alias for ci
        auto d = &i;    // deduces pointer to int as & takes address of int object i
        auto e = &ci;   // deduces pointer to const int address of a const object is a low-level const

        const auto f = ci;   // deduces int as type, copying from ci, f is marked as const

        // auto& h = 42       // error: can't bind a reference to a literal
        auto& g = ci;         // g is a const int referencing ci
        const auto& j = 42;   // but we can bind a const ref to a literal

        auto k = ci, &l = i;      // int object, ref to int
        auto &m = ci, *p = &ci;   // const ref to int, pointer to const int
        // auto &n = i, *p2 = &ci; // error: type mismatch, n is reference to int, p2 is pointer to const int
    }

    // Exercise 2.33
    /*
    a = 42;
    a is int object of 42

    b = 42;
    b is int object of 42

    c = 42;
    c is int object of 42

    d = 42;
    error: attempts to assign non-zero value to a pointer

    e = 42;
    error: attempts to assign non-zero value to a pointer

    g = 42;
    error: attempts to change value of const int ci
    */

    // Exercise 2.34
    {
        auto i = 0;
        int& r = i;
        const int ci = i;
        const int& cr = ci;

        auto a = r;
        std::cout << "a) B: " << a;
        a = 42;
        std::cout << " A: " << a << std::endl;

        auto b = ci;
        std::cout << "b) B: " << b;
        b = 42;
        std::cout << " A: " << b << std::endl;

        auto c = cr;
        std::cout << "c) B: " << c;
        c = 42;
        std::cout << " A: " << c << std::endl;

        /* auto d = &i;
        std::cout << "d) F: " << d;
        d = 42;
        std::cout << "T: " << d << std::endl;

        auto e = &ci;
        std::cout << "e) F: " << e;
        e = 42;
        std::cout << "T: " << e << std::endl;

        auto &g = ci;
        std::cout << "g) F: " << g;
        g = 42;
        std::cout << "T: " << g << std::endl; */
    }
    std::cout << std::endl << std::endl;

    // Exercise 2.35
    /*
    const int i = 42;

    auto j = i;
    int

    const auto &k = i;
    const ref to int

    auto *p = &i;
    const int*

    const auto j2 = i, &k2 = i;
    const int, const ref to int
    */
    {
        const int i = 42;             // const int
        auto j = i;                   // int
        const auto& k = i;            // cont int&
        auto* p = &i;                 // const int*
        const auto j2 = i, &k2 = i;   // const int, const int&
    }

    return 0;
}
