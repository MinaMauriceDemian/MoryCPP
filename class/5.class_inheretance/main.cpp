/******************************************************************************
if i wanted to make another car class like Ecars 
so instead of making another class and copy all memebers 
i can just make the Ecar inherit all the public from Car class
by typing the following 
class Ecar :public Car{};
but 
Even if the base class (Car) has a constructor,
the derived class (Ecar) might have its own private data that needs to be initialized.

*******************************************************************************/

#include <iostream>
using namespace std;

class Car {
private:
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
// Optional: override printInfo to include KW
    void printInfo()
    {
        Car::printInfo(); // call base class method
        cout << "Power (kW): " << KW << " kW" << endl;
        cout << "***************************" << endl;
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