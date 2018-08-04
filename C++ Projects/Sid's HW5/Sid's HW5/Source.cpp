#include <iostream>
#include <string>
using namespace std;


int add(int x[5], int y[5]) 
{
	int z[5];
	//int sum = 0;
	for (int a = 0; a < 4; a++)
	{
		z[a] = x[a] + y[a]; //
		cout << z[a] << ",";
		//sum += z[a];
	}
	z[4] = x[4] + y[4];
	cout << z[4] << endl;
	//sum += z[4];
	return z[5];
}

void q1() // Something is wrong - somehow the stack around arra is corrupted.
{
	int arra[5], arrb[5];
	cout << "Make your first array: " << endl;
	for (int a = 0; a < 5; a++) 
	{
		cout << "Insert number here: ";
		cin >> arra[a];
	}
	cout << "Make your second array: " << endl;
	for (int a = 0; a < 5; a++)
	{
		cout << "Insert number here: ";
		cin >> arrb[a];
	}
	//flushall();
	cout << "You arrays are: " << endl;
	cout << "Array 1: ";
	for (int a =0; a< 4; a++) 
	{
		cout << arra[a] <<","; //
		//cout<< some
	}
	cout << arra[4] << endl;
	cout << "   +" << endl;
	cout << "Array 2: ";
	for (int a = 0; a < 4; a++)
	{
		cout << arrb[a] << ","; //
	}
	cout << arrb[4] << endl;
	cout << "   =" << endl;
	cout << "Array 3: ";
	

	cout << add(arra, arrb) << endl;
	cout << "" << endl;
}

void q2()
{
	int e, a, b,d;
	cout << "Enter a number: ";
	cin >> e;
	a = e + 1;
	b = e - 1;
	d = 0;
	for (int y = 1; y <= e; y++) 
	{
		d = 0;
		for (int x = (2*e)-1; x >= 1; x--) 
		{
			if (x >= a) 
			{
				cout << " ";
				
			}
			else if (x <= b) 
			{
				cout << " ";
				
			}
			else if ((x < b) && (x > a)) 
			{
				d += 1;
				cout << d << " ";
			}
		}
		a += 1;
		b -= 1;
		cout << "" << endl;
	}
}

int main() 
{
	cout << "Welcome to Sid's homework! Pick a number between 1-4 in accordance" << endl;
	cout << "with the following list: " << endl;
	cout << "1. Array adder" << endl;
	cout << "2. Pyramid of numbers" << endl;
	cout << "Insert a number between 1-2 (to end program type END in caps): ";
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
		/*
		else if (n == "3")
		{
			q3();
		}
		 else if (n == "4")
		 {
		 q4();
		 }
		 else if (n == '5')
		 q5();*/
		else
		{
			cout << "Try again." << endl;
		}
		cout << "Insert a number between 1-2 (to end program type END in caps): ";
		cin >> n;
		cout << n << endl;
	}
	cout << "Program Ended" << endl;
}