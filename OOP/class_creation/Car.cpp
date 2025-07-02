
#include "Car.h"
#include <iostream>


/*
// Car.h
class Car {
public:
    Car();  // Declared, but not implemented here
};

// Car.cpp
#include "Car.h"
Car::Car() {
    // Implementation goes here
}

*/

// this is the implementation of the struct methods 
Car::Car() {

}

Car::Car(float amount) {
	fuel = amount;

}

void Car::FillFuel(float amount) {
	fuel = amount;
}

void Car::Accelerate() {
	speed++;
	fuel -= 0.5f;
}

void Car::Brake() {
	speed = 0;
}

void Car::AddPassengers(int count) {
	passengers = count;
}

void Car::Dashboard() {
	std::cout << "Fuel level : " << fuel << std::endl;
	std::cout << "Speed : " << speed << std::endl;
	std::cout << "Passengers : " << passengers << std::endl; 
}

Car::~Car() {
}
