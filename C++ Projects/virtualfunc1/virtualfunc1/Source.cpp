#include <iostream>
#include <string>
using namespace std;

class flyingobjects
{
	string definition;
	int flighttime;
public:
	flyingobjects()
	{
		definition = "nothing";


	}

	flyingobjects(string d, int n)
	{
		definition = d;
		flighttime = n;
	}

	virtual void show(string d, int n)
	{
		definition = d;
		flighttime = n;
		cout << "VIRTUAL SHOW OF flyingobjects" << endl;
		cout << "definition of flyingobjects: " << definition << endl;
		cout << "Maximum time spent in sky: " << flighttime << " hours" << endl;
		cout << endl;
	}

};

class bird :public flyingobjects
{
	string definition;
	int numwings;
public:
	bird()
	{
		definition = "an animal that is related to dinosaurs with light bones and feathers, and may be capable of flight";
		numwings = 2;
	}

	bird(string d, int t)
	{
		definition = d;
		numwings = t;
	}

	void show(string d, int t)
	{
		definition = d;
		numwings = t;

		//this will enable me to call one function and display the base and this one
		flyingobjects::show("a plane figure with at least three straight sides and angles, and typically five or more", 3);

		//paste show of regular flyingobjects
		cout << "VIRTUAL SHOW OF REGULAR flyingobjects" << endl;
		cout << "definition of a regular flyingobjects: " << definition << endl;
		cout << "number of wings: " << numwings << endl;
		cout << endl;
	}
};

class swallow :public bird
{
	string definition;
	int traveldistance;
public:
	swallow()
	{

	}

	swallow(string d, int s)
	{
		definition = d;
		traveldistance = s;
	}

	void show(string d, int s)
	{
		definition = d;
		traveldistance = s;
		//calls show function of regular flyingobjects which calls show function of base class
		bird::show("a flying animal with feathers", 4);

		cout << "VIRTUAL SHOW OF swallow" << endl;
		cout << "definition of swallow: " << definition << endl;
		cout << "Travel distance of swallow: " << traveldistance << " per day" << endl;
		cout << endl;
	}
};

int main()
{
	flyingobjects *ptr;
	//flyingobjects pobj;
	//ptr = &pobj;
	//ptr->show("a plane figure with at least three straight sides and angles, and typically five or more", 3);
	//
	//bird rpobj;
	//ptr = &rpobj;
	//ptr->show("a flyingobjects that is equiangular and equilateral", 4);//second show must also have same type of parameter

	swallow sobj;
	ptr = &sobj;
	ptr->show("a migratory bird that exists in north america and europe", 200);//calls show of swallow which 
	//calls show of regular flyingobjects which calls show of flyingobjects
}