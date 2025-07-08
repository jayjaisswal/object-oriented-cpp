#include <iostream>
#include <vector>
#include <string>

using namespace std;

class A
{
public:
    int publicVar;

protected:
    int protectedVar;

private:
    int privateVar;        

friend class B;
  
};
// accessing data members from outside the class in another class
class B {  
    public:   
    A a;   
    // a.publicVar;  can access like this        
    void fun(){
        a.publicVar = 1; // access via member fun not directly a.publicVar
        a.protectedVar = 2;  // not accessible  we need to declare this class as friend inside class A then only we can access
        a.privateVar = 3;    // not accessible
        cout<< "PrivateVar "<< a.privateVar<<endl;   // not accessible
        cout<< "protectedVar "<< a.protectedVar<<endl;   // not accessible
        cout<< "PublicVar "<< a.publicVar<<endl; // access
    }
};

int main()
{
    B b;
    b.fun();
    
   
}