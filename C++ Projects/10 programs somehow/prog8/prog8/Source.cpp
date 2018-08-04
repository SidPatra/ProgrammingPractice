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
		return *num1 + *num2;
	}
	int sub(int a, int b)
	{
		*num1 = a;
		*num2 = b;
		return *num1 - *num2;
	}
	int multi(int a, int b)
	{
		*num1 = a;
		*num2 = b;
		return *num1 * *num2;
	}
	int div(float a, float b)
	{
		*num1 = a;
		*num2 = b;
		return float(*num1 / *num2);
	}
	~math()
	{
		cout << "That's all the math that I can do" << endl;
		delete num1, num2;
		num1 = NULL;
		num2 = NULL;
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
	math object2(x, y);
	cout << "Sum is: " << object2.add(x, y) << endl;
	cout << "Difference is: " << object2.sub(x, y) << endl;
	cout << "Product is: " << object2.multi(x, y) << endl;
	cout << "Quotient is: " << object2.div(x, y) << endl;
}