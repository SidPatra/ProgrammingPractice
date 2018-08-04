#include <iostream>
using namespace std;

class oper
{
	
public:
	int x = 0;
	int *size;
	oper()
	{
		x = 10;
		size = new int;
	}
	oper operator+(oper z)
	{
		oper y;
		y.x = this->x + z.x; 
		return y; 
	}
	oper operator=(oper &z)
	{
		*size = *z.size;
		return z;
	}
	~oper()
	{
		delete size;
	}
	void asignnum(oper z)
	{
		*this->size = *z.size;
	}
};

int main()
{ /*
	oper a;
	oper b;
	oper c;
	a = b + c;
	cout << a.x << endl;*/
	oper n1;
	oper n2;
	cin >> *n1.size;
	cin >> *n2.size;
	n1 = n2;
	cout << "n1 = " << *n1.size << " and n2 = ";
	cout << *n2.size << endl;
}

// assignment operators
// implement it too
// use pointers
// make a simple af program
// use the old copy-constructor one, maybe?