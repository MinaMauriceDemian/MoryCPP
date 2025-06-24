
/*
if i wanted to make a function that don't need context swithching 
so i can do the function like macro but i may have an error due to wrong parsing as the following : 

#define square(x) x*x
and in main function 
int var =5 ;
int result = square(var + 1);
It gets expanded literally as:  int result = var + 1 * var + 1;
result = var + (1 * var) + 1;
result = 5 + (1 * 5) + 1 = 5 + 5 + 1 = 11
and what was expected is 6*6 

so to avoid that use the inline keyword

based on the compiler configuration it will be called or replaced
*/
#include <iostream>
// request the compiler to replace instead of calling 
inline int Square(int x) {
	return x * x;
}
//#define Square(x) x*x
int main() {
	using namespace std;
	int val = 5;
	int result = Square(val + 1);
	cout << result << endl;
	return 0;
}