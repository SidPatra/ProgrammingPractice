#include <iostream>
using namespace std;

void swapval(int *a, int *b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;

	cout << "New x value: " << *a << " and new y value: " << *b << endl;
}

int main() 
{
	int x = 10, y = 20;
	cout << "Old x value " << *(&x) << " and old y value: " << *(&y) << endl;
	swapval(&x, &y);
}