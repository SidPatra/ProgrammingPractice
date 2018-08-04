#include <iostream>
#include <string>
using namespace std;

void func1(int x)
{
	x = 20;
	cout <<"While in function " << x << endl;
}

void func2(int *x)
{
	*x = 21;
	cout << "While in function " << *x << endl;
}

void func3(int &x)
{
	
	x = 22;
	cout << "While in function " << x << endl;
}

void func4(int *x)
{
	int z = 12034;
	int *y = &z;
	x = y;
	cout << "While in function " << &x << endl;
}


void board()
{
	int cnt = 65;
	char arr[2][2];
	for (int i = 0; i < 15; i++)
	{

		for (int j = 0; j < 15; j++)
		{

			arr[i][j] = cnt;
			cout << arr[i][j] << " |";
			
		}
		cnt += 1;
		cout << endl;
	}
}


int main() {
	int i = 10;
	cout << i << endl;
	int &ref = i; // reference has been made. ref is linked to i.
	cout << ref << endl;
	int j = 5;
	ref = j;
	cout << j << " " << ref << endl;
	cout << i << endl;
	// at this point, if program is run, the output is:
	// 10 <- ref
	// 5 5 <- j and ref respectively, after ref is redefined
	// 5 <- i
	// So basically, whatever you do to ref will happen to i.
	// when you create a reference, you must define it with something. 
	// otherwise, you'll mess up. it doesn't work otherwise.
	func1(i); // even if you change the value of i in func1, value in main won't change.
	cout<< "Back outside function " << i << endl; 
	func2(&i); // func2 works because pointers
	cout << "Back outside function " << i << endl;
	func3(i);
	cout << "Back outside function " << i << endl;
	// everything above works as planned; the functions successfully change everything that
	// needs to be changed in main.
	func4(&i); // these two lines are an indicator of something wrong. function will print the
	cout << "Back outside function " << &i << endl; // address of i, and so does this line.
	// their addresses inside and out of the functions are different. that shouldn't happen.

	// Basic difference: Acts like a pointer, but if you change its values and addresses, it 
	// can't point anywhere else.
	// read more - p47(reference), p81(reference), p123(passing objects) especially in balaguruswami.
	// figure out other differences between pointers and references.
	// remind him of copy-constructor
	cout << endl;
	board();

}