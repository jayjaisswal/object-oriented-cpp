#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    const int x = 10;
    //int *ptr = &x;  we cannot store address of const variable in a non-const pointer
    const int *ptr = &x;  // means pointer to a const integer
   // or
   // int const *ptr = &x;  // means pointer to a const integer 

    ++ptr; // we can change the pointer to point to next integer address
    //++*ptr;  Error: cannot modify a const variable through a pointer
    // However, we can change the pointer to point to another address
    int y = 20;
    ptr = &y; // This is allowed
    

    // NOTE
    // Rule of Thumb:

        // const before * → the data (the int) is constant (can’t change through this pointer).

        // const after * → the pointer itself is constant (can’t point somewhere else).


        int z = 30;
        int *const p = &z; // constant pointer to an integer
        // or

        //++p; Error: cannot change a constant pointer to point to another address
        ++*p; // we can change the value of z through the pointer p
        cout << z << endl; // 31


        int a = 40;
        const int *const q = &a; // constant pointer to a constant integer
        //++q; Error: cannot change a constant pointer to point to another address
        //++*q; Error: cannot change the value of a constant integer through the pointer q

    
}