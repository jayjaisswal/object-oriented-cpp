#include <iostream>
using namespace std;

class Test {
public:
    int a;
    static int count;

    Test() {
        a = 10;
        count++;
    }

    static void showA(const Test& obj) {
        // Accessing non-static member using object
        cout << "a = " << obj.a << endl;
    }
};

int Test::count = 0;

int main() {
    Test t1;
    Test::showA(t1);  // passing object to access its non-static data
}
