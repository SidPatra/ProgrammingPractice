#include <iostream>
#include <string>
using namespace std;

struct patient 
{
	string name;
	int cotnum;
	int billnum;
	float bill;
};

struct doc
{
	string name;

};

struct hospital 
{
	string name;
	patient p[3];
	doc d[3];
};

void accepthos(hospital *h)
{
	cout << "Hospital name is: ";
	cin >> h->name;
	for (int i = 0; i<=2; i++)
	{
		cout << "List patient: ";
		cin >> h->p[i].name;
		cout << "Patient's cot number: ";
		cin >> h->p[i].cotnum;
		cout << "Patient's bill number: ";
		cin >> h->p[i].billnum;
		cout << "Patient's bill: ";
		cin >> h->p[i].bill;
	}
	for (int i = 0; i <= 2; i++)
	{
		cout << "Doctor's name: ";
		cin >> h->d[i].name;
	}
}

void displayfunc(hospital h)
{
	cout << h.name << endl;
	cout << "Doctors: ";
	for (int i = 0; i <= 2; i++)
	{
		cout << h.d[i].name << " ";
	}
	cout << "" << endl;
	for (int i = 0; i <= 2; i++)
	{
		cout << h.p[i].name << " on cot number " << h.p[i].cotnum << ", with billnumber " << h.p[i].billnum << " and payments due: " << h.p[i].bill << endl;
	}

}

void searchfunc(hospital *h)
{
	string searchp;
	cout << "Initiating search function: " << endl;
	cout << "Insert patient name: ";
	cin >> searchp;
	for (int i = 0; i <= 2; i++) 
	{
		if (h->p[i].name == searchp) 
		{
			cout << "Patient found" << endl;
			cout << "Bill number: " << h->p[i].billnum << endl;
			cout << "Bill to pay: " << h->p[i].bill << endl;
			cout << "Cot number used: " << h->p[i].cotnum << endl;
		}
	}
}

int main()
{
	hospital h;
	accepthos(&h);
	displayfunc(h);
	searchfunc(&h);
}