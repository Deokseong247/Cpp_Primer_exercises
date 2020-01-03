#include <iostream>

int main()
{
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;  //  assign 42 * 42 to *p1 and i
    std::cout << "p1 = i = " << *p1 << std::endl;
    return 0;
}