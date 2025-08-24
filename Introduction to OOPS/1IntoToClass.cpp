#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Rectangle{
    public:
        int length;
        int breadth;

        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }

        void Area(){
            cout << "Area: " << length * breadth << endl;
        }


};

int main() {
    Rectangle r1(10, 5), r2(20, 10);
    r1.Area();
    r2.Area();
    
    
    
}