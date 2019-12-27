#include <iostream>
#include "Sales_item.h"

int main() 
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;

    if (item1.isbn() == item2.isbn()) {
        // item1 and item2 are transactions of the same book
        std::cout << item1 + item2 << std::endl;
        return 0;
    } else {
        std::cerr << "ISBN's don't match." << std::endl;
        return -1;  // execution failure
    }
}