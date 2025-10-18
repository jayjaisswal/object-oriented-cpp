#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Base{
    public:
    void fun1(){
        cout<<"Parent class fun1 called"<<endl;
    }
};

class Derived:public Base{
    public:
    void fun2(){
        cout<<"Child class fun2 called"<<endl;
    }
};

int main() {
    Derived d;
    Base *b; // base class pointer
    b = &d;    // pointing to derived class object

    b->fun1(); // allowed, as fun1 is member of Parent class
    // p->fun2(); // not allowed, as fun2 is not member of Parent class

    // another way
    Base* b1;
    b1 = new Derived(); // base class pointer pointing to derived class object
    b1->fun1(); // allowed, as fun1 is member of Parent class
    // b->fun2(); // not allowed, as fun2 is not member of Parent class

    // Base obj;
    // Derived *d1;
    // d1 = &obj; // not allowed, base class object cannot be pointed by derived class pointer

    
    
    
}