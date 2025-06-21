/******************************************************************************
1. Compile-Time Polymorphism (Static)
a.Function Overloading
b.Operator Overloading
c.Templates (in a broader sense)
class Printer {
public:
    void print(int x) {
        cout << "Printing int: " << x << endl;
    }
    void print(string s) {
        cout << "Printing string: " << s << endl;
    }
};
Here, which version of print() gets called is decided at compile time. based on the input 

2. Runtime Polymorphism (Dynamic)
a.Inheritance
b.Virtual functions
c.Base class pointers or references
class Car {
public:
    virtual void start() {
        cout << "Starting a generic car" << endl;
    }
};

class Ecar : public Car {
public:
    void start() override {
        cout << "Starting an electric car" << endl;
    }
};

int main() {
    Car* myCar = new Ecar(); // base pointer to derived object
    myCar->start();          // Output: Starting an electric car (decided at runtime)
}
*******************************************************************************/

#include <iostream>
using namespace std;

class Car {
private:
//nothing
protected:
    string Name ;
    string Colour; 
    double Price; 
    int HorsePower;
public:
//making the constuctor
Car(string name,string colour,double price,int horsePower)
{
    Name=name;
    Colour=colour;
    Price=price;
    HorsePower=horsePower;
}
//adding a method to print the info
void printInfo()
{
    cout<<"Name : "  <<Name<<endl;
    cout<<"Colour : "<<Colour<<endl;
    cout<<"Price : " <<Price<<" $"<<endl;
    cout<<"Horse power : "<<HorsePower<<" HP"<<endl;
    cout<<"***************************"<<endl;
}
//adding method to change price
void changePrice(double newPrice)
{
    Price=newPrice;
}

};

class Ecar :public Car{
private:
    int KW;
public:
    // Ecar constructor: takes all parameters needed for Car + KW
    Ecar(string name, string colour, double price, int horsePower, int kiloWatt)
        : Car(name, colour, price, horsePower) // call base class constructor
    {
        KW = kiloWatt;
    }

void printInfo()
{
    cout<<"Name : "  <<Name<<endl;
    cout<<"Colour : "<<Colour<<endl;
    cout<<"Price : " <<Price<<" $"<<endl;
    cout<<"Horse power : "<<HorsePower<<" HP"<<endl;
    cout << "Power (kW): " << KW << " kW" << endl;
    cout<<"***************************"<<endl;
}
};

int main()
{
    Car Ford("Ford","Red",40000,120);
    Ecar Tesla("Tesla", "Grey", 70000, 150, 260); // includes KW

    Ford.printInfo();
   Tesla.printInfo();

    return 0;
}