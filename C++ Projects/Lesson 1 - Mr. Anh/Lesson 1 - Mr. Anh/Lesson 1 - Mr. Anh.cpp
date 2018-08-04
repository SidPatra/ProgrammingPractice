// Lesson 1 - Mr. Anh.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void program1()
{
	string name = "";
	int age = 0;
	cout << "Enter your name: \n";
	cin >> name;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Your name is: " << name << ".\nYour age is: " << age << "." << endl;;
}

void program2()
{
	int choice;
	float celsius;
	float fahr;
	cout << "Temperature conversion Menu" << endl;
	cout << "1. Fahrenheit to Celsius" << endl;
	cout << "2. Celsius to Fahrenheit" << endl;
	cout << "Enter your choice :";
	cin >> choice;
	if (choice == 2)
	{
		cout << "Enter the temperature in Centigrade:";
		cin >> celsius;
		//		cout << "" << endl;
		cout << "The temperature in Fahrenheit is :";
		fahr = (1.8 * celsius) + 32;
		cout << fahr << endl;
	}
	else {
		cout << "Enter the temperature in Fahrenheit:";
		cin >> fahr;
		//		cout << "" << endl;
		cout << "The temperature in Celsius is :";
		celsius = (fahr - 32)*float(5) / float(9);
		cout << celsius << endl;
	}
}

void program3()
{
	int day;
	cout << "Enter number of week's day (1-7): ";
	cin >> day;
	switch (day) {
	case 1:
		cout << "Sunday";
		break;
	case 2:
		cout << "Monday";
		break;
	case 3:
		cout << "Tuesday";
		break;
	case 4:
		cout << "Wednesday";
		break;
	case 5:
		cout << "Thursday";
		break;
	case 6:
		cout << "Friday";
		break;
	case 7:
		cout << "Saturday";
		break;
	default:
		cout << "Enter a number between 1 and 7";
	}
}

int main()
{
	//program1();
	//program2();
	program3();
	return 0;
}

