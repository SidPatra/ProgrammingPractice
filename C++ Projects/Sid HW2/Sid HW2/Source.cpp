#include <iostream>
#include <string>
using namespace std;

void q1()
{
	// program 1: print 1-1000
	cout << "Q1: Numbers 1-1000" << endl;
	int i;
	for (i = 1; i < 1001; i++) 
	{
		cout << i << endl;
	}
}

void q2()
{
	// program 2: take input and see if it's a prime number
	cout << "Q2: Prime # Calculator" << endl;
	cout << "Enter a number: ";
	int c, n, o;
	cin >> n;
	cout << n << endl;
	if (n == 1)
	{
		cout << "Number inputted is 1, which is prime" << endl;
	}
	else
	{
		c = 0;
		for (o = 1; o < n; o++)
			if (n / o == 1)
			{
				c += 1;
			}
	}
	if (c > 2)
	{
		cout << "Number inputted is " << n << " which is not prime" << endl;
	}
	else {
		cout << "Number inputted is " << n << " which is prime" << endl;
	}
}

void q3()
{
	// Program 3: From 1 to 100, print all prime numbers ONLY
	int a, b, d;
	for (a = 1; a <= 100; a++)
	{
		d = 0;
		for (b = 1; b <= a; b++)
		{
			if (a % b == 0)
			{
				d += 1;
			}
		}
		if (d < 3)
		{
			cout << a << endl;
		}
	}
}
void q4()
{
	char abc = 'a';
	for (abc = 'a'; abc <= 'z'; ++abc) 
	{
		cout << abc << endl;
		
	}
}

int main()
{
	
	cout << "Welcome to Sid's homework! Pick a number between 1-4 in accordance" << endl;
	cout << "with the following list: " << endl;
	cout << "1. Print numbers 1 to 10000" << endl;
	cout << "2. Prime distinguisher" << endl;
	cout << "3. All the primes from 1-100 inclusive" << endl;
	cout << "4. The alphabet" << endl;
	cout << "Insert a number between 1-4 (to end program type END in caps): ";
	string n;
	cin >> n;
	cout << n << endl;
	while (n != "END") 
	{
		if (n == "1") 
		{
			q1();
		}
		else if (n == "2") 
		{
			q2();
		}
		else if (n == "3")
		{
			q3();
		}
		else if (n == "4")
		{
			q4();
		}
		else 
		{
			cout << "Try again." << endl;
		}
		cout << "Insert a number between 1-4 (to end program type END in caps): ";
		cin >> n;
		cout << n << endl; 
	}
	cout << "Program Ended" << endl;
}