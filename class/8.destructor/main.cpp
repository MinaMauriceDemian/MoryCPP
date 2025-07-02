/******************************************************************************
A destructor is a special member function in C++ that is automatically called when an object is destroyed.
Its main job is to release resources that the object may have acquired during its lifetime (like memory, file handles, etc.).

cannot be overloaded == no arguments
*******************************************************************************/
#include <iostream>
using namespace std;

class Car {
public:
    string Name ;
    string Colour; 
    double Price; 

    // Constructor
    Car(string name, string colour, double price) {
        Name = name;
        Colour = colour;
        Price = price;
        cout << "Car created: " << Name << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car destroyed: " << Name << endl;
    }
};

int main() {
    // Constructor calls
    Car myCar("Ford", "Red", 40000);
    Car myCar2 = Car("Nissan", "Blue", 30000);

    cout << "***************************" << endl;
    cout << "Name: " << myCar.Name << endl;
    cout << "Colour: " << myCar.Colour << endl;
    cout << "Price: " << myCar.Price << endl;

    cout << "***************************" << endl;
    cout << "Name: " << myCar2.Name << endl;
    cout << "Colour: " << myCar2.Colour << endl;
    cout << "Price: " << myCar2.Price << endl;

    //myCar.~Car();
    return 0;
}