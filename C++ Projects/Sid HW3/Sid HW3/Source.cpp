#include <iostream>
using namespace std;



void q1() {
	// Program 1: Switch Case
	cout << "Enter a number between 1 and 10: ";
	int n;
	cin >> n;
	cout << n << endl;
	while (n != 999) {
		switch (n) {
		case 1:
		case 2:
		case 3:
		case 5:
		case 7:
			cout << "Is prime" << endl;
			break;
		case 4:
		case 6:
		case 8:
		case 10:
			cout << "Is composite" << endl;
			break;
		default:
			cout << "Insert a number within given range" << endl;
			break;
		}
		cout << "Enter a number between 1 and 10: ";
		cin >> n;
	}
}

void q2() 
{
	// Program 2: For any character entered, print one by one - not done yet!!!!
	int nums, pow10;
	pow10 = 1;
	cout << "Enter a number with more than one digit: ";
	cin >> nums;
	for (int i = 1; i > 1; i++) {
		pow10 = pow(10, i);
		if (nums < pow10) {
			pow10 /= 10;
			cout << nums / pow10;
			break;
		}
		else {
			continue;
		}
	}	
}

void q3() {
	// Program 3: Mountain of numbers
	int i, j, k;
	cout << "Input a number here: ";
	cin >> k;
	cout << n << endl;
	for (i = k; (i <= k) && (i>0); i--) 
	{
		for (j = 1; j <= i; j++) 
		{
			cout << j;
		}
		cout << "" << endl;
	}
}

void q4() 
{
	// Program 4: Print char number
	char x;
	cout << "Enter a character here: ";
	cin >> x;
	while (x != 'END') {
		cout << int(x) << endl;
		cout << "Enter a character here: ";
		cin >> x;
	}
}

int main()
{
	cout << "Welcome to Sid's homework! Pick a number between 1-4 in accordance" << endl;
	cout << "with the following list: " << endl;
	cout << "1. Switchcase example" << endl;
	cout << "2. Print number one by one - incomplete" << endl;
	cout << "3. Mountain of numbers" << endl;
	cout << "4. Character number" << endl;
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
	}
	cout<< "Program ended" << endl;
}