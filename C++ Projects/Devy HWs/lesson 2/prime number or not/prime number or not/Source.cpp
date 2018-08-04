#include <iostream>
using namespace std;

int main()
{
	int count;//a counter: counts all the numbers in a for loop
	int n;//input number: number to test if prime
	int j;//divisibility score: if condition of for loop is accommplished, j will increase by 1
	j = 0;
	cout << "enter number:";
	cin >> n;

	for (count = 1; count < n; count++)
	{
		if (n%count == 0)
		{
			j = j + 1;
		}
	}
	if (j > 1)
	{
		cout << "this is a composite number" << endl;
	}
	else
	{
		cout << "this is a prime number" << endl;
	}
}