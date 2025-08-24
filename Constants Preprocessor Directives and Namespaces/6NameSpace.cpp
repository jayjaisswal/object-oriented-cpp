// // namespace is used to avoid name conflicts in large projects
// #include <iostream>
// using namespace std;

// // method 1
// namespace First 
// {
//     void fun() {
//         cout << "First namespace Demo" << endl;
//     }

// }

// namespace Second 
// {
//     void fun() {
//         cout << "Second namespace Demo" << endl;
//     }

// }

// int main() {
//     First::fun();
//     Second::fun();  
// }


// method 2.............................................
#include <iostream>
using namespace std;


namespace First 
{
    void fun() {
        cout << "First namespace Demo" << endl;
    }

}

namespace Second 
{
    void fun() {
        cout << "Second namespace Demo" << endl;
    }

}


using namespace First; // we can use all the members of First namespace without prefixing First::
int main() {
    fun(); // calls First::fun() only
    Second::fun(); 
    cout << "Hello World" << endl; // not good practice to use using namespace in large projects
    std::cout << "Hello World" << std::endl; //  good practice to use std::cout instead of using namespace std;
}

// Note: if we use 'using namespace Second;' also, then it will give error due to ambiguity
// as both namespaces have fun() method. In that case we have to call the method using
// namespace prefix like First::fun() or Second::fun()
// thats why using namespace in large projects is not a good practice instead we should use :: operator to call the method
