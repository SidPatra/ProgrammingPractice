#include <iostream>
#include <string>
using namespace std;

class patient
{
	friend void somefunc(patient p);
	int *num; // we turned all values like this into pointers
	string *name;
	
public:
//2.	// since it doesn't say public, it is by default, private.
	// class data-members are by-default private (unless we say it's public or something)
	// all function data in main is public (generally)
	

	patient() //3. never make constructor private
	{
		cout << "inside constructor" << endl;
	//	*num = 3;
	//	*name = "hello";
		num = new int;
		name = new string;
	}
	patient(int x, string y)
	{
		num = new int;
		name = new string;
		x = 3;
		y = "hello";

		*num = x;
		*name = y;
	}

	void getvalues()
	{
		cout << "Insert name of patient: ";
		cin >> *name;
		cout << "Insert num of patient: ";
		cin >> *num;
	}

	void display()
	{
		cout << "Details of patient: " << endl;
		cout << "Patient number is " << *num << " and name is " << *name << endl;
	}
};

class doctors
{
public:
	int *num;
	string *name;
	doctors() //3. never make constructor private
	{
		cout << "inside constructor" << endl;
		//	*num = 3;
		//	*name = "hello";
		num = new int;
		name = new string;
		*num = 0;
		*name = "";
	}
	doctors(int x, string y)
	{
		num = new int;
		name = new string;

		*num = x;
		*name = y;
	}
	void getvalues()
	{
		cout << "Insert name of doctor: ";
		cin >> *name;
		cout << "Insert num of doctor: ";
		cin >> *num;
	}
	void display()
	{
		cout << "Details of doctor: " << endl;
		cout << "Doctor number is " << *num << " and name is " << *name << endl;
	}
};

class hospital
{
public:
	patient *p1;
	doctors *d1;
	string *name;
	int *cots;

	hospital()
	{
		cots = new int;
		name = new string;
		d1 = new doctors;
		p1 = new patient;
	}

	void acceptvalues()
	{
		cout << "Insert name of hospital: ";
		cin >> *name;
		cout << "Insert number of cots available: ";
		cin >> *cots;
		p1->getvalues();
		d1->getvalues();
	}

	void displayvalues()
	{
		cout << "Hospital name: " << *name << endl;
		cout << "Number of cots available: " << *cots << endl;
		p1->display();
		d1->display();
	}

};
// 4. 
void somefunc(patient p)
{
//1.	cout << "something" << endl;
	cout << *p.name <<endl;
	cout << *p.num << endl;
}

void somenew(doctors d)
{
	//1.	cout << "something" << endl;
	cout << *d.name << endl;
	cout << *d.num << endl;
}

int main()
{
//1.	
hospital h;
	h.acceptvalues();
	h.displayvalues();
	patient p(3,"hello");    //p() is anonymous object, will learn later
/*	somefunc(p);
	doctors d(3, "hello");
	somenew(d);*/
}

// make a school with all components being pointers
// - teachers, students, you know the drill
// make a house
// - rooms,