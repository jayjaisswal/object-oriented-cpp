#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T>
T maximum(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    cout<<maximum(4,7)<<endl;
    cout<<maximum(6.9 ,7.0);  // both arguments must be of the same type for your template T

}