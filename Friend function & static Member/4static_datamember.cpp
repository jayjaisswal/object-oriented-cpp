#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Test{
    public:
     int a;
     static int count;  //static member used for share memory

     Test(){
        a = 10;
        count++;
     }

};

int Test::count = 0;

int main() {



    cout<<Test::count<<endl;  // we can access static data member using class name as well as object name
    // static has only one instance or copy that is shared in different object

    Test t1, t2; // t1 and t2 has separate copy of vaiables

    cout<<t1.count<<endl; 
    cout<<t2.count<<endl;

    t1.count = 20;

    cout<<t1.count<<endl; 
    cout<<t2.count<<endl;

    t1.a = 18;
    cout<<t1.a<<endl;
    cout<<t2.a<<endl;


    
    
    
}