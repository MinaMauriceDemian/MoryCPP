
/*
So if you're calling a C function from C++ (or vice versa), you must use:

extern "C" {
    // C functions go here
}
_____________________________________________________________
from compiler point of view 
in c++ 
void sayHello() { }  ----> becomes a mangled name like: _Z8sayHellov
in c 
void sayHello() { }  ----> stays: sayHello
If you try to link them without extern "C", the linker won’t find a match.
_____________________________________________________________
as it cancel the name mangling so it can be used only once on one of the overloaded functions 



*/ 

#include <iostream>
using namespace std;

int Add(int a, int b) {
	return a + b;
}
double Add(double a, double b) {
	return a + b;
}
void Print(int *x) {
cout <<"first print function"<< endl;
}
extern "C" {
	// this function will be found in the map file with the same name 
	void Print(const int* x) {
cout <<"second print function"<< endl;
}
}
int main() {
	
	int result = Add(3, 5);
	cout << result << endl;
	
	cout << Add(3.1, 6.2)<< endl;
	int y ;
	const int x = 1;
	
	Print(&x);
	Print(&y);
	return 0;
}