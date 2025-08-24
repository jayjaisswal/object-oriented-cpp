// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;
// class Parent{
// public:
//     Parent(){
//         cout<<"Parent Constructor called"<<endl;
//     }
//     ~Parent(){
//         cout<<"Parent Destructor called"<<endl;
//     }
// };
// class Child : public Parent{
// public:
//     Child(){
//         cout<<"Child Constructor called"<<endl;
//     }
//     ~Child(){
//         cout<<"Child Destructor called"<<endl;
//     }

// };

// int main() {
//     Parent *p = new Child(); // pointer of parent class pointing to child class object
//     delete p; 
//     // without virtual destructor in parent class, only parent destructor will be called
//     // with virtual destructor in parent class, both child and parent destructor will be called
//     // run the code written below to see the difference
//     // jiska pointer hoga, uska hi destructor call hoga
    
    
// }

#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Parent{
public:
    Parent(){
        cout<<"Parent Constructor called"<<endl;
    }
    virtual ~Parent(){
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
    Parent *p = new Child(); // pointer of parent class pointing to child class object
    delete p; 
    
    
}



