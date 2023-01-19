int main() {

    // ! 2.3.1
    {
        int ival = 1024;
        int &refVal = ival;
        //int &relVal2; // Err: must be initialized
        refVal = 2;
        int ii = refVal;
        int &refVal3 = refVal; // Gets bound to ival
        int i = refVal; // Initialised to the value of ival

        int x = 1024, x2 = 2048;  // both int objects
        int &r = x, r2 = x2;      // r is ref to x object
        int x3 = 1024, &rx = x3;  // x3 is int object, rx is ref to x3
        int &r3 = x3, &r4 = x2;   // r3 is ref to x3 object, r4 is ref to x2 object

        //int &refVal4 = 10; // Err: must refer to an object
        double dval = 3.14;
        //int &refVal5 = dval; // Err: must refer to same base type
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

    return 0;
}
