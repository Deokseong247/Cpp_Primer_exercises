#include <iostream>
int main()
{
    int i, &ri = i;
    i = 5; ri = 10;  // int i assigned with 5 and then 10 through the refernce ri bound to it.
    std::cout << i << " " << ri << std::endl;  // this will print [10 10].
}