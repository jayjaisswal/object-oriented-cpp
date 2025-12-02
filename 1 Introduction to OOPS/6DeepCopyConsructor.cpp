#include <iostream>
using namespace std;

class Deep {
    int* arr;
    int size;

public:
    // Constructor
    Deep(int s) {
        size = s;
        arr = new int[size];
        for (int i = 0; i < size; i++) arr[i] = i + 1;
    }

    // Deep copy constructor
    Deep(const Deep& a) {
        size = a.size;
        arr = new int[size];  // allocate new memory
        for (int i = 0; i < size; i++) {
            arr[i] = a.arr[i];  // copy actual values
        }
    }

    // Destructor (to free memory)
    ~Deep() {
        delete[] arr;
    }

    void show() {
        for (int i = 0; i < size; i++) cout << arr[i] << " ";
        cout << endl;
    }

   
};

int main() {
    Deep obj1(5);
    Deep obj2 = obj1;  // deep copy

    
    obj1.show(); // 1 2 3 4 5
    obj2.show(); // 1 2 3 4 5

   
}
