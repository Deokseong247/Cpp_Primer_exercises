#include <iostream>
#include <error.h>
int main()
{
// Pointers can point to either const or non-const
    // A const pointer just stores an address of a const object, doesn't change its value
    const double pi = 3.14;
    
    // double *ptr = &pi;  // ERROR: ptr is a plain pointer
    double const *cptr = &pi;  // a const pointer needs const in front of it
    
    // *cptr = 42;  // ERROR: cannot assign to *cptr which is a const pointer


    // const pointers: basetype *const name; -> 'where to point' will never change for this pointer
    int errNumb = 0;
    int *const curErr = &errNumb;  // curErr always points to errNumb
  
    const double *const pip = &pi;
    /* Reading from right to left
        (1) *const pip: a const pointer whose pointed object won't change(or is a const object)
        (2) const double () = &pi: the pointed object is a const double
        -> The const double and the pointer's direction won't change.
    */

    if (*curErr) {  // if the object curErr pointing is non-zero,
        *curErr = 0;  // assign zero to it
    }

    return 0;
    
}