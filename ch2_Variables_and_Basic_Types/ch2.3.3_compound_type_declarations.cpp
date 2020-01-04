#include <iostream>
int main()
{
    // A single declaration defining different types
    int i = 1024, *p = &i, &r = i;  // int: a base type, others: declarators
    // int* p; // legal for int* being a type, but the base type is still int. * modifies the type of p as an int pointer but not any other objects.

    int* p1, p2;  // p1 is a pointer, p2 is an int
    // int *p1, *p2;  // Both p1 and p2 are int pointers
    // int *p1; int *p2;  // equivalent to the upper declaration
    
    // Pointers pointing another pointer
    int ival = 1024;
    int *pi = &ival;  // a pointer to ival
    int **ppi = &pi;  // ppi points a pointer pointing an int

    std::cout << "The value of ival\n"
              << "Direct: " << ival << "\n"
              << "Indirect: " << *pi << "\n"
              << "Indirect twice: " << **ppi << std::endl;
    
    // References to pointers
    int *pp;  // a pointer to int
    int *&rr = pp;  // a reference to pp
        /* 
        *&rr anatomy: (1) rr: the variable's name
                      (2) &: The closest symbol to the variable name. The type of rr follows the symbol. -> rr is a reference
                      (3) *: The rest of declarator determines the type to which rr referring. -> rr referring a pointer '*'
                      (4) int: The pointer rr referring to points an int. 
                      (5) Keep in mind that reading from right to left helps understanding complicated declaration of pointers or references.
        */

    rr = &i;  //  r refers to pp. assigning &i to r -> pp point to i
    *rr = 0;  // dereferencing r = i or the object pp pointing to. assigning 0 to *r -> assigning 0 to i

    
    return 0;
}