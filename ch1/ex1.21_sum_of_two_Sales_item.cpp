#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sum;
    Sales_item item1, item2;
    std::cout << "Enter two Sales_item objects:" << std::endl;
    std::cin >> item1 >> item2;
    sum = item1 + item2;
    
    std::cout << std::endl << "The sum of items is: " << sum << std::endl;
    return 0;
}