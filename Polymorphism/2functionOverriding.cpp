#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Parent {
    public:
        void display(){
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
    Parent p;
    p.display();

    Child c;
    c.display();   // override the parent display function 
    
}