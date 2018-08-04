#include <iostream>
#include <string>
using namespace std;

class school
{
	int *numstudents;
	int *numteachers;
	int *numchairs;
	string *name;
public:
	school()
	{
		numstudents = new int;
		numteachers = new int;
		numchairs = new int;
		name = new string;
	}
	school(int np, int nd, int nc, string sn)
	{
		numstudents = new int;
		numteachers = new int;
		numchairs = new int;
		name = new string;
		*numstudents = np;
		*numteachers = nd;
		*numchairs = nc;
		*name = sn;
	}
	void display()
	{
		cout << "name " << *name << endl;
		cout << "numstudents " << *numstudents << endl;
		cout << "numteachers " << *numteachers << endl;
		cout << "numchairs " << *numchairs << endl;
	}
};


int main()
{
	int np, nd, nc;
	string sn;
	cout << "Give a school some details" << endl;
	cout << "Name of school: ";
	cin >> sn;
	cout << "Insert number of students: ";
	cin >> np;
	cout << "Insert number of teachers: ";
	cin >> nd;
	cout << "Insert number of chairs: ";
	cin >> nc;
	school s1(np, nd, nc, sn);
	s1.display();
	school s2 = s1;
	s2.display();
	school *s3 = new school(np, nd, nc, sn);
	s3->display();
	school *s4 = new school;
	s4 = s3;
	s4->display();
	return 0;
}
