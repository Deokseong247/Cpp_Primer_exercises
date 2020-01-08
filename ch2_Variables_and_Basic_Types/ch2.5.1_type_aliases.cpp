#include <iostream>
#include "Sales_item.h"

int main()
{
    /* 2.5.1. Type Aliases
        1) simplify type definitions
        2) emphasize the purpose for which a type is used
    */

    // Defining a type alias
    // method 1: as a base type of a declaration ('typedef' keyword)
    typedef double wages;  // Now, wages is a synonym for double
    typedef wages base, *p;  // base is a synonym for wages, and thus for double, while p for double*

    // method 2: alias declaration ('using' keyword)
    using SI = Sales_item;  // SI is a synonym for Sales_item

    // Utilizing the type aliases
    wages hourly, weekly;  // same: double hourly, weekly
    SI item;  // same: Sales_item item

    
    // Type Aliases with pointers and const
    typedef char *pstring;  // pstring is a synonym for char*, or pointers to char
    const pstring cstr = 0;  // const char cstr = 0;  // cstr is a constant pointer to char
    const pstring *ps;  // const char *ps;  // ps points a constant pointer to char
   
    return 0;
}