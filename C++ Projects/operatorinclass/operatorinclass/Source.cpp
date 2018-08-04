#include <iostream>
#include <string>
using namespace std;

class math {
public:
	float a;
	float b;
	math()
	{
		/*a = new int;
		b = new int;
		a = 0;
		b = 0;*/
		cout << "non parameter" << endl;
	}
	math(int num1, int num2)
	{
		a = num1; // with pointers make it &num1 instead of just num1
		b = num2;
	}
	math operator+(math x)
	{
		math m3;
		m3.a = this->a + x.a; // with pointers it is (x.a)
		m3.b = this->b + x.b;
		return m3; // with pointers it returns addresses
	}
	math operator-(math x)
	{
		math m3;
		m3.a = this->a - x.a; // with pointers it is (x.a)
		m3.b = this->b - x.b;
		return m3; // with pointers it returns addresses
	}
	math operator*(math x)
	{
		math m3;
		m3.a = this->a * x.a; // with pointers it is (x.a)
		m3.b = this->b * x.b;
		return m3; // with pointers it returns addresses
	}
	math operator/(math x)
	{
		math m3;
		m3.a = float(this->a / x.a); // with pointers it is (x.a)
		m3.b = float(this->b / x.b);
		return m3; // with pointers it returns addresses
	}

};


int main()
{
	math m1(10, 20);
	math m2(30, 40);
	math m3(0,0);
	m3 = m1 + m2;
	cout << m3.a << " " << m3.b << endl;
	m3 = m1 - m2;
	cout << m3.a << " " << m3.b << endl;
	m3 = m1 * m2;
	cout << m3.a << " " << m3.b << endl;
	m3 = m1 / m2;
	cout << m3.a << " " << m3.b << endl;
}