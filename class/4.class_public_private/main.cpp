/******************************************************************************

to modify private data after creation Use public methods
private:
    string Name ;
    string Colour; 
    double Price; 

now if i wanted to change the private elements and also i cannot use the constructor 
so i have to creatre a public method 

now i will create void changePrice(double newPrice)  (Public method)
to change the private member "Price"

*******************************************************************************/

#include <iostream>
using namespace std;

class Car {
private:
    string Name ;
    string Colour; 
    double Price; 
public:
//making the constuctor
Car(string name,string colour,double price)
{
    Name=name;
    Colour=colour;
    Price=price;
}
//adding a method to print the info
void printInfo()
{
    cout<<"Name : "  <<Name<<endl;
    cout<<"Colour : "<<Colour<<endl;
    cout<<"Price : " <<Price<<" $"<<endl;
}

//adding method to change price
void changePrice(double newPrice)
{
    Price=newPrice;
}

};


int main()
{
    Car Ford("Ford","Red",40000);

    Ford.printInfo();
    Ford.changePrice(45000);
    Ford.printInfo();
    // cannot be changed this way
   // Ford.Price=45000;
   // Ford.printInfo();
    return 0;
}