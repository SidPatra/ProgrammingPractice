#include <iostream>
using namespace std;

// Returns one value through a function - very basic

int *func()
{
	int x = 20;
	return &x;
}

int main() {
	int *value = func();
	cout << "Value " << *value << " stored at " << value << endl;
	cout << "Value " << *func() << " stored at " << func() << endl;
}