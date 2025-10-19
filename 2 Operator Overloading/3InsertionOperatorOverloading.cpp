#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Complex{
    private:
    int real;
    int img;
    public:
    Complex(int r = 0, int i = 0){
        real = r;
        img = i;
    }
    friend ostream& operator<<(ostream& out,  Complex c);
};

ostream& operator<<(ostream& out,  Complex c){
    out<<c.real<<" + "<<c.img<<"i";
    return out;
}

int main() {
    Complex c1(3,4);
    cout<<c1<<endl;
    operator<<(cout, c1);
    
    
    
}