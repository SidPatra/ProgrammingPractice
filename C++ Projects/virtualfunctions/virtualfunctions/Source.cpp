#include <iostream>
#include <string>
using namespace std;

class A
{
public: 
	int b = 10;
	virtual void show()
	{
		cout << "Inside A class show function" << endl;
		cout << b << endl;
	}
};

class B:public A
{
public:
	int d = 5;
	void show()
	{
		cout << "Inside B class show function" << endl;
		cout << b << endl;
		cout << d << endl;
	}
};

class C :public B
{
	int e = 7;
	void show()
	{
		cout << "Inside C class show function" << endl;
		cout << b << endl;
		cout << d << endl;
		cout << e << endl;
	}
};


int main()
{
	A *aptr;
	B bobj;
	aptr = &bobj;
	aptr->show();

}
// make virtual function based program.
// make a base class with virtual function of name func
// subclass with same func with name func
// subclass that doesn't even have the function
// another example:
// base class has basic operations to do with an account
// 