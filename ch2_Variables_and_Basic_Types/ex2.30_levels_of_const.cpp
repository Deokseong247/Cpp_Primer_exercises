#include <iostream>
int main()
{
    int i = 42;
    const int v2 = 0;  // v2 has a top-level const
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;  //  both p1 and r1 have a low-level const
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;
    // p2 has a low-level const
    // p3 has both top- and low-level consts
    // r2 has a low-level const

    r1 = v2; 
    // p1 = p2;  // cannot assign a pointer to const int, to another pointer to int
    p2 = p1;
    // p1 = p3;  // same as p1 = p2
    p2 = p3;  // p3's low-level is a const int and so is p2's
    return 0;
}