#include <iostream>
using namespace std;

int main() {
    try {
        cout << "Outer try block\n";
        try {
            throw 10;  
        } catch (int x) {
            cout << "Caught in inner catch: " << x << endl;
            throw;  // rethrow to outer catch
        }
    } catch (...) {
        cout << "Caught in outer catch\n";
    }

    return 0;
}
