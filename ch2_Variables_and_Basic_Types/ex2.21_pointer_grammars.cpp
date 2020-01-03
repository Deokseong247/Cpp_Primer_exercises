#include <iostream>
int main()
{
    int i = 0;  // initialize an int with 0
    
    // *double dp = &i;  // illegal
    int *dp = &i;

    // int *ip = i;  // illegal: pointing needs an address-of operator
    int *ip = &i;

    int *p = &i;  // valid
    
    return 0;
}