#include <iostream>
#include <string>
using namespace std;

class patient
{
public:
	int num;
	string name;
	void getvalues()
	{
		cout << "Insert name of patient: ";
		cin >> name;
		cout << "Insert num of patient: ";
		cin >> num;
	}
	void display()
	{
		cout << "Details of patient: " << endl;
		cout << "Patient number is " << num << " and name is " << name << endl;
	}
};

class doctors
{
public:
	int num;
	string name;
	void getvalues()
	{
		cout << "Insert name of doctor: ";
		cin >> name;
		cout << "Insert num of doctor: ";
		cin >> num;
	}
	void display()
	{
		cout << "Details of doctor: " << endl;
		cout << "Doctor number is " << num << " and name is " << name << endl;
	}
};

class hospital
{
public:
	patient p[2];
	doctors d[2];
	string name;
	int cots;

	void acceptvalues()
	{
		cout << "Insert name of hospital: ";
		cin >> name;
		cout << "Insert number of cots available: ";
		cin >> cots;
		for (int i = 0; i <= 1; i++)
		{
			p[i].getvalues();
		}
		for (int i = 0; i <= 1; i++)
		{
			d[i].getvalues();
		}
	}
	
	void displayvalues()
	{
			cout << "Hospital name: " << name << endl;
			cout << "Number of cots available: " << cots << endl;
			for (int i = 0; i <= 1; i++)
			{
				p[i].display();
			}
			for (int i = 0; i <= 1; i++)
			{
				d[i].display();
			}


		}

};

int main()
{
	hospital h;
	h.acceptvalues();
	h.displayvalues();
}