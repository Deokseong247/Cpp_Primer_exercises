#include <iostream>
#include <typeinfo>

int main()
{
    const int i = 42;
    auto j = i;  // j in an int
    const auto k = i;  // k in a const int
    auto *p = &i;  // p points to an int
    const auto j2 = i, &k2 = i;  // k2 is a const refernce to int

    // std::cout << "i, j, k, p, j2, k2: " << i << j << k << *p << j2 << k2 << std::endl;

    std::cout << "i: " << i << ", " << typeid(i).name() << "\n";
    std::cout << "j: " << j << ", " << typeid(j).name() << "\n";
    std::cout << "k: " << k << ", " << typeid(k).name() << "\n";
    std::cout << "p: " << p << ", " << typeid(p).name() << "\n";
    std::cout << "j2: " << j2 << ", " << typeid(j2).name() << "\n";
    std::cout << "k2: " << k2 << ", " << typeid(k2).name() << "\n";

    return 0;
}