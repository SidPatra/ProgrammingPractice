#include <iostream>
#include <string>
using namespace std;

class vehicle
{
	int numofwheels;
	string type;
public:
	vehicle()
	{
		numofwheels = 0;
		type = "works";
	}

	vehicle(string t, int n)
	{
		type = t;
		numofwheels = n;
	}

	virtual void accept()
	{
		cout << "VIRTUAL ACCEPT OF vehicle" << endl;
		cout << "enter type of vehicle: ";
		cin >> type;
		cout << "enter number of wheels: ";
		cin >> numofwheels;
		cout << endl;
	}

	virtual void show()
	{
		cout << endl;
		cout << "VIRTUAL SHOW OF vehicle" << endl;
		cout << "type of vehicle: " << type << endl;
		cout << "number of wheels: " << numofwheels << endl;
		cout << endl;
	}
};

class car :public vehicle
{
	string name;
	int age;
public:
	car()
	{
		name = "name";
		age = 0;
	}

	car(string n, int a)
	{
		name = n;
		age = a;
	}

	void accept()
	{
		vehicle::accept();
		cout << "VIRTUAL ACCEPT OF CAR" << endl;
		cout << "enter name of car: ";
		cin >> name;
		cout << "enter age: ";
		cin >> age;
		cout << endl;
	}

	virtual void show()
	{
		vehicle::show();
		cout << endl;
		cout << "VIRTUAL SHOW OF CAR" << endl;
		cout << "name of car: " << name << endl;
		cout << "age: " << age << " years" << endl;
		cout << endl;
	}
};

int main()
{
	vehicle *aptr;
	car dobj;
	aptr = &dobj;
	aptr->accept();
	aptr->show();

	car *dptr;
	((car *)aptr)->accept();
	((car *)aptr)->show();
}