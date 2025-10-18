#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Parent{
    private:
        int x=5;
    protected:
        int y=4;
    public:
        int z=3;
        void display(){ // accessing all in same class
            cout<<"x :"<<x<<"y :"<<y<<"z :"<<z<<endl;
        }
};
class Child : protected Parent{ // all members of base class become protected members of derived class
    public:
    void show(){
        // cout<<x; //private member are inaccessible in Derived class
        cout<<y<<endl; //Protected member are accessible in Derived class
        cout<<z<<endl; //public member are accessible in Derived class
    }

};

int main() {
    Child c;
    c.show();

    
    // c.z = 11; //public member also inaccessible via derives class object because of Protected inheritance
    // accessible via member function of derived class only
    
    
    
}