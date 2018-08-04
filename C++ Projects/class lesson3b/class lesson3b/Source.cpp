#include <iostream>
#include <string>
using namespace std;

class math {
public:
	int *num1;
	int *num2;
	math() {
		cout << "initializing parameter" << endl;
		num1 = 0;
		num2 = 0;
	}
	math(int x, int y) 
	{
		cout << "initializing parameterized" << endl;
		num1 = &x;
		num2 = &y;
		cout << *num1 << " " << *num2 << endl;
	}
	~math() {
		cout << "destroying" << endl;
	}
};

int main()
{
	math obj(10,20);
}