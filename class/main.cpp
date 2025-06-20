/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

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
    myCar.Name ="fordy";
    myCar.Colour ="Red";
    myCar.price =40000;
    
    cout<<"Hello World"<<endl;
    cout<<"Name : "<<myCar.Name<<endl;
    cout<<"Colour : "<<myCar.Colour<<endl;
    cout<<"Price : "<<myCar.price<<endl;

    return 0;
}