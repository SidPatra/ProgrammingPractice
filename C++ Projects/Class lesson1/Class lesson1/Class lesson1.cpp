// Class lesson1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class student
{
public:
	string name;
	int roll;
	int age;
	void accept()
	{
		cout << "Inside accept function" << endl;
		cout << "Name = ";
		cin >> name;
		cout << "Age = ";
		cin >> age;
		cout << "Roll number = ";
		cin >> roll;
	}
	void display()
	{
		cout << "Inside display function" << endl;
		cout << name << endl << age << endl << roll << endl;
	}
};



int main()
{
	student s1;
	student s2;
	s1.accept();
	s1.display();
	s2.accept();
	s2.display();
	return 0;
}

