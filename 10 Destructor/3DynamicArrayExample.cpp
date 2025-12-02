// syntax
// int* arr;
// arr = new int[n]; 

// or

// int* arr = new int[n];
// delete[] arr; // to free the memory allocated to the array
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Demo
{
public:
    int *arr;
    Demo()
    {
        arr = new int[5]; // dynamically allocate an array of 5 integers
        cout << "Constructor called" << endl;
    }

    ~Demo()
    {
        delete[] arr; // free the memory allocated to the array
        cout << "Destructor called" << endl;
    }
};

int main() {
    Demo d1;    
}


 // when main ends, d1 goes out of scope
// destructor will be called automatically
// Destructors in C++ cannot take parameters and cannot be overloaded.


// 🔹 Memory in C++ has 2 important parts:

// Stack

// Small, fast memory managed automatically.

// Variables created normally (like int a;) are stored here.

// Memory is freed automatically when the variable goes out of scope.

// Example:

// int main() {
//     int a = 10;   // stored on stack
// }   // memory for 'a' is freed automatically here


// Heap

// Large memory pool, managed manually by the programmer.

// When you don’t know the size of data at compile time, you take memory from heap dynamically using new.

// You must manually free it with delete, otherwise memory leak happens.

// Example:

// int main() {
//     int* p = new int;   // one int created on heap
//     *p = 20;            // store value
//     cout << *p << endl;

//     delete p;           // manually free memory
// }


// differences between Stack and Heap memory:
// | Feature           | Stack (automatic)           | Heap (manual)                 |
// | ----------------- | --------------------------- | ----------------------------- |
// | Size              | Small                       | Large                         |
// | Speed             | Fast                        | Slower                        |
// | Memory management | Automatic (compiler cleans) | Manual (`new` / `delete`)     |
// | Example           | `int a = 5;`                | `int* p = new int; delete p;` |
