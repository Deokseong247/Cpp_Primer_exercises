#include <iostream>

int main()
{
    const int i = 42;
    auto j = i;
    const auto k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;

    std::cout << "i, j, k, p, j2, k2: " << i << j << k << *p << j2 << k2 << std::endl;

    return 0;
}