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
    // inherit Parent class member function

};

int main() {
    Parent p;
    p.display();

    Child c;
    c.display();  
    
}