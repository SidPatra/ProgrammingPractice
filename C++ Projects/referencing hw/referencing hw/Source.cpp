#include <iostream>
#include <string>
using namespace std;

class animal
{
public:
	string *name;
	int *number;

	animal()
	{
		name = new string;
		number = new int;
		*name = "";
		*number = 0;
	}
	void accept()
	{
		cout << "animal's name: ";
		cin >> *name;

		cout << "number of such animal: ";
		cin >> *number;
	}
	void display()
	{
		cout << *name << "(" << *number << ")";
	}
};


class zoo
{
public:
	string *name;
	animal *anim[3];
	int *numanimals;

	zoo()
	{
		name = new string;
		for (int i = 0; i <= 2; i++)
		{
			anim[i] = new animal;
		}
		numanimals = new int;
		*numanimals = 0;
		cout << "this is a thing" << endl;
	}
	void accept()
	{
		cout << "name of zoo ";
		cin >> *name;
		for (int i = 0; i <= 2; i++)
		{
			anim[i]->accept();
		}
		cout << "number of animals: ";
		cin >> *numanimals;
	}
	void display()
	{
		cout << "name of zoo: " << *name << endl;
		cout << "animals include: ";
		for (int i = 0; i <= 2; i++)
		{
			anim[i]->display();
			if (i != 2)
			{
				cout << ", ";
			}
			else {
				cout << endl;
			}
		}
	}
};

void function1(zoo x)
{
	x.accept();
	x.display();

}

void function2(zoo x)
{
	int num;
	string stri;
	int &refnum = num;
	string &refstring = stri;

	cout << "zoo's name: ";
	cin >> refstring;
	*x.name = stri;
	refstring = "";

	cout << "how many animals total: ";
	cin >> refnum;
	*x.numanimals = num;
	refnum = 0;


	for (int i = 0; i < 3; i++)
	{
		cout << "animal's name: ";
		cin >> refstring;
		*x.anim[i]->name = stri;
		refstring = "";
	
		cout << "how many such animals are there?: ";
		cin >> refnum;
		*x.anim[i]->number = num;
	}
	// display part starts now
	cout << endl;
	cout << endl;
	cout << "DISPLAY FUNCTION" << endl;
	cout << "zoo's name: " << *x.name << endl;
	cout << "total number of animals is: " << *x.numanimals << endl;

	cout << "animal's name: ";
	for (int i = 0; i < 3; i++)
	{
		cout << *x.anim[i]->name << "(";
		cout << *x.anim[i]->number << ")";
		if (i != 2)
		{
			cout << ", ";
		}
		else
		{
			cout << endl;
		}
	}
	
}

int main()
{
	zoo z;
	//function1(z);
	function2(z);
	
}