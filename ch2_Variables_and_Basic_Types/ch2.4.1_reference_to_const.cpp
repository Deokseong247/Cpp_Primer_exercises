#include <iostream>
int main()
{
    const int ci = 1024;
    const int &ref = ci;  // a reference to ci, or a const reference
    // r1 = 42;  // ERROR: cannot change a const
    // int &r2 = ci;  // ERROR: non-const reference cannnot refer to a const 

    /*
    note: a reference must match the type of the referred object,
          except (1) initializing a const reference from any expression that can be converted to the type of the reference
                 (2) 
    */

    int i = 42;
    const int &r1 = i;  //  exception (1): a const reference referring an int
    const int &r2 = 42;  //
    const int &r3 = r1 * 2;  //
    // int &r4 = r * 2;  // ERROR: a plain reference cannot refer to a const reference

    // A temporary object: unnamed object created by the compiler when it needs a place to store a result from evaluating an expression.
    double dval = 3.14;
    // compiler: const int temp = dval;
    const int &ri = dval;  // and ri bound to temp, not dval
    

    // A const reference may refer to either a const object or a non-const object
    int &rtnon = i;  // int i = 42;
    const int &rtc = i;  // both rtnon and rtc refer to int i, but rtc is a const reference
    rtnon = 0;  // fine: rtnon is not a const reference. int i will be changed.
    // rtc = 0;  // ERROR: we can't use rtc to change i

    return 0; 
}