#include <iostream>
#include <string>
using namespace std;

class army
{
	int *numsoldiers;
	int *numcaptains;
	int *numtanks;
	string *name;
public:
	army()
	{
		numsoldiers = new int;
		numcaptains = new int;
		numtanks = new int;
		name = new string;
	}
	army(int np, int nd, int nc, string sn)
	{
		numsoldiers = new int;
		numcaptains = new int;
		numtanks = new int;
		name = new string;
		*numsoldiers = np;
		*numcaptains = nd;
		*numtanks = nc;
		*name = sn;
	}
	void display()
	{
		cout << "name " << *name << endl;
		cout << "numsoldiers " << *numsoldiers << endl;
		cout << "numcaptains " << *numcaptains << endl;
		cout << "numtanks " << *numtanks << endl;
	}
};


int main()
{
	int np, nd, nc;
	string sn;
	cout << "Give the army some details" << endl;
	cout << "Name of army: ";
	cin >> sn;
	cout << "Insert number of soldiers: ";
	cin >> np;
	cout << "Insert number of captains: ";
	cin >> nd;
	cout << "Insert number of tanks: ";
	cin >> nc;
	army a1(np, nd, nc, sn);
	a1.display();
	army a2 = a1;
	a2.display();
	army *a3 = new army(np, nd, nc, sn);
	a3->display();
	delete a3;
	army *a4 = new army;
	a4 = a3;
	a4->display();
}
