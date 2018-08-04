#include <iostream>
#include <string>
using namespace std;

class something
{
	int *val;
	string *name;
	int *arr[4];
public:
	something()
	{
		val = new int;
		*val = 0;
		name = new string;
		*name = "not a name";
		for (int i = 0; i < 4; i++)
		{
			arr[i] = new int;
		}
	}
	something(int x, string w)
	{
		val = new int;
		name = new string;
		*val = x;
		*name = w;
		for (int i = 0; i < 4; i++)
		{
			arr[i] = new int;
			*arr[i] = i;
		}
	}
	void displayfunc()
	{
		cout << "x = " << *val << endl;
		cout << "name = " << *name << endl;
		for (int i = 0; i < 4; i++)
		{
			if (i != 3) {
				cout << *arr[i] << ", ";
			}
			else
			{
				cout << *arr[i] << endl;
			}
		}
	}
	void buildarr()
	{
		for (int i = 0; i < 4; i++)
		{
			cin >> *arr[i];
		}
	}
	void sumarray(something a)
	{
		something c;
		for (int i = 0; i < 4; i++)
		{
			
			*arr[i] = *arr[i] + *a.arr[i];
		}
	}
	something operator+(something a)
	{
		something c;
		c.val = this->val + *a.val;
		return c;
	}
	something operator=(something a)
	{
		*name = *a.name;
		return a;
	}
};


int main()
{
	something a(10,"hello");
	something b(5,"bye");
	something c;
	c = a + b;
	a = b;
	cout << "Build the array: " << endl;
	cout << "A" << endl;
	a.buildarr();
	cout << "B" << endl;
	b.buildarr();
	cout << "C" << endl;
	c.buildarr();
	c.sumarray(a);
	b.sumarray(c);
	a.sumarray(b);
	cout << "A" << endl;
	a.displayfunc();
	cout << "B" << endl;
	b.displayfunc();
	cout << "C" << endl;
	c.displayfunc();

}

// assingment operator gets called when allocating data members from one object of a class
// to another. both need to exist.