#include <iostream>
#include <string>
using namespace std;

class patient
{
public:
	int age;
	string name;

	patient() {
		cout << "Inside parameter-less constructor" << endl;
	}

	patient(int a, string n)
	{
		cout << "Inside parameter-ized constructor" << endl;
		age = a;
		name = n;
	}

	void accept(){
		cout << "Inside accept" << endl;
	}
	void display(){
		cout << "Inside display"<<endl;
	}
};

int main()
{
	patient p1(20, "Sid");

	patient p2;
}