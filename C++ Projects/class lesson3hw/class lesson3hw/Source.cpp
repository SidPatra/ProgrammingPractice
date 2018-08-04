#include <iostream>
#include <string>
using namespace std;

class math {
public:
	int *x;
	int *y;
	math() {
		cout << "Inside parameter-less constructor" << endl;
	}
	math(int a, int b) {
		cout << "Inside parameterized constructor" << endl;
		a = 10;
		b = 20;
		int *x = &a;
		int *y = &b;
		cout << x << " " << y << endl;
	}
	~math() {
		x = 0;
		y = 0;
		cout << "Inside destructor" << endl;
	}
};



int main() 
{
	{
		math obj(10, 20);
	}
	cout << "Block ended" << endl;
}