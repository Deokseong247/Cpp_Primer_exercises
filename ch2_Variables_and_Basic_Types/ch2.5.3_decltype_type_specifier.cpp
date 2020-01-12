#include <iostream>

int main()
{
    // When 'decltype' is applied on a variable
    // decltype return the type of that variable, including top-level const and references
    const int ci = 0, &cj = ci;  // cj is a reference to const int. decltype(cj) will be a reference type.
    decltype(cj) x = 0;  // x is a const int
    decltype(cj) y = x;  // y is a const int bound to x
    // decltype(cj) z;  // ERROR: z is a reference and needs an initializer

    // When 'decltype' is applied on a non-variable expression
    int i = 42, *p = &i, &r = i;
    decltype(r + 0) b;  // expression: r + 0, yielding an int. -> b is an int
    // decltype(*p) c;  // c is int& and needs an initializer

    // double parenthesis
    // decltype((i)) d;  // ERROR: d is int&
    decltype(i) e;  // e is an (uninitialized) int

    
    return 0;
}