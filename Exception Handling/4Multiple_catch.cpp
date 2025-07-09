#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    try
    {
        // throw 1;
        // throw 1.7;
        // throw 'g';
        throw string("hello");
    }
    catch (int e)
    {
        cout << "integer catch " << e;
    }
    catch (double e)
    {
        cout << "double catch " << e;
    }
    catch (char e)
    {
        cout << "char catch " << e;
    }
    // for any types of error
    catch (...)
    { // must be at last
        cout << "Any error";
    }
}