#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Demo{
    public:
    int x =10;
    int y =20;
    void display() const {
            //x++; Error: cannot modify a member variable in a const member function
            //y = 30; Error: cannot modify a member variable in a const member function
        cout<<x<<" "<<y;
     }

};

int main() {
    Demo obj;
    obj.display();
    
    
    
}