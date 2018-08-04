#include <iostream>
#include <string>
using namespace std;

class vehicle
{
	string definition;
	int numofsidelimit;
public:
	vehicle()
	{

	}

	vehicle(string d, int n)
	{
		definition = d;
		numofsidelimit = n;
	}

	virtual void show(string d, int n) = 0;

};

class regularvehicle :public vehicle
{
	string definition;
	int numwheels;
public:
	regularvehicle()
	{

	}

	regularvehicle(string d, int t)
	{
		definition = d;
		numwheels = t;
	}

	void show(string d, int t)
	{
		definition = d;
		numwheels = t;

		cout << "VIRTUAL SHOW OF REGULAR vehicle" << endl;
		cout << "definition of a regular vehicle: " << definition << endl;
		cout << "number of equal sides and angles in a camry: " << numwheels << endl;
		cout << endl;
	}
};

class camry :public regularvehicle
{
	string definition;
	int transmissiontype;
public:
	camry()
	{

	}

	camry(string d, int s)
	{
		definition = d;
		transmissiontype = s;
	}

	void show(string d, int s)
	{
		definition = d;
		transmissiontype = s;
		//calls show function of regular vehicle which calls show function of base class
		regularvehicle::show("a vehicle produced by toyota in the '90s. very reliable.", 4);

		cout << "VIRTUAL SHOW OF camry" << endl;
		cout << "definition of camry: " << definition << endl;
		cout << "type of transmission: " << transmissiontype << endl;
		cout << endl;
	}
};

int main()
{
	vehicle *ptr;
	//vehicle pobj;
	//ptr = &pobj;
	//ptr->show("a plane figure with at least three straight sides and angles, and typically five or more", 3);
	//
	//regularvehicle rpobj;
	//ptr = &rpobj;
	//ptr->show("a vehicle that is equiangular and equilateral", 4);//second show must also have same type of parameter

	camry sobj;
	ptr = &sobj;
	ptr->show("a plane figure with four equal straight sides and four right angles", 4);//calls show of camry which 
}