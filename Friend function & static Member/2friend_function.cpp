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
    
  friend void  fun();
};
// accessing data members from outside the class

void fun(){     
    A a;            
    a.publicVar = 1;  // access
    a.protectedVar = 2;  // not accessible  we need to declare this function as friend inside class then only we can access
    a.privateVar = 3;    // not accessible
    cout<< "PrivateVar "<< a.privateVar<<endl;   // not accessible
    cout<< "protectedVar "<< a.protectedVar<<endl;   // not accessible
    cout<< "PublicVar "<< a.publicVar<<endl; // access
}

int main()
{
    
    fun(); // this fun is outside the class so we are calling without obj
    // fun is not member function of class A , it is just friend who is allwed to access private , protected data members of class A
    // fun() is normal function which is just accessing the data members 

}