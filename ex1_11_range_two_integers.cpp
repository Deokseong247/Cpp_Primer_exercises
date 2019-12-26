#include <iostream>

int main()
{
    int v1 = 0, v2 = 0, from = 0, to = 0;
    std::cout << "Enter two integers:";
    std::cin >> v1 >> v2;

    if (v1 <= v2) {
        from = v1, to = v2;
    }
    else {
        from = v2, to = v1;
    }

    while (from <= to) 
    {
        std::cout << from << std::endl;
        ++from;
    }

    return 0;
}