#include <iostream>
int main()
{
    int ival = 1024;
    int &refVal = ival;  // a ref refers to 'ival' and it is bound to ival's initializer. 
    /* There's no way to rebind to another object.
       int &refVal2;  error: a ref must be initialized because there's no way to rebind it to another.
       note: a ref is just another name for an existing object.
    */

    //  All operations on a defined ref are done on the object that the ref bound to
    refVal = 2;  // same as: ival = 2;
    int ii = refVal;  // reference as an initializer, and same as: ii = ival;

    int &refVal3 = refVal;  //  not same as: int &refVal3 = &refVal;
    int iii = refVal;  // iii initialized with refVal, or equivalently, ival.
    
    int i = 1024, i2 = 2048;  // both are int
    int &r = i, r2 = i2;  // &r: a reference bound to i, r2 initialized with i2's value.
    int i3 = 1024, &ri = i3;  // i3 is an int and &ri refers to i3.
    int &r3 = i3, &r4 = i2;  // both are references

    // An object and a reference bound to the object must match their exact type.
    double dval = 3.14;
    double &refVal5 = dval;  // int &refVal5; gives an error


    return 0;
}