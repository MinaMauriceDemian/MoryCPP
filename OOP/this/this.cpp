
#include<iostream>
using namespace std;

/*
Tip:
this is of type ClassName* (a pointer to the current object).
*this is the actual object itself (dereferencing the pointer).

*/
class Car {
private:
    float fuel;

public:
    Car(float fuel) {
        this->fuel = fuel; // 👈 using 'this' to refer to the object's fuel
    }

    void setFuel(float fuel) {
        this->fuel = fuel; // distinguish between parameter and member variable
    }

    void showAddress() {
        cout << "Address of this object: " << this << endl;
    }

    // also we can do the following 
    Car& addFuel(float amount) {
        this->fuel += amount;
        cout << this->fuel << endl;
        return *this; // return reference to the current object
        
    }

};


//Then you can do:
int main() {

Car myCar(10);
myCar.showAddress();
myCar.addFuel(10).addFuel(5);  // method chaining

return 0;
}
