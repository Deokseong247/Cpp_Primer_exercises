#include <iostream>
// A const expression: an expression whose value cannot change and can be evaluated at compile time.
// example: a literal, or a const object initialized from a const expression, ...

int main()
{
// types and the initializers determine whether an object(or expression) is a const expression or not
const int max_files = 20;  // max_files is a const expression
const int limit = max_files + 1;  //  limit is a const expression, initialized from another const expreesion 
int staff_size = 27;  // staff_size is a plain int and not a const expression
// const int sz = get_size();  // sz is a const object, but its initializer is not known until run time. -> not a const expression.

// constexpr Variables: types are implicitly const and be initialized by constant expressions
constexpr int mf = 20;  // 20 is a const expression and mf is a valid constexpr variable
constexpr int lim = mf + 1;  // mf + 1 is a const expression as well.
// constexpr int sz = size();  //  sz is a constexpr only if size() is 'a constexpr function'

/*
    notes: (1) constexpr variables only have "literal types(arithmetic, reference, pointer, ...ch7.5.6 and ch19.3)
           (2) constexpr references and pointers have a limited initializer.
               - constexpr pointer: nullptr literal, or the literal 0
               - an object at a fixed address. The object may either a global variable or callable across functions 
*/

// Pointers and constexpr 
/* "When we define a pointer in a constexpr,
    the constexpr specifier applies to the pointer, 
    not the type to which the pointer points."
*/
const int *p = nullptr;  // p is a pointer to const int
constexpr int *q = nullptr;  // q is a const pointer to int.  int const* q = nullptr; same??

/* outside of any function 
int j = 0;  // j is a plain int
constexpr int i = 42;  // i is a const int

constexpr const int *p = &i;  // p is a const pointer to const int
constexpr int *p1 = &j;  // p1 is a const pointer to int
*/


return 0;
}