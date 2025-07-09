#include <iostream>
#include <vector>
#include <string>

using namespace std;

int division(int a, int b) throw(int)
{
    if (b == 0)
        throw 1;
    return a / b;
}

int main()
{

    int a = 10, b = 0, c;
    try
    {
        c = division(4, 0);
    }
    catch (int e)
    {
        cout << "Divided by zero ";
    }
}