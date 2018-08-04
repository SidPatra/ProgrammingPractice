// Lesson 2 - Mr. Anh.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	cout << "Enter a character: " << endl;
	char a;
	int count = 0;
	const char b = '\n';
	cin.get(a);
	while (a != b)
	{
		count = count + 1;
		cin.get(a);
	}
	cout << "Word has " << count << " characters" << endl;
    return 0;
}
