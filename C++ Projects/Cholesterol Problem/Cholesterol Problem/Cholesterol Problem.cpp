// Cholesterol Problem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	cout << "Please enter the LDL: ";
	int ldl;
	cin >> ldl;
	cout << "" << endl;
	cout << "Please enter the HDL: ";
	int hdl;
	cin >> hdl;
	cout << "" << endl;
	cout << "Please enter triglycerides: ";
	int tri;
	cin >> tri;
	cout << "" << endl;

	int g = 0;
	int b = 0;
	int bo = 0;

	if (ldl > 60)
	{
		g = g + 1;
	}
	else if (ldl < 50)
	{
		b = b + 1;
	}
	else {
		bo = bo + 1;
	}
	if (tri < 150)
	{
		g = g + 1;
	}
	else if (tri > 200)
	{
		b = b + 1;
	}
	else {
		bo = bo + 1;
	}

	if ((g >= 2) && (b < 1) && (g < 2))
	{
		cout << "Cholesterol looks great!" << endl;
	}
	else if (((g < 2) && (b == 0)) && (3 > bo))
	{
		cout << "Borderline" << endl;
	}
	else 
	{
		cout << "Bad" << endl;
	}

}

