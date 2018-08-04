#include <iostream>
#include <string>
using namespace std;

/* Programs to make:
1. Calculator that lets you choose between addition and subtraction, and then lets you add or subtract 2 number
2. Build a function of your own that takes inputs for an array, builds it, and then gives you an output
3. Make a mountain, but different way. So, with input 5:
			1
		  2 1
		3 2 1
	  4 3 2 1
	5 4 3 2 1
4. Make 3 'addition' programs of the same name, one that takes 2, one that takes 3, and another that takes 4 inputs and adds them
	
5. Function that takes different data types into account*/

void q1() {
	cout << "Do you want to add two numbers or subtract them? Type '+' if you want to add, type '-' if you want to subtract." << endl;
	cout << "Type here: ";
	char aors;
	int num1, num2;
	cin >> aors;
	if (aors == '+')
	{
		cout << "Insert num1: " << endl;
		cin >> num1;
		cout << "Insert num2: " << endl;
		cin >> num2;
		cout << "Sum is: " << num1 + num2 << endl;
	}
	else if (aors == '-')
	{
		cout << "Insert num1: " << endl;
		cin >> num1;
		cout << "Insert num2: " << endl;
		cin >> num2;
		cout << "Difference is: " << num1 - num2 << endl;
	}
}

void q2() 
{
	int arra[5];
	for (int a = 0; a < 5; a++) 
	{
		cout << "Insert new point in array: ";
		cin >> arra[a];
	}
	char arrb[5];
	cout << "Now list some names of animals" << endl;
	for (int b = 0; b < 5; b++)
	{
		cout << "Insert new point in array: ";
		cin >> arrb[b];
		cout << "" << endl;
	}
	cout << "You have ";
	for (int c = 0; c < 5; c++) 
	{
		cout << arra[c] << " " << arrb[c] << "s, ";
	}
	cout << "and " << arra[5 - 1] << " " << arrb[5 - 1] << endl;
}

void q3()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	for (int d = num; d >= 0; d--)
	{
		for (int e = 1; e <= num; e++)
		{
			if (e < d + 1) {
				cout << ' ';
			}
			else if (e > d) {
				cout << num + 1 - e;
			}
		}
		cout << "" << endl;
	}
}

int main() 
{
	cout << "Welcome to Sid's homework! Pick a number between 1-4 in accordance" << endl;
	cout << "with the following list: " << endl;
	cout << "1. Add/Sub calc" << endl;
	cout << "2. Array builder and outputter" << endl;
	cout << "3. Mountain backwards" << endl;
	cout << "4. Addition program that takes different numbers of inputs" << endl;
	cout << "5. Function that takes different data types into account" << endl;
	cout << "Insert a number between 1-5 (to end program type END in caps): ";
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
		}/*
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
		cout << "Insert a number between 1-4 (to end program type END in caps): ";
		cin >> n;
		cout << n << endl;
	}
	cout << "Program Ended" << endl;
}