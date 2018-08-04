#include <iostream>
#include <string>
using namespace std;

class math {
public:
	int a;
	int b;
	math()
	{
		cout << "non parameter" << endl;
	}
	void display()
	{
		cout << a << " and " << b << endl;
	}
	math(int x, int y)
	{
		this->a = x;
		this->b = y;
		cout << a << " and " << b << endl;
	}
	// this pointer is m1: 
	math operator+(math m2)
	{
		math m3;
		m3.a = this->a + m2.a;
		m3.b = this->b + m2.b;
		return m3;
	}
};

class student {
public:
	int rollnum;
	int marks;
	student()
	{
		cout << "inside non paramterized" << endl;
	}
	student(int x, int y) // displays
	{
		this->marks = x;
		this->rollnum = y;
		//rollnum = x;
		//marks = y;
		cout << "student number " << rollnum << " has " << marks << " marks." << endl;
	}
};



int main()
{
	/*
	int a = 10;
	int b = 11;
	student s1(a, b);
	*/
	math m1(10,20);
	m1.display();
	math m2(30,40);
	m2.display();
	math m3;
	m3 = m1 + m2;
	m3.display();
//	cout << m1.a << " " << m1.b << endl;

	// make operator overloading for all basic arithmetic (+,-,*,/)
}