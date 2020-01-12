// sales data in 'add_item' file

#include <iostream>
#include <string>

struct Sales_data {  // 'struct' keyword + class_name {body}
    std::string bookNo;  // here: {class body} and a new scope begin.
    unsigned units_sold = 0;  // {class body} defines the 'members' of the class as the same way as defining variables.
    double revenue = 0.0;  // in-class initializer: default initializers for objects. bookNo-(empty) string, units_sold-unsigned, revenue-double.
};  // semi-colon needed to end a class declaration


int main()
{
    Sales_data data1, data2;

    /* Structure of the program will be...
        (1) to read into data1 and data2
        (2) to check whether data1 and data2 have the same ISBN
        (3) if so, print the sum of data1 and data2
    */

    // Reading
    /* note about string
        - a sequence of characters
        - operations: >> (read), << (write), == (compare)
    */

    double price = 0;
    std::cin >> data1.bookNo >> data1.units_sold  // dot operators: access to members
             >> price;  
    data1.revenue = data1.units_sold * price; 
    
    std::cin >> data2.bookNo >> data2.units_sold
             >> price;  
    data2.revenue = data2.units_sold * price; 

    // Printing the sum of data1 and data2
    if (data1.bookNo == data2.bookNo) {
        unsigned totlaCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;

        std::cout << data1.bookNo << " " << totlaCnt
                  << " " << totalRevenue << " ";
    if (totlaCnt != 0)
        std::cout << totalRevenue/totlaCnt << std::endl;
    else
        std::cout << "(no sales)" << std::endl;
    
    return 0;
    
    } else {
        std::cerr << "Data must refer to the same ISBN" << std:: endl;
        return -1;
    }

}