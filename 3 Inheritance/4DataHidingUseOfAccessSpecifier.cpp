#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
    void setLength(int l){  // validation
        if(l<=0) length = 1;  
        
        length = l;
    }
    void setBreadth(int b){  // validation
        if(b<=0) breadth = 1;  
        
        breadth = b;
    }
    int getArea(){
        return length*breadth;
    }


        
};


int main() {
    Rectangle c;
    
    c.setBreadth(6);
    c.setLength(5);
    cout<<c.getArea();

  
    
    
    
}