#include <iostream>
#include <string>
using namespace std;

class employee
{
	string *name;
	int *pay;

public:

	employee()
	{
		name = new string;
		pay = new int;
	}
	void accept()
	{
		string str = "";
		string &refstri = str;
		int num = 0;
		int &refnum = num;
		cout << "   Name of employee: ";
		cin >> refstri;
		*name = str;
		refstri = "";
		cout << "   Annual salary is: ";
		cin >> refnum;
		*pay = num;
	}
	void display()
	{
		cout << "   " << *name << " gets payed $" << *pay << " anually." << endl;
	}
};

class manager
{
	string *name;
	int *money;
	employee *e[2];
public:
	manager()
	{
		name = new string;
		money = new int;
		for (int i = 0; i < 2; i++)
		{
			e[i] = new employee;
		}
	}
	void accept()
	{
		string str = "";
		string &refstri = str;
		int num = 0;
		int &refnum = num;
		cout << "Name of manager: ";
		cin >> refstri;
		*name = str;
		refstri = "";
		cout << "Annual salary is: ";
		cin >> refnum;
		*money = num;
		cout << *name << "'s employees' details:" << endl;
		for (int i = 0; i < 2; i++)
		{
			e[i]->accept();
		}
	}
	void display()
	{
		cout << *name << " has $" << *money << endl;
		cout << *name << " also has employees:" << endl;
		for (int i = 0; i < 2; i++)
		{
			e[i]->display();
		}
	}
};


class company
{
public:
	string *name;
	int *numcustomers;
	manager *m[2];
	company()
	{
		name = new string;
		numcustomers = new int;
		for (int i = 0; i < 2; i++)
		{
			m[i] = new manager;
		}

	}
	void accept()
	{
		string str = "";
		string &refstri = str;
		int num = 0;
		int &refnum = num;
		cout << "What is the name of the company?: ";
		cin >> refstri;
		*name = str;
		refstri = "";
		cout << "How many employees are there in total?: ";
		cin >> refnum;
		*numcustomers = num;

		for (int i = 0; i < 2; i++)
		{
			m[i]->accept();
		}

	}
	void display()
	{
		cout << "Name of company is " << *name << endl;
		cout << "Total number of employees is is " << *numcustomers << endl;
		cout << "Names of managers:" << endl;
		for (int i = 0; i < 2; i++)
		{
			m[i]->display();
		}

	}
};

int main()
{
	company m;
	m.accept();
	cout << endl;
	cout << endl;
	cout << endl;
	m.display();
}