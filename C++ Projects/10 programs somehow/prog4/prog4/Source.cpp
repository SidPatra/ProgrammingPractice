#include <iostream>
using namespace std;


void display(int m, int i)
{
	cout << "Marks of student "<< i<< ": "<< m << endl;
}

int main() 
{
	int marks[] = { 10, 30, 234, 123, 1, 22, 50 };
	for (int i = 0; i <= 6; i++)
	{
		display(marks[i], i);
	}
}