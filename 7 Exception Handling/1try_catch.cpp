#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // runtime error is exception
    int a = 10, b = 0, c;
    try
    {
        if (b == 0)
            // throw string("fgh fghj");
            // throw 'e';
            throw 0;

        c = a / b;
    }
    catch (int e)
    {
        cout << "Divided by zero "<<e;
    }
}