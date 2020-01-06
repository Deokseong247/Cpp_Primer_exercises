#include <iostream>
// top-level const: an object itself is const.
// low-level const: an object pointed(referred) to and it's a const
// Pointers can be either top-level or low-level, because they are also objects
int main()
{
    int i = 0;
    int *const p1 = &i;  // p1 is a const pointer(top-level const) to an int.
    const int ci = 42;  // ci is a const int
    const int *p2 = &ci;  // p2 is a pointer to a const int. The const int is a low-level const
    const int *const p3 = p2;  // p3 is a const pointer to a const int. It points to ci(a low-level const) through p2.
    const int &r = ci;  // a const int reference to ci. Unlikely to pointers, references always have a low-level const.

    i = ci;  // copying ci's value to i. top-level const in ci is ignored.
    p2 = p3;  // copying ci's value through p2 and p3. p2 still points to ci. top-level in p3 is ignored.

    // low-level const is never ignored. Types should match at the low-level consts.

    // int *p = p3;  // ERROR: p3 has a low-level const(p2), but p doesn't have one.
    p2 = p3;  // p3's low-level: p2, const int; p2's low-level: ci, const int;
    p2 = &i;  // converting i to a const int and copying it
    const int &r2 = i;  // converting i to a const int and r2 refers to the converted const int.

    return 0;
}