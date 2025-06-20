/******************************************************************************

constructor 
1, should not have a return type
2, should has the same name as your class

then isntead of  using 
    Car myCar;
    myCar.Name ="Ford";
    myCar.Colour ="Red";
    myCar.price =40000;
to assign the values 
we can use : Car myCar("Ford","Red",40000);
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

};


int main()
{
    Car myCar("Ford","Red",40000);
    Car myCar2("Nissan","Blue",30000);


    
    cout<<"Name : "  <<myCar.Name<<endl;
    cout<<"Colour : "<<myCar.Colour<<endl;
    cout<<"Price : " <<myCar.Price<<endl;

    cout<<"Name : "  <<myCar2.Name<<endl;
    cout<<"Colour : "<<myCar2.Colour<<endl;
    cout<<"Price : " <<myCar2.Price<<endl;

    return 0;
}