/******************************************************************************
what if i wanted to implement the printInfo function in a different way 
in the Ecar class than in the Car class
just make a function with the same name with different implementation 
but 

we will have the following issues 
1.Access violation:
The Name, Colour, Price, and HorsePower members in Car are private,
so they cannot be accessed directly in Ecar.
   
2.Missing virtual keyword:
If you want true polymorphism (especially with pointers), 
the printInfo() method in the base class (Car) must be marked as virtual.
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