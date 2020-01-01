#include <iostream>

int i = 42;

int main()
{
    int i = 100;  // 'i' is redefined in main()'s scope and has value of 100
    int j = i;  // declare j and initialize it with i's value, 100
    std::cout << j << std::endl;
    return 0;
}