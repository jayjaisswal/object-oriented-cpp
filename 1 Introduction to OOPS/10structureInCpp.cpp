#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Demo{
    int a;
    int b;
    void show(){
        cout << "a: " << a << " b: " << b << endl;
    }
    

};

int main() {
    Demo d1 ;
    d1.a = 10;
    d1.b = 20;
    d1.show();
    
    
    
}

// struct is same as class in cpp
// only difference is that in struct members are public by default whereas in class members are private by default
// so struct is generally used for data structures where we want to make all members public
// and class is used for data hiding and encapsulation where we want to make members private and
// provide public methods to access them
// also struct can have methods and constructors like class
// struct have also access specifiers like class

