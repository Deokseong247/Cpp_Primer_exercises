#include <string>  // a class header may include another header or more

struct Sales_data {  // 'struct' keyword + class_name {body}
    std::string bookNo;  // here: {class body} and a new scope begin.
    unsigned units_sold = 0;  // {class body} defines the 'members' of the class as the same way as defining variables.
    double revenue = 0.0;  // in-class initializer: default initializers for objects. bookNo-(empty) string, units_sold-unsigned, revenue-double.
};  // semi-colon needed to end a class declaration