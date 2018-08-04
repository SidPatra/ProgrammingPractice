#include <iostream>
#include <string>
using namespace std;

class patient {
public:
	string name;
	int cotnum;
	void accept()
	{
		cout << "Enter patient details" << endl;
		cout << "Name = ";
		cin >> name;
		cout << "Cot number = ";
		cin >> cotnum;
	}
	void display()
	{
		cout << "Displaying all patients" << endl;
		cout << "Name is: " << name << " with cot number: " << cotnum << endl;
	}
};


int main()
{
	patient p1;
	patient p2;
	p1.accept();
	p2.accept();
	p1.display();
	p2.display();
}