#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Base{
    public:
    Base(){
        cout << "non-para of Parent class" << endl;
    }
    Base(int x){
        cout << "para of Parent class with value: " << x << endl;
    }
    
};

class Derived : public Base{
    public:
    Derived(){   // calling base class non-parametrized constructor
        cout << "non-para derived class" << endl;
    }
    Derived(int y) { //  calling base class non-parametrized constructor again
        cout << "para of derived class: " << y << endl;
    }
    Derived(int x, int y) : Base(x) { // calling base class parametrized constructor
        cout << "para of derived class: " << y << endl;
    }
};

int main() {
    Derived d1; 
    Derived d2(42);
    Derived d3(10, 20);
    
    
    
}