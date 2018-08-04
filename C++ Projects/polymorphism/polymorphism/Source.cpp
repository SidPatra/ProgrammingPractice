#include <iostream>
#include <string>
using namespace std;


class person
{
	string name;
public:
	person()
	{
		name = "name1";
	}

};

class employee
{
	int perdaysalary;
public:
	employee()
	{
		perdaysalary = 2000;
	}
	int calcsalary(int days)
	{
		return perdaysalary*days;
	}

};

class engineer:public employee
{
	string type;
public:
	engineer()
	{
		type = "computer";
	}
};

class manager:public employee
{
	string dept;
public:
	manager()
	{
		dept = "computer";
	}
};

int main()
{  
	manager m;
	engineer e;
	cout << e.calcsalary(10)<<endl;
	cout << m.calcsalary(3) << endl;
}