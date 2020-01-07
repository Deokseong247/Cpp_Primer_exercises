#include <iostream>

int main()
{
    // int null = 0, *p = null;  //  ERROR: a pointer cannot be initialized with an int
    int null = 0, *p = &null;  // address-of operator needed
    constexpr int null2 = 0, *p2 = nullptr; 

    return 0;
}