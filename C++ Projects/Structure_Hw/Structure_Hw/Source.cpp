#include <iostream>
#include <string>
using namespace std;



struct students 
{
	float grade;
	int id;
	string name;
};
struct teachers
{
	string name;
	string subject;
};

struct school
{
	string name;
	students s[2];
	teachers t[2];
};

void studentsfunc()
{
	students s[2];
	for (int i = 0; i < 2; i++)
	{
		cout << "ID #: ";
		cin >> s[i].id;
		cout << "Name: ";
		cin >> s[i].name;
		cout << "Marks: ";
		cin >> s[i].grade;
	}
}

void teachersfunc()
{
	teachers t[2];
	for (int i = 0; i < 2; i++)
	{
		cout << "Name: ";
		cin >> t[i].name;
		cout << "Subject: ";
		cin >> t[i].subject;
	}
}

void schoolfunc()
{
	teachers sch[2];
	for (int i = 0; i < 2; i++)
	{
		cout << "Name: ";
		cin >> sch[i].name;
	}
}

void displayStud()
{
	students s[2];
	for (int i = 0; i < 2; i++)
	{
		cout << "ID #: ";
		cout << s[i].id << endl;
		cout << "Name: ";
		cout << s[i].name << endl;
		cout << "Marks: ";
		cout << s[i].grade << endl;
	}
}

void chooser(string n)
{
	if (n == "1")
	{
		studentsfunc();
	}
	else if (n == "2")
	{
		teachersfunc();
	}
	else if (n == "3")
	{
		schoolfunc();
	}
	else
	{
		cout << "Enter a valid option" << endl;
	}
}

int main()
{
	students s[6];
	string choice;
	cout << "Define structure of: " << endl;
	cout << "1. Students" << endl;
	cout << "2. Teachers" << endl;
	cout << "3. School" << endl;
	cout << "Pick the appropriate number: ";
	cin >> choice;
	while (choice != "END") 
	{
		chooser(choice);
		cout << "Define structure of: " << endl;
		cout << "1. Students" << endl;
		cout << "2. Teachers" << endl;
		cout << "3. School" << endl;
		cout << "Pick the appropriate number: ";
		cin >> choice;
	}
	
}