#include <iostream>
#include <vector>
#include <string>

using namespace std;
template<class T, class R>
int add (T x, R y){
    return x+y;
}

int main() {
    cout<<add(2, 3)<<endl;
    cout<<add(2.7, 3.7);
    
    
    
}