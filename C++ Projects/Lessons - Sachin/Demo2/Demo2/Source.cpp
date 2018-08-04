#include<iostream>
using namespace std;

int main()
{
	int i;
	int j;
	i = 10;
	j = 20;

	int add;
	int sub;
	int mul;
	int div;
	add = i + j;
	sub = j - i;
	mul = i*j;
	div = j / i;

	cout << i << endl;
	cout << j << endl;
	
	cout << "addition = "<<add<<endl;
	cout << "subtraction = " << sub << endl;
	cout << "multiplaction = " << mul << endl;
	cout << "division = " << div << endl;

	return 0;
}