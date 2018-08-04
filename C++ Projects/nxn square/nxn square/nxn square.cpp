// nxn square.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	cout << "Enter an integer: ";
	int n;
	cin >> n;
	cout << n << endl;
	int i;
	int j;
	int z = 0;
	for (i = 0; i <= n; i++) {
		for (j = 0; j <= n; j++) {
			z = i * j;
			cout << z << " ";
		}
		cout << "" << endl;
	}
	
    return 0;
}

