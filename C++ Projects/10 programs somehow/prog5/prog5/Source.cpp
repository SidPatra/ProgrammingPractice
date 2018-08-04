#include <iostream>
using namespace std;

void disp(int *marks)
{
	cout << "Marks = " << *marks << endl;
	if (*marks % 5 == 0) {
		cout << "Divisible by 5" << endl;
	}
}

int main()
{
	int marks[] = { 55,123,324,3241,123,345,45 };
	for (int i = 0; i <= 6; i++) {
		disp(&marks[i]);
	}
}