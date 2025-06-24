/*
<ret> (*funcPtr)(arg1,argN)=&fun_name;

int (*funcPtr)(int, int);  // pointer to function taking (int, int) and returning int


atexit() is a C/C++ standard library function used to register functions that should be called automatically 
when the program terminates normally (i.e., exits via return, exit(), or reaching the end of main()).
int atexit(void (*func)(void));
Takes a pointer to a function that takes no arguments and returns nothing (void).
Returns 0 on success, non-zero on failure.
*/
void Print(int count, char ch) {
	using namespace std;
	for (int i = 0; i < count; ++i) {
		cout << ch;
	}
	cout << endl; 
}

void EndMessage() {
	using namespace std;
	cout << "End of program" << endl; 
}

int main() {
	//Register a handler. This handler will be invoked after main returns
	atexit(EndMessage);
	Print(5, '#');
	void(*pfn) (int, char) = Print;
	//One way to invoke function pointer
	(*pfn)(8, '@');
	//Another way to invoke function pointer
	pfn(5, '+');
	using namespace std;
	cout << "end of main" << endl;
	return 0;
}