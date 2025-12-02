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
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void Area()
    {
        cout << "Area: " << length * breadth << endl;
    }
    int perimeter(int l, int b);
};

int Rectangle::perimeter(int l, int b)
{
    cout << "Perimeter: " << 2 * (length + breadth) << endl;
}

int main()
{
    Rectangle r1(10, 5);
    r1.Area();
    r1.perimeter(10, 5);
    
}