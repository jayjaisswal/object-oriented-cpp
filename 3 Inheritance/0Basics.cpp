#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Base{
    public:
    void show(){
        cout  << "Base Class" << endl;
    }
};

class Derived : public Base{};

int main() {
    Derived d;
    d.show(); 
    
    
    
    
}