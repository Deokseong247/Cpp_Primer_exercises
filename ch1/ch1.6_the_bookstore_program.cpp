#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;  // summary variable
    
    if (std::cin >> total) {
        Sales_item trans;  // a single transaction object
        
        while (std::cin >> trans) {  // while statements for multiple trans objects

            if (total.isbn() == trans.isbn())  // if (stacked ISBN matches current input ISBN)
                total += trans;  // update summary
            else {  // otherwise
                std::cout << total << std::endl;  // print out the summary (since new ISBN appears)
                total = trans;  // replace the old ISBN with the new one
            }

        }  // end of while statements
        std::cout << total << std::endl;  // ouput for the last ISBN
    
    } else {  // non-Sales_item object input
        std::cerr << "No data?!" << std::endl;  // show an error
        return -1;  // and failure code
    }
    
    return 0;
}