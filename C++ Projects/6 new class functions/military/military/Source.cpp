#include <iostream>
#include <string>
using namespace std;


class unit
{
	string *name;
	int *personnelcount;
public:
	unit()
	{
		name = new string;
		personnelcount = new int;
	}
	void accept()
	{
		string str = "";
		string &refstri = str;
		int num = 0;
		int &refnum = num;
		cout << "Name of military unit: ";
		cin >> refstri;
		*name = str;
		refstri = "";
		cout << "Number of personnel in this unit: ";
		cin >> refnum;
		*personnelcount = num;
	}
	void display()
	{
		cout << *name << " has a GPA of " << *personnelcount << endl;
	}
};


class military
{
public:
	string *name;
	int *numsoldiers;
	unit *u[2];
	military()
	{
		name = new string;
		numsoldiers = new int;
		for (int i = 0; i < 2; i++)
		{
			u[i] = new unit;
		}

	}
	void accept()
	{
		string str = "";
		string &refstri = str;
		int num = 0;
		int &refnum = num;
		cout << "Which country does this army belong to?: ";
		cin >> refstri;
		*name = str;
		refstri = "";
		cout << "How large is this country's armed forces?: ";
		cin >> refnum;
		*numsoldiers = num;

		for (int i = 0; i < 2; i++)
		{
			u[i]->accept();
		}

	}
	void display()
	{
		cout << "Name of university is " << *name << endl;
		cout << "Total enrolled is " << *numsoldiers << endl;
		cout << "Names of students:" << endl;
		for (int i = 0; i < 2; i++)
		{
			u[i]->display();
		}

	}
};



int main()
{
	military m;
	m.accept();
	cout << endl;
	cout << endl;
	cout << endl;
	m.display();
}