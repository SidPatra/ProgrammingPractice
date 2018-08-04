#include <iostream>
#include <string>
using namespace std;

class flyingobject
{
	int flighttime;
	string type;
public:
	flyingobject()
	{

	}

	flyingobject(string t, int n)
	{
		type = t;
		flighttime = n;
	}

	virtual void accept() = 0;

	virtual void show() = 0;
};

class bird :public flyingobject
{
	string name;
	int age;
public:
	bird()
	{

	}

	bird(string n, int a)
	{
		name = n;
		age = a;
	}

	void accept()
	{
		cout << "VIRTUAL ACCEPT OF BIRD" << endl;
		cout << "enter name of bird: ";
		cin >> name;
		cout << "enter age: ";
		cin >> age;
		cout << endl;
	}

	void show()
	{
		cout << endl;
		cout << "VIRTUAL SHOW OF BIRD" << endl;
		cout << "name of bird: " << name << endl;
		cout << "age: " << age << endl;
		cout << endl;
	}
};

int main()
{
	flyingobject *aptr;
	bird bobj;
	aptr = &bobj;
	aptr->accept();
	aptr->show();
}