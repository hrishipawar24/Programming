#include<iostream>
using namespace std;

// Declare a class named 'Marvellous'
class Marvellous {
public:
    // Declare two integer data members to store values
    int No1;
    int No2;

    // Default constructor
    Marvellous() {
        cout << "Inside default constructor\n";
        // Initialize data members to zero
        No1 = 0;
        No2 = 0;
    }

    // Parameterized constructor
    Marvellous(int A, int B) {
        cout << "Inside parameterized constructor\n";
        // Initialize data members with provided values
        No1 = A;
        No2 = B;
    }

    // Destructor
    ~Marvellous() {
        cout << "Inside destructor\n";
    }

    // Member function to print a message
    void Fun() {
        cout << "Inside Fun\n";
    }
};

int main() {
    // Create an object 'mobj1' using the default constructor
    Marvellous mobj1;

    // Create an object 'mobj2' using the parameterized constructor
    Marvellous mobj2(11, 21);

    return 0;
}
