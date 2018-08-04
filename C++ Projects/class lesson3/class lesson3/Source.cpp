#include <iostream>
#include <string>
using namespace std;

// DESTRUCTORS!!!!!: special member function, called automatically when object of the class will 'destroy'.
// Destroy, in this case, means to de-intialize the function.
// So, when an object(s) is no longer needed, you can add to the destructor within the class.
// Will call itself when object needs to be destroyed, when code block ends, or when overall function ends.
// Code blocks with objects from a class initialized in it will perform their destructor's task
// Don't try to call destructors, might crash program.

class x
{
public:
	int a;
	int b;
	int c;
	void add() {
		
	}
	~x() {
		cout << "inside destructor" << endl;
		a = 0;
		b = 0;
	}
};

int main() {
	{
		x obj;
		obj.add();
		//obj.~x();
		obj.a = 10;
		cout << obj.a << endl;
	}
	cout << "Block ended" << endl;
	{
		x ob;
	}
}