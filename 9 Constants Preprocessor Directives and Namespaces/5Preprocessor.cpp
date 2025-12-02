//  preprocessor directives also called macros
//  they are defined by #define directive
//  they are replaced by the preprocessor before compilation
//  they do not consume memory
#include <iostream>
using namespace std;

#define PI 3.14
#define PI 3.14159 // macro without argument
#define AREA(r) (PI * (r) * (r)) // macro with argument
#ifndef PI
      #define  PI 3
#endif

#define c cout
#define msg(x) #x // converts x to string
#define ii int


int main() {
    int r = 5;
    cout << "Area of circle with radius " << r << AREA(r) << endl;
    cout << "Value of PI is " << PI << endl;
    cout  << PI << endl; // PI is already defined, so this will not redefine it
    c << "hii" << endl;
    cout << msg(Hello World) << endl; // prints "Hello World"
    ii x = 10; // integer is replaced by integer
    cout << x << endl;
    
    
    
}

