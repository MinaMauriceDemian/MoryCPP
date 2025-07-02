//#pragma once
// Used to include the .h file only once 
#ifndef Car_h
#define Car_h

struct Car {

private:
// give initial value for the fuel
	float fuel{ 0 };  
	float speed{ 0 };
	int passengers{ 0 };
	int arr[5] = { 1,2,3 };
	char *p{};

public:
/*
This constructor takes no arguments.
It’s typically used to initialize an object with default values.
Called like this: Car myCar;   // Calls Car()


*/
	Car(); //👈 Default constructor
/*
This constructor takes one float argument.
It allows you to initialize the object with a specific value (e.g., fuel amount).
Called like this: Car myCar(10.5);   // Calls Car(float amount), sets fuel to 10.5 (likely)

his is an example of constructor overloading 
*/
	Car(float amount); //👈 Parameterized constructor

	void FillFuel(float amount);
	void Accelerate();
	void Brake();
	void AddPassengers(int count); 
	void Dashboard();
   
    //destructor
	~Car();
};

#endif /* Car_h */