/******************************************************************************

Method
instead of printing many times the output 
you can  just add a function (Method) to your class so that you can use it 

so instead of using 
    cout<<"Name : "  <<myCar.Name<<endl;
    cout<<"Colour : "<<myCar.Colour<<endl;
    cout<<"Price : " <<myCar.Price<<endl;

    cout<<"Name : "  <<myCar2.Name<<endl;
    cout<<"Colour : "<<myCar2.Colour<<endl;
    cout<<"Price : " <<myCar2.Price<<endl;
i will use 


*******************************************************************************/

#include <iostream>
using namespace std;

class Car {
public:
    string Name ;
    string Colour; 
    double Price; 

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

};


int main()
{
    Car myCar("Ford","Red",40000);
    Car myCar2("Nissan","Blue",30000);

    myCar.printInfo();
    myCar2.printInfo();

    return 0;
}