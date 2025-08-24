#include <iostream>
#include <vector>
#include <string>

using namespace std;
void fun(const int &a, int &b) {
    //a++; Error: cannot modify a const variable
    b++;
}

int main() {
    int x = 10;
    int y = 20;
    fun(x, y);
    cout << x << " " << y << endl; // 10 30
    
    
    
}