#include<iostream>
using namespace std;


/*
1. static memebers are part of the the class but not part of the objects 
2. only one copy exist 
3. shared between all objects 

static variables 
 1. must be initialized outside the class 

 syntax 
 //Car.h
 class Car{
    static int totalCars; // can be used by all methods 
 }

//Car.cpp
int Car::totalCars; // default init to 0 


Static functions 
1. Do not use this pointer
2. cannot access non static members of the class
3. can be invoked directly by class name 
*/

#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // 👈 Static variable shared by all objects

public:
    Counter() {
        count++;  // Increment count when object is created
          cout << "An object is created "  << endl;
    }

    // Static method to access the count
    static void showCount() {
        cout << "Total objects created: " << count << endl;
    }
};

// Define and initialize the static variable
int Counter::count = 0;

int main() {
    Counter::showCount();  // Output: Total objects created: 0

    Counter c1;            // Object created → count becomes 1
    Counter c2;            // Object created → count becomes 2
    Counter c3;            // Object created → count becomes 3

    Counter::showCount();  // Output: Total objects created: 3

    return 0;
}