/******************************************************************************

creating a normal class in CPP
any object is an istance ofa a class
class can have many instances
every instance  can perform differently

1. all class elements are private by default 
. in order to be used from the class objects you should put the  public: 

syntax
class <name>{
   // memebers are private by default  
   private:

protected:

   public: 
};
*******************************************************************************/

#include <iostream>
using namespace std;

class Car {
public:
    string Name ;
    string Colour; 
    double price;  
};


int main()
{
    Car myCar;
    myCar.Name ="Ford";
    myCar.Colour ="Red";
    myCar.price =40000;
    
    Car myCar2;
    myCar2.Name ="Nissan";
    myCar2.Colour ="Blue";
    myCar2.price =30000;

    
    cout<<"Name : "  <<myCar.Name<<endl;
    cout<<"Colour : "<<myCar.Colour<<endl;
    cout<<"Price : " <<myCar.price<<endl;

    cout<<"Name : "  <<myCar2.Name<<endl;
    cout<<"Colour : "<<myCar2.Colour<<endl;
    cout<<"Price : " <<myCar2.price<<endl;

    return 0;
}