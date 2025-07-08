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

public :            // public is used so that in main() we can use it
    void fun(){     // accessing private and protected members using member function
    A a;            // in a class fun() can access private and protected members
    a.publicVar = 1;
    a.protectedVar = 2;
    a.privateVar = 3;
    cout<< "PrivateVar "<< a.privateVar<<endl;
    cout<< "protectedVar "<< a.protectedVar<<endl;
    cout<< "PublicVar "<< a.publicVar<<endl;
}
};

int main()
{
    A a;
    a.fun();

}