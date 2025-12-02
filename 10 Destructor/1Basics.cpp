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
    Demo d1;// Constructor runs here
            // main() ends → d1 goes out of scope → Destructor runs here

    cout << "End of main" << endl;
   
}

// output
// Constructor called
// End of main
// Destructor called