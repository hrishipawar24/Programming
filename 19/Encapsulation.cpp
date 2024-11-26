#include <iostream>
using namespace std;

// Declare a class named 'Demo'
class Demo {
public:
    // Declare two integer data members 'A' and 'B' to store values
    int A;
    int B;

    // Member function 'Fun' that prints "Inside Fun\n" to the console
    void Fun() {
        cout << "Inside Fun\n";
    }

    // Member function 'Gun' that prints "Inside Gun\n" to the console
    void Gun() {
        cout << "Inside Gun\n";
    }
};

int main() {
    // Create an object of class 'Demo' named 'obj'
    Demo obj;

    // Print the size of the object 'obj' in bytes using sizeof operator
    cout << sizeof(obj) << "\n";  // This will typically output 8 (depends on the compiler and architecture)

    // Assign values 11 and 21 to data members A and B of the object 'obj'
    obj.A = 11;
    obj.B = 21;

    // Call the member function 'Fun' of the object 'obj'
    obj.Fun();  // Prints "Inside Fun\n"

    // Call the member function 'Gun' of the object 'obj'
    obj.Gun();  // Prints "Inside Gun\n"

    // Print the values of data members A and B of the object 'obj'
    cout << obj.A << "\n";  // Prints 11
    cout << obj.B << "\n";  // Prints 21

    return 0;
}
