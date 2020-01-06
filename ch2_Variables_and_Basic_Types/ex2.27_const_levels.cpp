#include <iostream>

// top-level const: a pointer is a const
// low-level const: a pointer points to a const object

int main()
{
    int i2 = 0;
    int i = -1; //  &r = 0; -> ERROR: a reference needs to refer anything
    int *const p2 = &i2;  // p2 is a top-level const based on int type
    const int ci = -1, &r = 0;  // const int &r -> ???
    const int *const p3 = &i2;  // p3 is a const pointer to a const int
    const int *p1 = &i2;  // p1 is a pointer to a const int

    // const int &const r2;  // ERROR: r2 is a const reference and requires to be initialized
    const int i3 = i, &r3 = i;  // a const int and a const reference
    return 0;
}