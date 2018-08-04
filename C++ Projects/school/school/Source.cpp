#include <iostream>
#include <string>
using namespace std;

class student
{
	string name;
	int age;
public:
	student()
	{
		age = 0;
		name = "";
	}
	void accept()
	{
		cout << "Name of student";
		cin >> name;
		cout << endl;
		cout << "Age of student";
		cin >> age;
	}
	void display()
	{
		cout << "Name of student " << name << endl;
		cout << "Age of student " << age << endl;
	}
};

class teacher
{
	string name;
public:
	teacher()
	{
		name = "";
	}
	void accept()
	{
		cout << "Name of teacher";
		cin >> name;
		cout << endl;
	}
	void display()
	{
		cout << "Name of teacher " << name << endl;
	}
};

class school
{
	
public:

	int *numclassrooms;
	int *numteachers;
	string *name;
	student *s1;
	student *s2;
	teacher *t;

	school()
	{
		numclassrooms = new int;
		numteachers = new int;
		name = new string;
		s1 = new student;
		s2 = new student;
		t = new teacher;
	}


	void accept()
	{
		cout << "Name of school: ";
		cin >> *name;
		cout << "Number of classrooms: ";
		cin >> *numclassrooms;
		cout << "Number of teachers: ";
		cin >> *numteachers;
		s1->accept();
		s2->accept();
		t->accept();
	}

	void display()
	{
		cout << "Name of school: " << *name << endl;
		cout << "Number of classrooms: "<< *numclassrooms<<endl;
		cout << "Number of teachers: " << *numteachers << endl;
		s1->display();
		s2->display();
		t->display();
	}

};

void function(school school)
{
	school.accept();
	school.display();
}

int main()
{
	school school;
	string pass;
	cout << "Password is password, so just type that in: ";
	cin >> pass;
	cout << endl;
	if (pass == "password")
	{
		function(school);
	}
	else {
		cout << "Bad password - call security" << endl;
	}
	
}