#include <iostream>
#include "Sales_item.h"

/*
A note on C++ class
type name = class name
defining a variable of a class type -> an object of the class

Functions
- isbn()
- >>, << operations
- Assignment: another object = a Sales_item object
- addition: Sales_item_1 + Sales_item_2
- compound: Sales_item_1 += Sales_item_2

*/

int main()
{
    Sales_item item;
    while (std::cin >> item)
        std::cout << item << std::endl;
    return 0;
}