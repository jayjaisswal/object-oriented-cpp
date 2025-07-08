#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Test{
    public:
     int a;
     static int count; //Shared across all objects of the class.

     Test(){
        a = 10;
        count++;
     }

     static int getCount(){
        // a++;              -> not static cannot accessed in static member function
        return count;
     }

};

int Test::count = 0; // Initialization of the static variable.

int main() {



    cout<<Test::count<<endl;  // we can access static member function using class name as well as object name
    // Static functions are not "shared copies" like static variables. But they belong to the class, not the object.



    Test t1, t2;

    cout<<Test::getCount()<<endl;

    cout<<t1.getCount()<<endl;;
    cout<<t2.getCount()<<endl;
    

    


    
    
    
}