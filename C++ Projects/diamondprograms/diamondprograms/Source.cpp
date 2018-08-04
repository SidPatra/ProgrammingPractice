#include <iostream>
#include <string>
using namespace std;


// difference between static and global type variables (stored in different parts of data)
// default initializations of static and global - find those also
// write static programs
// explain the entire idea of static variables
// write inheritance programs

float pi = 3.14;
static int all = 10; // acts a lot like global variable


class A
{
	static int rand1; // doesn't act like global - the rules have changed
public:
	string a;
	int rand2;
	A()
	{
		a = "Hello";
		rand2 = 555;
	}
	static void displaystatdata()
	{
		cout << rand1 << endl;
	//	cout << rand2 << endl;  won't work, 
	}
};
int A::rand1 = 7;

class B: virtual public A
{
public:
	string b;
	
};

class C: virtual public A
{
public:
	string c;

};

class D: public B, C
{
public:
	string d;
	void display()
	{
		cout << this->a << endl;
		cout << pi << endl;
		A::displaystatdata();
	}

};

int main()
{
	D something;
	A obj;
	something.display();
	obj.displaystatdata();
	A::displaystatdata();
}

