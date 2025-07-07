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
class Child: public Parent {  
    public:
        void display(int x){
            cout<< "Child class" <<endl;
        }

};

int main() {

    Child c;
    // c.display();           // error why? ->Even though Child inherits from Parent, 
                            // function hiding occurs when a function with the same name 
                            //  but different parameters is declared in the derived class.
    c.Parent::display();    // this is not overriding
    
    
}