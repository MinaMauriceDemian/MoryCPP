
/*
A constant member function in C++
is a member function of a class that does not modify the object it is called on
It is declared with the const keyword after the function's parameter list.

class MyClass {
public:
    int getValue() const;  // Constant member function
};

Key Rules
You use const after the function declaration: returnType functionName() const;
A constant member function cannot modify any member variables (unless they're marked mutable)
It can only call other const functions

*/
#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    // Constructor
    Box(int l) : length(l) {}

    // Const member function: does NOT modify the object
	//enforce read-only access to objects
    int getLength() const {
        return length;
    }

    // Non-const member function: can modify the object
    void setLength(int l) {
        length = l;
    }
};
/*
Why Use It?
Helps enforce read-only access to objects
Allows calling the function on const objects
*/

int main() {
    // Normal object
    Box b1(10);
    cout << "Length of b1: " << b1.getLength() << endl;  // ✅ Allowed
    b1.setLength(20);
    cout << "New length of b1: " << b1.getLength() << endl;

    // Const object
    const Box b2(30);
    cout << "Length of b2: " << b2.getLength() << endl;  // ✅ Allowed (const function)
    // b2.setLength(40);  // ❌ Error: can't call non-const on const object ‘Box::length’ in read-only object

    return 0;
}
