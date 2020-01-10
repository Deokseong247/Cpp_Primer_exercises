#include <iostream>
#include "Sales_item.h"
// 'auto' type specifier: let the compiler figure out the type. deduce the type from initializer. -> 

int main()
{
    Sales_item val1;
    Sales_item val2;

    // an auto-specified variable needs an initializer.
    auto item = val1 + val2;  // initialize item to the result of val1 + val2 -> a Sales_item object


    // defining multiple variables with auto
    auto i = 0, *p = &i;  // p is a pointer to the type of i
    // auto sz = 0, pi = 3.14;  // ERROR: type inconsistency

    /* Compound types, const, and auto
        Q. Which type does the compiler infer for auto?
        A. not always same as the initializer's, but adjustment of the type to conform to normal init rules

            (1) A reference refers to an object and actually uses it -> auto type deduction depends on the type of the referred object
            (2) 'auto' ignores the top-level consts. Low-level consts are kept.
            (3)

    */

    // reference
    int ii, &r = ii;
    auto a = r;  // a is an int because r refers to ii declared as int

    // 
    const int ci = ii, &cr = ci;
    auto b = ci;  // b is an int
    auto c = cr;  // c is an int, ignoring const
    auto d = &ii;  // d is an int*
    auto e = &ci;  // e is const int* (& of a const object is low-level const)
    const auto f = ci;  // f is const int. A top-level const needs to be explicitly declared

    // a reference to an auto-deduced type doesn't ignore its top-level const.
    auto &g = ci;  // a const& bound to ci
    // auto &h = 42;  // ERROR: cannot bind a plain reference to a literal
    const auto &j = 42;  // can bind a const reference to a literal

    // *note* a reference or pointer is "part of a particular declarator", not of the base type for the declaration
    // Type consistency with compound types
    auto k = ci, &l = ii;
    auto &m = ci, *pp = &ci;  // 
    // auto &n = ii, *p2 = &ci;  // ERROR: &n - referring an int; p2 - pointing to a const int

    return 0;

}