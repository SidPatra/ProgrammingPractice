#include <iostream>
using namespace std;

void displayarray(int *arr)
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
}


int main()
{
	int arra[] = { 10, 11, 12, 13, 14 };
	displayarray(&arra[0]); // putting different number inside will start array printing at that index.
	// but won't stop it at end of array. extra spots will be filled with garbage values.
}