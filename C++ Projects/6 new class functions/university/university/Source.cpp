#include <iostream>
#include <string>
using namespace std;


class student
{
	string *name;
	float *gpa;
public:
	student()
	{
		name = new string;
		gpa = new float;
	}
	void accept()
	{
		string str = "";
		string &refstri = str;
		float flo = 0.0;
		float &reffloat = flo;
		cout << "Name of student: ";
		cin >> refstri;
		*name = str;
		refstri = "";
		cout << "GPA of student: ";
		cin >> reffloat;
		*gpa = flo;
	}
	void display()
	{
		cout << *name << " has a GPA of " << *gpa << endl;
	}
};


class university
{
public:
	string *name;
	int *numstudents;
	student *s[2];
	university()
	{
		name = new string;
		numstudents = new int;
		for (int i = 0; i < 2; i++)
		{
			s[i] = new student;
		}

	}
	void accept()
	{
		string str = "";
		string &refstri = str;
		int num = 0;
		int &refnum = num;
		cout << "What is the name of the university?: ";
		cin >> refstri;
		*name = str;
		refstri = "";
		cout << "What is the total enrollment of the university: ";
		cin >> refnum;
		*numstudents = num;
		
		for (int i = 0; i < 2; i++)
		{
			s[i]->accept();
		}
		
	}
	void display()
	{
		cout << "Name of university is " << *name << endl;
		cout << "Total enrolled is " << *numstudents << endl;
		cout << "Names of students:" << endl;
		for (int i = 0; i < 2; i++)
		{
			s[i]->display();
		}
	}
};



int main()
{
	university u;
	u.accept();
	cout << endl;
	cout << endl;
	cout << endl;
	u.display();
}