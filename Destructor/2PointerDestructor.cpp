#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Demo
{
public:
    Demo()
    {
        cout << "Constructor called" << endl;
    }

    ~Demo()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Demo *p = new Demo();
    
    delete p; // Destructor is called here (must call manually)
     
   
}

// Note that if we forget to call delete, the destructor will not be called, leading to a memory leak.
// we cannot overload the destructor like we do with constructors. Each class can have only one destructor.