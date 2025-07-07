#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Car {  // abstract class and its function must me overriden by drived class if not then derived class also  become abstract just like java
    public:
    virtual void start()=0;   // no need to define the function here as it is overrided by derived class
    virtual void stop()=0;    // it is Pure virtual function .
                              // we cannot create the object of abstract class

};
class Audi: public Car {  
    public:
        void start(){ 
            cout<< "Audi start" <<endl;
        }
        void stop(){ 
            cout<< "Audi stop" <<endl;
        }

};
class BMW: public Car {  
    public:
        void start(){ 
            cout<< "BMW start" <<endl;
        }
        void stop(){ 
            cout<< "BMW stop" <<endl;
        }

};


int main() {

    Car *c = new Audi;
    c->start();
    c->stop();

    Car *c1 = new BMW;
    c1->start();
    c1->stop();

    // this is the example of runtime polymorphism
       
}