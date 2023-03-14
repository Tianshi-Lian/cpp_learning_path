#include <iostream>

// * This isn't taught yet but here for compilation.
int
get_size()
{
    return 128;
}

int
main()
{

    // ! 2.4.0
    {
        const int buffer_size = 512;
        // buffer_size = 12; // error: object is marked as const

        const int i = get_size(); // valid: initialized at run time
        const int j = 432;        // valid: initialized at compile time
        // const int k;             // error: const must be initialized

        int i2 = 10;
        const int ci = i2; // valid: value of i2 is copied
        int x = ci;        // valid: value oconst ci is copied
    }

    // Exercise 2.26
    /*
    (a) const int buf;
    invalid: objects marked as const must be initialized

    (b) int cnt = 0;
    valid: just a normal int object initialized to 0

    (c) const int sz = cnt;
    valid: creates a const int object and initialized to a copy of cnts value

    (d) ++cnt; ++sz;
    valid; invald: standard int object increment; can't change values of const objects
    */

    // ! 2.4.1
    {
        const int ci = 1024;
        const int& ri = ci; // valid: boht reference and object are const
        // r1 = 42;           // error: r1 is a reference to const
        // int& r2 = ci;      // error: non const reference to a const object

        int i = 42;
        const int& r1 = i;      // valid: const ref to an int object
        const int& r2 = 42;     // valid: const ref
        const int& r3 = r1 * 2; // valid: const ref to result of expression

        double dval = 3.14;
        const int& rd = dval; // valid: binds to an unnamed, temp object used to store int-double conversion

        // Explanation.
        double dexample = 3.14;
        const int temp = dexample; // this is hidden from the programmer as it's implementation details, this stores
        const int& ref = temp;     // the conversion from double to int, and then this is referenced by the const ref
    }

    // ! 2.4.2
    {
        const double pi = 3.14;
        // double* ptr = &pi;       // error: pointer must be marked as pointer to const to hold const value
        const double* cptr = &pi; // valid: pointer is marked as pointer to const
        // *cptr = 5.5;             // error: cannot change a const value being pointer at

        double dval = 3.14; // mutable double object
        cptr = &dval;       // valid: but can't change dval through this pointer

        int error_code = 0;
        int* const current_error = &error_code; // current_error will always point to error_code
        const double pi2 = 3.14159;
        const double* const pip = &pi; // pip is a const pointer to a const object

        // *pip = 2.72;    // error: pip in a pointer to const
        if (*current_error) {
            std::cout << "Error: message" << std::endl;
            *current_error = 0; // valid: underlying error_code is mutable so we can modify through const pointer
        }
    }

    // Excerise 2.27
    /*
    (a) int i = -1, &r = 0;
    invalid: i would be valid, but r would not be as a reference must refer to another object

    (b) int *const p2 = &i2;
    valid?: creates a const pointer to object i2 (if i2 exists somewhere)

    (c) const int i = -1, &r = 0;
    valid: i is const int object, r is a const ref to 0

    (d) const int *const p3 = &i2;
    valid?: creates a const pointer to a const value i2

    (e) const int *p1 = &i2;
    valid: creates a pointer to a const value i2

    (f) const int &const r2;
    invalid: reference cannot be marked as const, also const values would have to be initialized

    (g) const int i2 = i, &r = i;
    valid: const int object called i2 with a const reference to i
    */

    // Exercise 2.28
    /*
    (a) int i, *const cp;
    valid: int object
    invalid: const pointer to an int object must be initialized

    (b) int *p1, *const p2;
    valid: pointer to int object
    invalid: const pointer to an int object must be initialized

    (c) const int ic, &r = ic;
    invalid: const objects must be initialized
    valid: would be valid, const reference to an int object

    (d) const int *const p3;
    invalid: const pointer pointer to a const valid must be initialized

    (e) const int *p;
    valid: pointer to a const object
    */

    // Exercise 2.29
    /*
    (a) i = ic;
    valid: sets i to copy of ic value

    (c) p1 = &ic;
    invalid: regular pointer cannot point to a const value

    (e) p2 = p1;
    invalid: p2 is a const pointer

    (b) p1 = p3;
    invalid: regular pointer cannot point to a non-const pointer

    (d) p3 = &ic;
    invalid: p3 is a const pointer

    (f) ic = *p3;
    invalid: cannot change value of a const object
    */

    // ! 2.4.3
    // Exercise 2.30
    /*
    const int v2 = 0;
    top-level

    int v1 = v2;
    none

    int *p1 = &v1, &r1 = v1;
    none

    const int *p2 = &v2, *const p3 = &i, &r2 = v2;
    low-level, top-level, low-level
    */

    // Exercise 2.31
    /*
    r1 = v2;
    invalid: v2 is top-level const so r1 would need to be const ref

    p1 = p2;
    invalid: p2 is low-level so points to a const object, p1 would have to also be low-level

    p1 = p3;
    invalid: p3 has both top-level and low-level const, p1 would have to also be low-level

    p2 = p1;
    valid: p2 has low-level const so can change it's value to p1, even though p1 has no const, but you
    would not be able to modify the value p2 pointed at, even though that object may be non-const

    p2 = p3;
    valid: p2 has low-level const, p3 has both top and low, but as we are copying the pointer object p3
    the top-level const will be discarded
    */

    // ! 2.4.4
    {
        const int* p = nullptr;     // pointer to a const int
        constexpr int* q = nullptr; // const pointer to int

        // * "static" is not taught yet, but this is easier/better than adding single examples to global scope
        static int j = 0;
        constexpr static int i = 42; // const int object

        constexpr const int* p1 = &i; // constant pointer to the const int i
        constexpr int* p2 = &j;       // constant pointer to int j
    }

    // Exercise 2.4.4
    /*
    invalid: *p implies a pointer and it does not use address of operator

    int null = 0, *p = &null;
    */

    return 0;
}
