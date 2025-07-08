#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Outer{
    public:
        int x = 10;
        static int y; // static member cannot initialize here
        void fun(){  // using inner obj we can access all its attributes in outer class 
            i.innerFun();
            cout<<i.a<<endl;
            cout<<i.b<<endl;

        }
        class Inner{
            public:
            static int b  ;
            int a = 10;
            void innerFun(){
                cout<<y<<endl; // can access static using member function not directly
             // cout<<x; cannot access non static variable of outer class 
            }
        };
        Inner i; // after definition we can create inner class object not before
        // using inner obj we can access all its attributes in outer class 

};

int Outer::y = 12; 
int Outer::Inner::b = 50; // inner static var

int main() {
    // we can also create the object of inner class outside the outer class like this
    Outer::Inner i;
    cout<<"inner class fun"<<endl;
    i.innerFun();
    cout<<"Outer class fun"<<endl;
    Outer o;
    o.fun();
    cout<<i.b;

    
    
    // NOTE: Static Function CANNOT access non-static variables 
    // but static data members be accessed by any function
    
}