#include <iostream>
#include <string>
using namespace std;

class baseclass
{
public:
	string title = "something";
	int price;
	baseclass()
	{
		cout << "Inside baseclass's parameter-less constructor" << endl;
	}
	baseclass(string t, int p)
	{
		cout << "Inside baseclass's parameterized constructor" << endl;
		title = t;
		price = p;
	}
	void show() // added the virtual part only for case 5
	{
		cout << "Show function inside baseclass" << endl;
		cout << "title: " << title << endl;
		cout << "price: " << price << endl;
	}
};

class derivedclass :public baseclass
{
public:
	int pages;
	derivedclass()
	{
		cout << "Inside derivedclass's parameter-less constructor" << endl;
	}
	derivedclass(int p, string s, int z):baseclass(s,z)
	{

		cout << "Inside derivedclass's parameterized constructor" << endl;
		pages = p;
	}
};


int main()

{
	
	/*
 case 1
	baseclass *bptr;
	baseclass baseobj;
	bptr = &baseobj;
	bptr->show();
	bptr given the address of baseobj. They're both the same class, so no problems.

*/
	/*
case 2
	derivedclass *dptr;
	derivedclass derivedobj;
	dptr = &derivedobj;
	dptr->show();
	dptr given the address of deriveobj. They're both the same class, so no problems.

	*/
	/*
case 3
	baseclass *bptr;
	derivedclass objderive;
	bptr = &objderive;
	bptr->show();
	
	
	*/

	/*
case 4
	derivedclass *dptr;
	baseclass objbase;
	dptr = &objbase;
	cannot store baseclass stuff in derivedclass ptr, because the childclass inherits stuff from the parent.
	this is because derived class's extant space is too big for baseclass to handle.
	baseclass is limited to handling its data members, but derived handles more than that.
	baseclass has a lower 'minimum handling capacity' than derived class (made that up).
	if that minimum isn't satisfied, then ptr won't form properly. So, it doesn't work.
	*/

	// upcasting and downcasting - what is it and how do you do it?
	// virtual functions: what does this even do, and what's its person.
	


}