#include <iostream>
#include "Sales_item.h"

int main()
{
    /* 
    1) reads several transactions
    2) count how many transactions for each ISBN
    */

   Sales_item item, currISBN;
   int cnt = 1;

   std::cout << "Enter transactions, with ISBN subsequently grouped:" << std::endl;

   while (std::cin >> item) {
       if (currISBN.isbn() == "") {  // the first transaction
           currISBN = item;
       } else {  // other transactions
           if (item.isbn() == currISBN.isbn()) {  // ISBN matches to the previous one
           cnt ++;
           } else {  // another ISBN appears
           std::cout << "ISBN '" << currISBN.isbn() << "'s count is "  // print out the previous ISBN's count
                     << cnt << std::endl;
           currISBN = item;  // reassign the current item to currISBN
           cnt = 1;  // reset count
           }
       }
   }

   // the last ISBN
   std::cout << "ISBN '" << currISBN.isbn() << "'s count is "  // print out the previous ISBN's count
                     << cnt << std::endl;
   return 0;
}