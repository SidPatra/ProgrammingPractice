// Python HW in C++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int ifs(int c, string g)
{
	int p;
	if (g == "A") {
		p = 4 * c;
		return p;
	}
	else if (g == "A-") {
		p = 3.67 * c;
		return p;
	}
	else if (g == "B+") {
		p = 3.33*c;
		return p;
	}
	else if (g == "B") {
		p = 3.0*c;
		return p;
	}
	else if (g == "B-") {
		p = 2.67*c;
		return p;
	}
	else if (g == "C+") {
		p = 2.33*c;
		return p;
	}
	else if (g == "C") {
		p = 2.00*c;
		return p;
	}
	else if (g == "D") {
		p = 1.00*c;
		return p;
	}
	else if (g == "A-") {
		p = 0.0;
		return p;
	}
	else {
		p = 1000;
		return p;
	}
}

int main()
{
	int p;
	cout << "Please enter the number of credits you are taking: ";
	int c;
	cin >> c;
	cout << c << endl;
	cout << "Please enter your letter grade: ";
	string g;
	cin >> g;
	cout << g << endl;
	if (ifs(c, g) != 1000)
		cout << "You get " << ifs(c, g) << " GPA points for that course. ";
	
	else {
		cout << "Invalid grade!" << endl;
	}
    return 0;
}

