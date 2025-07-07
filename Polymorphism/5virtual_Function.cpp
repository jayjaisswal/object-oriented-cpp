#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Parent {
    public:
    virtual void display(){                          // now it behave like real world
            cout<< "Parent class" <<endl;
        }

};
class Child: public Parent {  // inherit Parent class member function
    public:
        void display(){
            cout<< "Child class" <<endl;
        }

};

int main() {
    
    Parent *p = new Child();
    p->display(); // child call as parent p pointing to the child
    // So to make the things work just like in the real
    // world you have to declare virtual functions.
   
}