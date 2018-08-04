// Timestable.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	cout << "Enter a number: ";
	int n;
	cin >> n;
	cout << n << endl;
	int i;
	for (i = 0; i < 13; i++)
	{
		cout << n << " X " << i << " = " << i*n << endl;
	}
    return 0;
}

