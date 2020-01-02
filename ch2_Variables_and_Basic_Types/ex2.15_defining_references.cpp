#include <iostream>
int main()
{
    int ival = 1.01;
    // int &rvall = 1.01;  invalid: a reference needs to be initialized
    int &rval2 = ival;  // initialized with ival's value
    // int &rval3;  inizialization needed

    return 0;
}