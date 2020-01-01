#include <iostream>
int main() 
{    
    int i = 100, sum = 0;

    for (int i = 0; i != 10; ++ i)  // i is redefined and init with 0
        sum += i;  // loop until i == 10; or i != 10 becomes false
    
    std::cout << i << " "           // this 'i' is called from the global scope, not one from the for-statement's scope
              << sum << std::endl;  // 'sum' has been accumulated through 0 to 9, 45 in total
    return 0;
}
