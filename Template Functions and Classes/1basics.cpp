#include <iostream>
#include <vector>
#include <string>

using namespace std;
template <class T, class R>
auto add(T x, R y) // note datatype
{
    return x + y;
}

int main()
{
    cout << add(2, 3) << endl;
    cout << add(2.7, 3.77);
}