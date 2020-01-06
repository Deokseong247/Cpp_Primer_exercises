#include <iostream>
int main()
{
    int i; // *const cp; -> a const needs initialization
    int *p1; // *const p2;  // int *const p2; -> same with the above
    // const int ic, &r = ic;  // consts need initialization
    // const int *const p3;  // a const pointer to a const int, but which const int?
    const int *p;  // a null pointer to a const int
    return 0;
}