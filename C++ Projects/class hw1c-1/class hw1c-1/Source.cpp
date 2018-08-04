#include <iostream>
#include <string>
using namespace std;

class patient {
public:
	string name;
	int cotnum;
	void acceptp() {
		cout << "Acquiring patient's information" << endl;
		cout << "Enter patient's name: ";
		cin >> name;
		cout << "Cot number of patient: ";
		cin >> cotnum;
	}
	void display()
	{
		cout << "Displaying patient's information" << endl;
		cout << "Name: " << name << " sleeping in " << cotnum << endl;
	}
};

class doctor {
public:
	string name;
	string specialty;
	void acceptd() {
		cout << "Acquiring doctor's information" << endl;
		cout << "Enter doctor's name: ";
		cin >> name;
		cout << "Specializes in: ";
		cin >> specialty;
	}
	void display()
	{
		cout << "Displaying doctor's information" << endl;
		cout << "Name: " << name << " specializing in " << specialty << endl;
	}
};

class hospital {
public:
	string name;
	int numcot;
	patient p1;
	doctor d1;

	void accept()
	{
		cout << "Acquiring hospital information" << endl;
		cout << "Enter hospital's name: ";
		cin >> name;
		cout << "Number of cots available: ";
		cin >> numcot;
	}
	void display()
	{
		cout << "Displaying hospital's information" << endl;
		cout << "Name: " << name << " with " << numcot << " cots for service." << endl;
	}
};

int main()
{
	hospital h;

	h.accept();
	h.display();

	h.p1.acceptp();

	h.d1.acceptd();
	h.d1.display();
}