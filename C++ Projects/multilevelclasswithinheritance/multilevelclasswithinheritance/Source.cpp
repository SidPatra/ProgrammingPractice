#include <iostream>
#include <string>
using namespace std;





class uni
{
	string name;
public:
	uni()
	{
		name = "";
	}
	void accept()
	{
		cout << "Name of university ";
		cin >> name;
	}
};

class rugby :public uni
{
	int skills;
public:
	rugby()
	{
		skills = 0;
	}
	void accept()
	{
		uni::accept();
		cout << "Rugby skill level is: ";
		cin >> skills;
	}
};

class student :public rugby
{
	string name;
public:
	student()
	{
		name = "";
	}
	void accept()
	{
		cout << "name of student is ";
		cin >> name;
		rugby::accept();
	}
};

class college :public uni
{
	string name;
public:
	college()
	{
		name = "";
	}
	void accept()
	{
		uni::accept();
		cout << "name of college";
		cin >> name;
	}
};





int main()
{
	student s;
	s.accept();
}