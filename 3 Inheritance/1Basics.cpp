#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Base{
    public:
    int x;
    void show(){
        cout  << x << endl;
    }
};

class Derived : public Base{
    public:
    int y;
    void display(){
        cout << x << " " << y << endl;
    }
};

int main() {
    Derived d;// child class object
    d.x = 10; // inherited from Base
    d.y = 20; // member of Derived
    d.show(); // method from Base
    d.display(); // method from Derived
    
    
    
}