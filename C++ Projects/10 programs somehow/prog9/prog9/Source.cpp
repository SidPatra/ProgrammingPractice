#include <iostream>
#include <string>
using namespace std;

class hospital
{
public:
	int *numpatients;
	string *hospitalname;
	hospital()
	{
		numpatients = new int;
		hospitalname = new string;
		*numpatients = 0;
		*hospitalname = "hospital";
		cout << "num patients is " << *numpatients << " and hospital's name is " << *hospitalname << endl;
	}
	void newname()
	{
		string newname;
		cout << "enter new name";
		cin >> newname;
		hospitalname = &newname;
		cout << *hospitalname << endl;
	}
	hospital(int num, string name)
	{
		numpatients =new int;
		hospitalname = new string;
		cout << "resetting values of everything" << endl;
		*numpatients = num;
		*hospitalname = name;
		cout << "New names and vals: " << *hospitalname << " and " << *numpatients << " patients!" << endl;
	}
};


int main()
{
	hospital object;
	cout << object.hospitalname << endl;
	object.newname();
	int num = 10;
	string name = "newnameagain";
	hospital object2(num, name);

}