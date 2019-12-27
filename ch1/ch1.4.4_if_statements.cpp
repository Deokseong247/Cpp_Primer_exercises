#include <iostream>

int main()
{
    int currVal = 0, val = 0;

    if (std::cin >> currVal) {  // a new 'currVal'
        int cnt = 1;

        while (std::cin >> val)  // input into 'val'
        {
            if (val == currVal)  // input matches 'currVal'
                ++cnt;  // one more cnt
            else {  // input and 'currVal' deosn't match
                std::cout << currVal << " occurs " 
                          << cnt << " times" << std::endl;
                currVal = val;  // reassign currVal with new input
                cnt = 1;  // reset the count
            }
        }  // while-statements end if invalid input or end-of-file
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    }
    return 0;
}