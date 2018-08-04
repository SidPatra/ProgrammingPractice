#include <iostream>
#include <string>
using namespace std;

class delegate
{
	string *name;
	int *quant;
public:
	delegate()
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
		cout << "         Delegate name: ";
		cin >> refstri;
		*name = str;
		refstri = "";
		cout << "         Executive actions pending: ";
		cin >> refnum;
		*quant = num;
	}
	void display()
	{
		cout << "         " << *name << " has id# " << *quant << " executive actions pending." << endl;
	}
};


class adminstaff
{
	string *name;
	int *adminnum;
	delegate c[2];

public:

	adminstaff()
	{
		name = new string;
		adminnum = new int;
	}
	void accept()
	{
		string str = "";
		string &refstri = str;
		int num = 0;
		int &refnum = num;
		cout << "   Name of admin-staff: ";
		cin >> refstri;
		*name = str;
		refstri = "";
		cout << "   "<< *name << "'s id#: ";
		cin >> refnum;
		*adminnum = num;
		cout << "   " << *name << " is also responsible for various delegates:" << endl;
		for (int i = 0; i < 2; i++)
		{
			c[i].accept();
		}

	}
	void display()
	{
		cout << "   " << *name << " has id# " << *adminnum << endl;
		cout << "   Reported delegate and executive actions' details: " << endl;
		for (int i = 0; i < 2; i++)
		{
			c[i].display();
		}
	}
};

class chair
{
	string *name;
	string *committee;
	adminstaff *e[2];
public:
	chair()
	{
		name = new string;
		committee = new string;
		for (int i = 0; i < 2; i++)
		{
			e[i] = new adminstaff;
		}
	}
	void accept()
	{
		string str = "";
		string &refstri = str;
		int num = 0;
		int &refnum = num;
		cout << "Name of chair: ";
		cin >> refstri;
		*name = str;
		refstri = "";
		cout << "Committee of: ";
		cin >> refstri;
		*committee = str;
		refstri = "";

		cout << *name << "'s adminstaffs' details:" << endl;
		for (int i = 0; i < 2; i++)
		{
			e[i]->accept();
		}
	}
	void display()
	{
		cout << *name << " runs " << *committee << endl;
		cout << *name << " also has adminstaffs:" << endl;
		for (int i = 0; i < 2; i++)
		{
			e[i]->display();
		}
	}
};


class conference
{
public:
	string *name;
	string *sg;
	string *pga;
	int *numparticipants;
	chair *c[2];
	conference()
	{
		name = new string;
		pga = new string;
		numparticipants = new int;
		sg = new string;
		for (int i = 0; i < 2; i++)
		{
			c[i] = new chair;
		}

	}
	void accept()
	{
		string str = "";
		string &refstri = str;
		int num = 0;
		int &refnum = num;
		cout << "What is the name of the conference?: ";
		cin >> refstri;
		*name = str;
		refstri = "";

		cout << "SG of conference: ";
		cin >> refstri;
		*sg = str;
		refstri = "";

		cout << endl;

		cout << "PGA of conference: ";
		cin >> refstri;
		*pga = str;
		refstri = "";

		cout << endl;

		cout << "How many participants are there in total?: ";
		cin >> refnum;
		*numparticipants = num;

		cout << endl;

		cout << "First, lets look at chair details:" << endl;
		
		cout << endl;

		for (int i = 0; i < 2; i++)
		{
			c[i]->accept();
			cout << endl;
		}

	}
	void display()
	{
		cout << "Name of conference is " << *name << endl;
		cout << "Total number of participants is " << *numparticipants << endl;
		cout << "Details and hierarchy of conference:" << endl;
		for (int i = 0; i < 2; i++)
		{
			c[i]->display();
		}

	}
};

int main()
{
	conference c;
	c.accept();
	cout << endl;
	cout << endl;
	cout << endl;
	c.display();
}