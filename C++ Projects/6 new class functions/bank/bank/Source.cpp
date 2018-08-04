#include <iostream>
#include <string>
using namespace std;

class customer
{
	string *name;
	int *quant;
public:
	customer()
	{
		name = new string;
		quant = new int;
	}
	void accept()
	{
		string str = "";
		string &refstri = str;
		int num = 0;
		int &refnum = num;
		cout << "      Customer name: ";
		cin >> refstri;
		*name = str;
		refstri = "";
		cout << "      Transactions pending: ";
		cin >> refnum;
		*quant = num;
	}
	void display()
	{
		cout << "      " << *name << " still has " << *quant << " transactions pending." << endl;
	}
};


class employee
{
	string *name;
	int *trans;
	customer c[2];

public:

	employee()
	{
		name = new string;
		trans = new int;
	}
	void accept()
	{
		string str = "";
		string &refstri = str;
		int num = 0;
		int &refnum = num;
		cout << "   Name of cashier: ";
		cin >> refstri;
		*name = str;
		refstri = "";
		cout << "   Transactions performed: ";
		cin >> refnum;
		*trans = num;
		cout << "   " << *name << " is also responsible for various customers:" << endl;
		for (int i = 0; i < 2; i++)
		{
			c[i].accept();
		}

	}
	void display()
	{
		cout << "   " << *name << " conducted" << *trans << " today." << endl;
		cout << "Pending customer details and transactions: " << endl;
		for (int i = 0; i < 2; i++)
		{
			c[i].display();
		}
	}
};

class manager
{
	string *name;
	int *money;
	string *dept;
	employee *e[2];
public:
	manager()
	{
		name = new string;
		money = new int;
		dept = new string;
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
		cout << "Department of: ";
		cin >> refstri;
		*dept = str;
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
		cout << *name << " is the department head of " << *dept << endl;
		cout << "Annual salary is: $" << *money << endl;
		cout << *name << " also has employees:" << endl;
		for (int i = 0; i < 2; i++)
		{
			e[i]->display();
		}
	}
};


class bank
{
public:
	string *name;
	string *ceo;
	int *numcustomers;
	manager *m[2];
	bank()
	{
		name = new string;
		numcustomers = new int;
		ceo = new string;
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
		cout << "What is the name of the bank?: ";
		cin >> refstri;
		*name = str;
		refstri = "";

		cout << "CEO of bank: ";
		cin >> refstri;
		*ceo = str;
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
	bank b;
	b.accept();
	cout << endl;
	cout << endl;
	cout << endl;
	b.display();
}