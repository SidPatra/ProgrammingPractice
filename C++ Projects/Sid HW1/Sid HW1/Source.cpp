#include <iostream>
#include <string>
using namespace std;
void q1()
{
	cout << "Program 1: My name" << endl;
	cout << "Siddharth Patra" << endl;
}

void q2()
{
	cout << "Program 2: Numbers 1-10" << endl;
	cout << "1, 2, 3, 4, 5, 6, 7, 8, 9, 10" << endl;
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
	cout << "5" << endl;
	cout << "6" << endl;
	cout << "7" << endl;
	cout << "7" << endl;
	cout << "8" << endl;
	cout << "9" << endl;
	cout << "10" << endl;
}
void q3(int i, int j)
{
	cout << "Program 3: Calculator with set variables" << endl;
	cout << "Numbers are: " << i << " and " << j << endl;
	int add, multi, sub;
	add = i + j;
	multi = i * j;
	sub = i - j;
	float divi = (float)i / (float)j;
	cout << "Addition: " << add << endl;
	cout << "Subtraction: " << sub << endl;
	cout << "Multiplication: " << multi << endl;
	cout << "Division: " << divi << endl;
}

void q4(int i, int j)
{
	cout << "Program 4: User input addition" << endl;
	cout << "Insert #1: ";
	cin >> i;
	cout << i << endl;
	cout << "Insert #2: ";
	cin >> j;
	cout << j << endl;
	cout << "Sum is: " << i + j << endl;
}

int main()
{
	int i, j;
	i = 20;
	j = 40;
	cout << "Welcome to Sid's homework! Pick a number between 1-4 in accordance" << endl;
	cout << "with the following list: " << endl;
	cout << "1. Name" << endl;
	cout << "2. Numbers 1-10" << endl;
	cout << "3. Calculator with i = 20 and j = 40" << endl;
	cout << "4. Addition with user input" << endl;
	cout << "Insert a number between 1-4 (to end program type END in caps): ";
	string n;
	cin >> n;
	cout << n << endl;
	while (n != "END") {
		if (n == "1") {
			q1();
		}
		else if (n == "2") {
			q2();
		}
		else if (n == "3") {
			q3(i, j);
		}
		else if (n == "4") {
			q4(i, j);
		}
		else {
			cout << "Try again." << endl;
		}
		cout << "Insert a number between 1-4 (to end program type END in caps): ";
		cin >> n;
		cout << n << endl;
	}

	cout << "Program Ended" << endl;
	return 0;
}
