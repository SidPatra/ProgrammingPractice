// Blackjack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int n = 0;
	while (n <= 21) 
	{
		int c;
		cout << "Please enter a number between 1 and 11: " << endl;
		cin >> c;
		cout << c << endl;
		if ((c > 0) && (c < 12))
		{
			n = n + c;
		}
		else 
		{
			cout << "Out of range; rejected" << endl;
		}
	}
	cout << "The total is " << n << endl;
	return 0;
}

