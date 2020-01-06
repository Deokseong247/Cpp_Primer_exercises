#include <iostream>
int main()
{
    // Definitions of variables on previous exercises
    int i = -1;
    int i2 = 0;
    int *const p2 = &i2;
    const int *const p3 = &i2;
    const int *p1 = &i2;
    const int ic = 0, &r = ic;

    i = ic;  // valid: assign a const int to an int
    p1 = p3;  // valid: assign a const pointer to a const, to a pointer to a const int -> assigned pointer will be set to a const
    p1 = &ic;  // valid: assign a const int to an int through a pointer to const int
    // p3 = &ic;  // ERROR: assign a const int to a const pointer, which is unchangeable
    // p2 = p1;  // ERROR: assign a pointer to a const int, to a const pointer. A const pointer is unchangeable
    // ic = *p3;  // ERROR: assign a const pointer to a const int. A const int is unchangeable.

    return 0;
}