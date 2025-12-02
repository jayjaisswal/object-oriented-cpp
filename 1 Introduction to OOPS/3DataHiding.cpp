// Data hiding is a fundamental concept in object-oriented programming (OOP) that restricts direct access to an object's data members. 
// This is typically achieved by declaring data members as private and providing public getter and setter methods to access and modify those members. 
// This encapsulation helps maintain the integrity of the data and prevents unintended interference from outside the class.

#include <iostream>
using namespace std;

class Rectangle
{
private: 
    int length;
    int breadth;

public:
    void setLength(int l) // also called mutator method
    {
        if (l >= 0) // length cannot be negative
        {
            length = l;
        }
        else
        {
            length = 0;
        }
    }
    void setBreadth(int b)
    {
        if (b >= 0) // breadth cannot be negative
        {
            breadth = b;
        }
        else
        {
            breadth = 0;
        }
    }

    int getLength() // also called accessor method
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
};

int main()
{
    Rectangle r1;
    r1.setLength(10);
    r1.setBreadth(5);
    cout << "Length: " << r1.getLength() << endl;
    cout << "Breadth: " << r1.getBreadth() << endl;
}

// main purpose of data hiding is to protect the internal state of an object from unintended or harmful modifications,
// ensuring that the object remains in a valid and consistent state throughout its lifecycle.
// By controlling access to data members through public methods, we can enforce validation rules and maintain the integrity of the object's state.
// In this example, the `length` and `breadth` members of the `Rectangle` class are private, meaning they cannot be accessed directly from outside the class.
// Instead, we provide public setter methods (`setLength` and `setBreadth`) that include validation logic to ensure that the values being set are non-negative.
// The getter methods (`getLength` and `getBreadth`) allow controlled access to the values of these private members.
// This way, we can prevent invalid states (like negative dimensions) and ensure that the `Rectangle` object remains valid.
