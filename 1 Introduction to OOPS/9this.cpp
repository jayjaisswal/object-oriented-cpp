#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int length, int breadth)
    {
        this->length = length;  // this->length → r1.length
        this->breadth = breadth; // this->breadth → r1.breadth
        // here this is a pointer which points to the current object
        // this is used to resolve the naming conflict between member variables and parameters
       
    }

    void Area()
    {
        cout << "Area: " << length * breadth << endl;
    }
    
};

int main() {
    Rectangle r1(10, 5);
    r1.Area();
    
    
    
    
}