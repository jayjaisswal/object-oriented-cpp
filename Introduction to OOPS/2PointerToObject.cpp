#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    void Area()
    {
        cout << "Area: " << length * breadth << endl;
    }
};

int main()
{
    Rectangle r1;
    Rectangle *p;
    p = &r1;        // Pointer to object
    p->length = 10; // Accessing members using pointer
    p->breadth = 5;
    // or (*p).length = 10; // Accessing members using pointer
    (*p).breadth = 5; // same thing as above
    cout << "Length: " << p->length << endl;
    cout << "Breadth: " << (*p).breadth << endl;

    // all are same
    p->Area();
    r1.Area();
    (*p).Area();


    
    // there are wo ways to create object in cpp
    // Rectangle r2;          // Static memory allocation
    // Rectangle *p2 = new Rectangle(); // Dynamic memory allocation ie. using heap memory
    // in java everything is done using heap memory
}