// Mr. Anh HW 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;


int factorial(int x) //For progam1
{
	int z = 1;
	for (int i = 1; i < x+1; i = i + 1)
	{
		z = i * z;
	}
	return z;
}

int RectangleMenu(int x) //For program2
{
	if (x = 1)
	{
		int l;
		int b;
		cout << "Enter Length and Breadth: ";
		cin >> l;
		cout << " ";
		cin >> b;
		int area;
		area = l*b;
		return area;
	}
	if (x = 2)
	{
		int l;
		int b;
		cout << "Enter Length and Breadth: ";
		cin >> l;
		cout << " ";
		cin >> b;
		int perimeter;
		perimeter = (2 * l) + (2 * b);
		return perimeter;
	}
	if (x = 3)
	{
		float l;
		float b;
		cout << "Enter Length and Breadth: ";
		cin >> l;
		cout << " ";
		cin >> b;
		int diagonal;
		diagonal = (l*l) + (b*b);
		diagonal = pow(diagonal, 0.5);
		return diagonal;

	}
	if (x = 4)
	{
		cout << "Exit program" << endl;
	}
}
void bmi(int b) // for program3 - Fix it. You can't return string values, so manipulate it as a void.
{
	if (b < 18)
	{
		return "Underweight";
	}
	if (24 > b > 18)
	{
		return "Normal weight";
	}
	if (30 > b > 24)
	{
		return "Overweight";
	}
	if (b > 30)
	{
		return "Obese";
	}

}

int main()
{/*
	cout << "Program 1: Factorial of an integer" << endl;
	int x;
	cout << "Enter an integer: ";
	cin >> x;
	cout << "The factorial of " << x << " is ";
	cout << factorial(x) << endl; 
	cout << "Program 2: Rectangle Menu" << endl;
	cout << "1. Area" << endl;
	cout << "2. Perimeter" << endl;
	cout << "3. Diagonal" << endl;
	cout << "4. Exit" << endl;
	int a;
	cin >> a;
	cout << RectangleMenu(a);
	cout << "" << endl; */
	cout << "Program 3: BMI interpreter" << endl;
	cout << "Enter your BMI: " << endl;
	int b;
	cin >> b;
	cout << "" << endl;
	bmi(b);

}

