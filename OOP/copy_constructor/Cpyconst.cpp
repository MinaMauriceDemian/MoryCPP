/*
A copy constructor in C++ is a special constructor that initializes an object using another object of the same class. It's used when:

An object is passed by value as a parameter
An object is returned by value from a function
An object is initialized using another object of the same class


Key Characteristics
1.Parameter: Always takes a reference to an object of the same class (typically const)
2.Default version: If you don't define one, the compiler provides a default copy constructor that performs member-wise shallow copy
3.Deep copy: Often needs to be explicitly defined when the class manages resources (like dynamic memory)
Syntax
class MyClass {
public:
    // Copy constructor
    MyClass(const MyClass& other) {
        // Copy members from 'other' to 'this'
    }
};
*/
#include <iostream>
#include <cstring>

class String {
private:
    char* data;
    size_t length;
    
public:
    // Regular constructor
    String(const char* str = "") {
        length = strlen(str);
        data = new char[length + 1];
        strcpy(data, str);
    }
    
    // Copy constructor
    String(const String& other) {
        length = other.length;
        data = new char[length + 1];
        strcpy(data, other.data);
    }
    
    ~String() {
        delete[] data;
    }
    
    void print() {
        std::cout << data << std::endl;
    }
};

int main() {
    String s1("Hello");
    String s2 = s1;  // Copy constructor called
    
    s1.print();  // Output: Hello
    s2.print();  // Output: Hello
    
    return 0;
}
