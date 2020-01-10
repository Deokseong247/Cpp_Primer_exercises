#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;  // a is an int because r refers to ii declared as int

    // 
    const int ci = i, &cr = ci;
    auto b = ci;  // b is an int
    auto c = cr;  // c is an int, ignoring const
    auto d = &i;  // d is an int*
    auto e = &ci;  // e is const int* (& of a const object is low-level const)
    const auto f = ci;  // f is const int. A top-level const needs to be explicitly declared

    // a reference to an auto-deduced type doesn't ignore its top-level const.
    auto &g = ci;  // a const& bound to ci

    std::cout << "i, ci, cr, a, b, c, d, e, f, g: \n"
              << i << " " << ci << " " << cr << " " << a << " " << b << " " << c << " " << *d << " " << *e << " " << f << " " << g << std::endl;


    a = 42;
    b = 42;
    c = 42;

    std::cout << "i, ci, cr, a, b, c, d, e, f, g: \n"
              << i << " " << ci << " " << cr << " " << a << " " << b << " " << c << " " << *d << " " << *e << " " << f << " " << g << std::endl;


    return 0;
}