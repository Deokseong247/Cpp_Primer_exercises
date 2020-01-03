#include <iostream>
#include <cstdlib>

int main()
{
    int ival = 42;
    int *p = &ival;

    std::cout << "ival = " << ival << ", p = " << *p << std::endl;  // [42 42]
// Type mismatch
    double dval;
    double *pd = &dval;
    double *pd2 = pd;  // pd2 points pd's address
    // int *pi = pd; yields an error: pd - double pointer, pi - int pointer
    // pi = &dval; another error: assgining a double to an int pointer

    // assigning to a pointer
    *p = 0;  // assigning 0 to ival through p
    std::cout << "ival = " << ival << ", p = " << *p << std::endl;  // [0 0]

    // null pointers
    int *p1 = nullptr;  // equivalent int *p1 = 0;
    int *p2 = 0;  // require #include <cstdlib>
    int *p3 = NULL;

    // Pointer assignments
    int i = 42;
    int *pi = 0;  // a null pointer
    int *pi2 = &i;  // pi2 points to an int i
    int *pi3;
    pi3 = pi2;  // assigning an int pointer pi2 pointing an int t to an int pointer pi3
    pi2 = 0;  // reset pi2 pointing no object

    pi = &ival;  // pi -> ival: pi reassigned from a null pointer to a pointer to an int ival. 
    *pi = 0;  // assign 0 to the object to which "pi pointing"

    std::cout << "ival = " << ival << std::endl;  // [0]


    // void* Pointers can hold the address of any object.
    double obj = 3.14, *ptd = &obj;
    void *pv = &obj;  // obj can be an object of any type
    pv = ptd;  // pv (void) can hold a pointer to any type

    return 0;
}