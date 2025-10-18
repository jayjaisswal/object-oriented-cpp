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
class Child : public Parent{
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

    // c.x = 9; private inaccessible from obj
    // c.y = 10; protected inaccessible from obj
    c.z = 11; //public accessible
    
    
    
}