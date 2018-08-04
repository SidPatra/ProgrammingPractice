#include <iostream>
#include <string>
using namespace std;

class doctor 
{
public:
	string name;
	string specialty;
	void accept() 
	{
		
		cout << "Enter doctor's name: ";
		cin >> name;
		cout << "Specializes in: ";
		cin >> specialty;
	}
	void display()
	{
		cout << "Name: " << name << " specializing in " << specialty << endl;
	}
};

int main() 
{
	doctor d1;
	doctor d2;
	cout << "Acquiring doctor's information" << endl;
	d1.accept();
	d2.accept();
	cout << "Displaying doctor's information" << endl;
	d1.display();
	d2.display();
}