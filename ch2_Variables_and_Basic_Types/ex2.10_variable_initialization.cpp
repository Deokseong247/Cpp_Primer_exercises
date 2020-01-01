#include <iostream>
std::string global_str;
int global_int;

int main()
{
    int local_int;
    std::string local_str;

    std::cout << "global str: " << global_str << '\n'
              << "global int: " << global_int << '\n'
              << "local str: " << local_str << '\n'
              << "local int: " << local_int << '\n' ;

    return 0;
}