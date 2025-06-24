
// if i have 2 functions sharing the same name 
// the arguments should be different in type or number 
// the correct implementation is based on arguments 
// this process is managed by the compiler "name mangling"
// return type is not effective in the function Overloading 
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
void Print(const int* x) {
cout <<"second print function"<< endl;
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