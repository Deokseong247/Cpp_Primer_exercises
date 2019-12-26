#include <iostream>

int main()  // for statement version of sum of 1~10
{
    int sum = 0;

    for (int val = 1; val <= 10; ++val)  // init; condition; expression
        sum += val;
    
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;
    
    return 0;
}