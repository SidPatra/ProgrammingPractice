#include <iostream>
using namespace std;

class math
{
public:
	int *num1;
	int *num2;
	math() 
	{
		cout << "Inside parameter-less constructor:" << endl;
	}
	math(int a, int b)
	{
		num1 = new int;
		num2 = new int;
		*num1 = a;
		*num2 = b;
		cout << "Numbers inputted are: " << *num1 << " and " << *num2 << endl;
	}
	int add(int a, int b)
	{
		*num1 = a;
		*num2 = b;
		return a + b;
	}
};


int main() 
{
	math object1();
	
	int x, y;
	cout << "One number: ";
	cin >> x;
	cout << "Other number: ";
	cin >> y;
	math object2(x,y);	
	cout << "Sum is: " << object2.add(x, y) << endl;
}