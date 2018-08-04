// 21-Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	while (true)
	{
		cout << "Enter an even positive integer: ";
		int n;
		cin >> n;
		cout << n << endl;
		if ((n % 2 == 1) && (n < 0))
		{
			cout << "You entered an odd number." << endl;
			cout << "You entered a non-positive number." << endl;
			cout << "Goodbye!" << endl;
			break;
		}
		if (n % 2 != 0)
		{
			cout << "You entered an odd number." << endl;
			cout << "Goodbye!" << endl;
			break;
		}
		if (n < 0)
		{
			cout << "You entered a non-positive number." << endl;
			cout << "Goodbye!" << endl;
			break;
		}
	}
		return 0;
}