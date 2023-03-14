#include <cstdlib>
#include <iostream>

int
main()
{

    // ! 2.3.1
    {
        int ival = 1024;
        int& refVal = ival;
        // int &relVal2; // Err: must be initialized
        refVal = 2;
        int ii = refVal;
        int& refVal3 = refVal; // Gets bound to ival
        int i = refVal;        // Initialised to the value of ival

        int x = 1024, x2 = 2048; // both int objects
        int &r = x, r2 = x2;     // r is ref to x object
        int x3 = 1024, &rx = x3; // x3 is int object, rx is ref to x3
        int &r3 = x3, &r4 = x2;  // r3 is ref to x3 object, r4 is ref to x2 object

        // int &refVal4 = 10; // Err: must refer to an object
        double dval = 3.14;
        // int &refVal5 = dval; // Err: must refer to same base type
    }

    // Exercise 2.15
    /*
    (a) int ival = 1.01;
    Valid, but will truncate.

    (b) int &rval1 = 1.01;
    Invalid, reference must refer to an object.

    (c) int &rval2 = ival;
    Valid, ival gets truncated to int, this becomes reference to int object

    (d) int &rval3;
    Invalid, reference must be initialised.
    */

    // Exercise 2.16
    /*
    int i = 0, &r1 = i; double d = 0, &r2 = d;

    (a) r2 = 3.14159;
    Valid. Will set d to value.

    (b) r2 = r1;
    Valid. Equivalent to d = i. You can assign an int to double as it doesn't narrow.

    (c) i = r2;
    Valid, but will truncate. i is int object which will get set to value of d.

    (d) r1 = d;
    Valid, but will truncase. r2 is just alias for i, so will act same as above.
    */

    // ! 2.3.2
    {
        int *ip1, *ip2;  // two pointers to int
        double dp, *dp2; // dp2 is pointer to double

        int ival = 42;
        int* p = &ival; // p holds the address of ival to "point" to ival

        double dval;
        double* pd = &dval;
        double* pd2 = pd;
        // int *pi = pd; // error: pointers pi & pd are different types
        // int *pi = &dval; // error: can only assign objects of the same type

        std::cout << *p;

        *p = 0;
        std::cout << p;

        // null pointer initialization
        int* n1 = nullptr;
        int* n2 = 0;
        int* n3 = NULL;

        int zero = 0;
        // int *z = zero; // error: can't assign int to a point (even 0)
    }
    {
        int i = 42;
        int* pi = 0;   // initialized but addresses no object
        int* pi2 = &i; // initialized and holds address of i
        int* pi3;      // unitialized within block scope
        pi3 = pi2;     // pi3 and pi2 address the same object (i)
        pi2 = 0;       // pi2 now addresses no object (but pi3 still does)
    }
    {
        int ival = 1024;
        int* pi = 0;
        int* pi2 = &ival;
        if (pi) {
            std::cout << "pi valid" << std::endl;
        }
        if (pi2) {
            std::cout << "pi2 valid" << std::endl;
        }
    }
    {
        double obj = 3.14, *pd = &obj;
        void* pv = &obj; // obj can be any type
        pv = pd;         // pv can hold a pointer to any type
    }
    std::cout << std::endl << std::endl;

    // Exercise 2.18
    {
        int value_1 = 10;
        int value_2 = 5;
        int* pointer_1 = nullptr;
        pointer_1 = &value_1;
        *pointer_1 = 20;
        pointer_1 = &value_2;
        std::cout << "value_1: " << value_1 << " value_2: " << value_2 << std::endl;
    }
    std::cout << std::endl << std::endl;

    // Exercise 2.19
    /*
    references are not objects, they are just an alias to an object, a point is an object itself which holds an address
    pointers do not have to be initialized and can be left in a null or invalid state
    pointers can be reassigned to point to a new object, references cannot
    */

    // Exercise 2.20
    /*
    creates an int object with value 42 called i
    creates a pointer to i called p1
    sets the value of i to 42*42 by derefencing p1 to assign, then derefencing p1 twice to multiply the values.
    */

    // Exercise 2.21
    /*
    int i = 0;

    (a) double* dp = &i;
    invalid, a pointer cannot hold address of an object with a different type

    (b) int *ip = i;
    invalid, a pointer cannot be initialized to the value of an object

    (c) int *p = &i;
    valid, initializes p to hold the address of i
    */

    // Exercise 2.22
    /*
    if (p) // checks if p holds a valid address
    if (*p) // checks if the value of p is not 0
    */

    // Exercise 2.23
    /*
    not really
    you can check if it points to something through if (p), but that really just checks that it's holding an
    address. the object at the other end still might not be valid or correct, for example if p was never initialized
    it could just point to a random piece of memory
    */

    // Exercise 2.24
    /*
    i is an object of type int
    void* can point to an object of any type, lp can only point to an object of type long
    */

    // ! 2.3.3
    {
        int i = 1024, *pi = &i, &ri = i;

        int** ppi = &pi;    // pointer to a pointer to i
        int*** pppi = &ppi; // pointer to a pointer to a pointer to i

        std::cout << "The value of i:\n"
                  << "direct: " << i << "\n"
                  << "indirect: " << *pi << "\n"
                  << "double-indirect:" << **ppi << std::endl;
    }
    {
        int i = 42;
        int* p;      // pointer
        int*& r = p; // reference to a pointer
        r = &i;      // r is reference to a pointer so this makes p point to i
        *r = 0;      // deferencing the reference works as expected and changes i
    }
    std::cout << std::endl << std::endl;

    // Exercise 2.25
    /*
    (a) int* ip, i, &r = i;
    pointer to int, int object, reference to i
    null, undefined, same as i

    (b) int i, *ip = 0;
    int object, pointer to int
    undefined, null

    (c) int* ip, ip2;
    pointer to int, int object
    undefined, undefined
    */

    return 0;
}
