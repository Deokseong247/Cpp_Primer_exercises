#include <iostream>

// a name with the global scope
int reused = 42;

int main()
{
    int unique = 0;

    // will print "42 0"
    std::cout << reused << " " << unique << std::endl;

    // redefine 'reused' in the inner scope    
    int reused = 0;

    // will print "0 0"
    std::cout << reused << " " << unique << std::endl; 
 
    // explicitly calling 'reused' in the global scope
    // by using the scope operator(::) and the global scope has no name
    // will print "42 0"
    std::cout << ::reused << " " << unique << std::endl; 

    return 0;
}