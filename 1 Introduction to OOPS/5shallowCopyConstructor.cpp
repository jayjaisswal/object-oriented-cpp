#include <iostream>
using namespace std;

class Shallow {
    int* arr;
    int size;

public:
    Shallow(int s) {
        size = s;
        arr = new int[size];
        for (int i = 0; i < size; i++) arr[i] = i+1;
    }

    // Shallow copy constructor
    Shallow(Shallow& a) {
        arr = a.arr;   // just copying address (shallow copy) don't have its own copy of arr
        size = a.size;
    }

    void show() {
        for (int i = 0; i < size; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Shallow obj1(5);
    Shallow obj2 = obj1;  // shallow copy
    // or
    // Shallow obj2(obj1); // shallow copy

    obj1.show();
    obj2.show();

    obj2.show(); // both print the same because both point to same array
}



// The pointer (arr) of the new object points to the same address as the original.

// So, both objects share the same arr in memory.

// That means the new object doesn’t have its own separate copy of the values.

// this is the problem with shallow copy constructor when we have pointer in our class