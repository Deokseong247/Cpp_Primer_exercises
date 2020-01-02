#include <iostream>
int main()
{
    int i = 0, &r1 = i; double d = 0, &r2 = d;

    r2 = 3.14159;  // valid, 3.14159 assigned to the double
    r2 = r1;  // valid, r2 assigned with 0 as a float
    i = r2;  //  valid, assigning a float 0 to int and type conversion will happen
    r1 = d;  //  valid, same with the former line

    std::cout << "i, r1, d, r2: " << i << std::endl
                                  << r1 << std::endl
                                  << d << std::endl
                                  << r2 << std::endl;

    return 0;
}