#include <iostream>
#include <vector>
#include <string>

using namespace std;

class MyException : exception
{
};

int main()
{

    int a = 10, b = 0, c;
    try
    {
        if (b == 0)
            // throw string("fgh fghj"); we can throw string , character, double, int etc.
            // throw 'e';
            throw MyException();

        c = a / b;
    }
    catch (MyException e)
    {
        cout << "Divided by zero ";
    }
}