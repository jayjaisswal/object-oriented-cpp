#include <iostream>
using namespace std;

// also we can tellits constructor overloading

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        // default constructor
        Rectangle(){
            length = 2;
            breadth = 4;
        }
        // parameterized constructor
        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }
        // copy constructor
        Rectangle(Rectangle &r){
            length = r.length;
            breadth = r.breadth;
        }

        // Constructor with default arguments
            // Rectangle(int l = 2, int b = 4) {
            //     length = l;
            //     breadth = b;
            // }


        void Area(){
            cout << "Area: " << length * breadth << endl;
        }


};

int main() {
    Rectangle r1; // default constructor
    Rectangle r2(10, 5); // parameterized constructor
    Rectangle r3(r2); // copy constructor
    // or Rectangle r3 = r2; // copy constructor
    r1.Area();
    r2.Area();
    r3.Area();
    
    
    
}