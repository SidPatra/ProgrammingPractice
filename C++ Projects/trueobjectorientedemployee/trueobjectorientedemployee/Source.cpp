#include <iostream>
#include <string>
using namespace std;

class person
{
	string name;
	int age;
public:
	person()
	{
		age = 0;
		name = "insertnamehere";
	}
	person(int a, string e)
	{
		age = a;
		name = e;
	}
	void accept()
	{
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter age: ";
		cin >> age;
	}
	void display()
	{
		cout << "Name of employee: " << name << endl;
		cout << "Age of employee: " << age << endl;
	}
};

class employee :public person
{	int salary;
	int employeeid;
public:
	employee()
	{

		salary = 0;
	}
	employee(int s, int e)
	{
		salary = s;
		employeeid = e;
	}
	void accept()
	{
		person::accept();
		cout << "Employee id: ";
		cin >> employeeid;
		
		cout << "Enter salary: ";
		cin >> salary;
	}
	void display()
	{
		person::display();
		cout << "ID of employee: " << employeeid << endl;
		cout << "Salary of employee: " << salary << endl;
	}
	~employee()
	{
		salary = 0;
		employeeid = 0;
	}
};

class insurance
{
	int amount;
public:
	insurance()
	{
		amount = 0;
	}
	insurance(int i)
	{
		amount = i;
	}
	void accept()
	{
		cout << "Enter insurance amount: $";
		cin >> amount;
	}
	void display()
	{
		cout << "Insurance amount is: $" << amount << endl;
	}
};


class doctor:public employee,public insurance // example of multiple inheritance
	// this is because more than one base/super/parent class is inherited.
{
	string specialization;
	int experience;
public:
	
	doctor()
	{
		specialization = "unstated";
		experience = 0;
	}
	doctor(int x, string y)
	{
		specialization = y;
		experience = x;
	}
	void accept()
	{
		employee::accept();
		cout << "Enter specialization: ";
		cin >> specialization;
		cout << "Enter experience: ";
		cin >> experience;
		insurance::accept();
	}
	void display()
	{
		employee::display();
		insurance::display();
		cout << "Specialization is " << specialization << endl;
		cout << "Has " << experience << " years of experience" << endl;
		insurance::display();
	}
	/*
	void setexpereince(int sal)
	{
		experience = sal;
	}
	int getexperience()
	{
		return experience;
	}
	void setspecialization(string sal)
	{
		specialization = sal;
	}
	string getspecialization()
	{
		return specialization;
	}
	~doctor()
	{
		specialization = "";
		experience = 0;
	}
	*/
};


/*
class surgeon :public doctor
{
	string typeofsurgery;
public:

};

class physician:public doctor
{
	string degree;
};*/

int main()
{
	/*
	employee e1;
	doctor d1;
	employee e2(4,4000,"bob");
	doctor d2(-1, "nothing");
	*/
	doctor d3;
	d3.accept();
	d3.display();
	/*
	cout << "Employee 1:" << endl;
	cout << "Name of employee 1: " << e1.getname() << endl;
	cout << "Age of employee 1: " << e1.getage() << endl;
	cout << "Salary of employee 1: " << e1.getsalary() << endl;
	cout << "Employee 2:" << endl;
	cout << "Name of employee 2: " << e2.getname() << endl;
	cout << "Age of employee 2: " << e2.getage() << endl;
	cout << "Salary of employee 2: " << e2.getsalary() << endl;
	cout << "Doctor 1:" << endl;
	cout << "Specialization of doctor 1: " << d1.getspecialization() << endl;
	cout << "Experience of doctor 1: " << d1.getexperience() << endl;
	cout << "Doctor 2:" << endl;
	cout << "Specialization of doctor 2: " << d2.getspecialization() << endl;
	cout << "Experience of doctor 2: " << d2.getexperience() << endl;
	*/
}