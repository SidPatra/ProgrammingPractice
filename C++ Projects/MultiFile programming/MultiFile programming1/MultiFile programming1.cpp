// MultiFile programming1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
// Build a calculator using multiple functions

int addition(float, float);
int subtraction(float, float);
int multiplication(float, float);
int division(float, float);

int main()
{
	float x;
	float y;
	cout << "Insert x: ";
	cin >> x;
	cout << "" << endl;
	cout << "Insert y: ";
	cin >> y;
	cout << "" << endl;
	addition(x, y);
	cout << addition(x, y) << endl;
	cout << subtraction(x, y) << endl;
	cout << multiplication(x, y) << endl;
	cout << division(x, y) << endl;
    return 0;
}

