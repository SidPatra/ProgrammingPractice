#include <iostream>
#include <string>
using namespace std;

class math 
{
public:
	int a;
	int b;

	math() {
		cout << "Calculator initializing" << endl;
	}

	math(int a,int b) 
	{
		cout << "You have inputted the following numbers: " << a << " and " << b << "." << endl << "Good luck!" << endl;
	}

	void accepta()
	{
		int x;
		cout << "Insert number a: ";
		cin >> x;
		cout << "You inserted: " << x << endl;
		a = x;

	}
	void acceptb()
	{
		int x;
		cout << "Insert number b: ";
		cin >> x;
		cout << "You inserted: " << x << endl;
		b = x;
	}
	
	int add(int a, int b) {
		return a + b;
	}
	int sub(int a, int b) {
		return a - b;
	}
	int multi(int a, int b) {
		return a * b;
	}
	float div(float a, float b) {
		
		return float(a/b);
	}
};

int main()
{
	math obj1(10,20);

	obj1.accepta();
	obj1.acceptb();
	cout << "Sum calculation: ";
	cout << obj1.add(obj1.a, math.b) << endl;
	cout << "Difference calculation: ";
	cout << math.sub(math.a, math.b) << endl;
	cout << "Product calculation: ";
	cout << math.multi(math.a, math.b) << endl;
	cout << "Quotient calculation: ";
	cout << math.div(math.a, math.b) << endl;
}