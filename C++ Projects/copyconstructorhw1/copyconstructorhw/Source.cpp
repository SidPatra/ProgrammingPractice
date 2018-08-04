#include <iostream>
#include <string>
using namespace std;

class hospital
{
	int *numpatients;
	int *numdoctors;
	int *numcot;
	string *name;
public:
	hospital()
	{
		numpatients = new int;
		numdoctors = new int;
		numcot = new int;
		name = new string;
	}
	hospital(int np, int nd, int nc, string sn)
	{
		numpatients = new int;
		numdoctors = new int;
		numcot = new int;
		name = new string;
		*numpatients = np;
		*numdoctors = nd;
		*numcot = nc;
		*name = sn;
	}
	void display()
	{
		cout << "name " << *name << endl;
		cout << "numpatients " << *numpatients << endl;
		cout << "numdoctors " << *numdoctors << endl;
		cout << "numcots " << *numcot << endl;
	}
};

int def()
{
	return (0, 0, 0);
}


int main()
{
	int np, nd, nc;
	string sn;
	cout << "Give a hospital some details" << endl;
	cout << "Name of hospital: ";
	cin >> sn;
	cout << "Insert number of patients: ";
	cin >> np;
	cout << "Insert number of doctors: ";
	cin >> nd;
	cout << "Insert number of cots: ";
	cin >> nc;
	hospital h1(np, nd, nc, sn);
	h1.display();
	hospital h2 = h1;
	h2.display();
	hospital *h3 = new hospital(np, nd, nc, sn);
	h3->display();
	hospital *h4 = new hospital;
	h4 = h3;
	h4->display();
}