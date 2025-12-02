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
    
    Parent *p = new Child();
    p->display(); // parent display call 
    // concept
    // if we pointing towards the donkey and think it will be a horse doesn't mean it become horse
    // it will always be a donkey
    // but in cpp that donkey become horse that is ambiguity i.e., in real world it is not possible but in cpp it is possible
    // that is why we use virtual keyword to avoid ambiguity and let it work like real world
    // otherwise its depend on programmer how and what he want to do
    // so here p is pointing towards the child but it calls the parent not child
    // so to avoid this we use virtual keyword

    // So to make the things work just like in the real
    // world you have to declare virtual functions.
   
}