#include <iostream>
int main()
{
    int i = 24;
    int *p = &i;

    std::cout << "i = " << i << ", p = " << *p << std::endl;

    *p = 48;  // change the value of the pointer and to which the pointer points(i).
    
    std::cout << "i = " << i << ", p = " << *p << std::endl;

    return 0;
}