#include <iostream>
int main()
{
    // define an unchangeable variable
    const int bufSize = 512;
    // bufSize = 1024;  // ERROR for trying to change const
    // const int k;  // ERROR for not initializing.
    // Other operations, except changing the value, work in the same ways.

    // initializing a const with another object. initializing an object with a const
    int i = 42;
    const int ci = i;  // copying i's value and initialize ci
    int j = ci;  // copying ci's value and initialize j

    /*
    note: const works at a file-wise level.
    'extern' keyword makes consts accessible from othre files.
    */    

    return 0;
}