#include <iostream>
#include <string>
using namespace std;


class shopper
{
	string *name;
	int *money;
public:
	shopper()
	{
		name = new string;
		money = new int;
	}
	void accept()
	{
		string str = "";
		string &refstri = str;
		int num = 0;
		int &refnum = num;
		cout << "Name of shopper: ";
		cin >> refstri;
		*name = str;
		refstri = "";
		cout << "How much money has this person spent?: ";
		cin >> refnum;
		*money = num;
	}
	void display()
	{
		cout << *name << " has $" << *money << endl;
	}
};


class mall
{
public:
	string *name;
	int *numcustomers;
	shopper *s[2];
	mall()
	{
		name = new string;
		numcustomers = new int;
		for (int i = 0; i < 2; i++)
		{
			s[i] = new shopper;
		}

	}
	void accept()
	{
		string str = "";
		string &refstri = str;
		int num = 0;
		int &refnum = num;
		cout << "What is the name of the shopping mall?: ";
		cin >> refstri;
		*name = str;
		refstri = "";
		cout << "How many shoppers are there in total?: ";
		cin >> refnum;
		*numcustomers = num;

		for (int i = 0; i < 2; i++)
		{
			s[i]->accept();
		}

	}
	void display()
	{
		cout << "Name of university is " << *name << endl;
		cout << "Total enrolled is " << *numcustomers << endl;
		cout << "Names of students:" << endl;
		for (int i = 0; i < 2; i++)
		{
			s[i]->display();
		}

	}
};

int main()
{
	mall m;
	m.accept();
	cout << endl;
	cout << endl;
	cout << endl;
	m.display();
}