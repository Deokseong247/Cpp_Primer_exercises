#include <iostream>
#include "Sales_item.h"

int main(){
    /*
    1) reads several transactions for the same ISBN
    2) sum of all the transactions that were read
    */

   Sales_item sum;
   Sales_item item;

   std::cout << "Transactions with an ISBN:" << std::endl ;

   while (std::cin >> item) {
       std::cout << std::endl << item << std::endl;
       sum += item;
       }

   std::cout << "Sum of the ISBN is: " << sum << std::endl;
   return 0;

}