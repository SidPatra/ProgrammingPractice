// Lesson 2-3 - Getline and put.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

/* int program1() Salesmen program
{
	/ Without using arrays:
	for (int n = 1; n < 3; ++n)
	{
	int total = 0;
	cout << "Enter sales for salesman " << n << ": " << endl;
	for (int x = 1; x < 7; ++x) {
	cout << "Month " << x << ": ";
	int sale = 0;
	cin >> sale;
	total = total + sale;
	}
	cout << "Total sales of salesman " << n << " = " << total <<"\n";

	}

}*/

/* Program 2 stuff
void forloop(int a[2][6], int n) {
	cout << "Sale: ";
	int z;
	cout << "[";
	for (z = 1; z < 7; ++z)
	{
		cout << z << ":" << a[n][z] << "; ";
	}
	cout << "]" << endl;
}
int program2() {
int array1[2][6] = {};
int sale = 0;
int total = 0;
for (int n = 1; n < 3; ++n)
{
cout << "Enter sales for salesman " << n << ": " << endl;
for (int x = 1; x < 7; ++x) {
cout << "Month " << x << ": ";
cin >> sale;
array1[n][x]=sale;
total = total + sale;
}
forloop(array1, n);
cout << "Total sales of salesman " << n << " = " << total << "\n";
}

Program 3 Stuff:

int dub(int a)
{
	a = a * 2;
	return a;
}

int program3() {

	int x = 1;
	int y = 3;
	int z = 7;
	x = dub(x);
	y = dub(y);
	z = dub(z);
	cout << "x=" << x << ", " << "y=" << y << ", " << "z=" << z << endl;
    return 0;
} */


