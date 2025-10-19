#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Complex
{
    public:
    int real;
    int img;
    
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    Complex(){

    }
    Complex operator+(Complex c){ // c = c2(5,6) and real = 3 , img = 4
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;

    }
};
int main()
{
    Complex c1(3,4);
    Complex c2(5,6);
    Complex c3;
    c3 = c1 + c2; // c1.operator+(c2)
   
    
    cout<<c3.real<<" + "<<c3.img<<"i"<<endl;
}