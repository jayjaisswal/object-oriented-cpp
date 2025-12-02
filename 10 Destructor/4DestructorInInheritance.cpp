#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Parent{
public:
    Parent(){
        cout<<"Parent Constructor called"<<endl;
    }
    ~Parent(){
        cout<<"Parent Destructor called"<<endl;
    }
};
class Child : public Parent{
public:
    Child(){
        cout<<"Child Constructor called"<<endl;
    }
    ~Child(){
        cout<<"Child Destructor called"<<endl;
    }

};

int main() {
    Child c1;
    
    
    
}

//  constructor call from top to bottom
//  destructor call from bottom to top