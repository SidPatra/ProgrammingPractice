#include <iostream>
#include <string>
using namespace std;

// make it fancier and better

class zoo
{
	string name;
public:

	zoo()
	{
		name = " ";
	}
	zoo(string s)
	{
		name = s;
	}
	void accept()
	{
		cout << "enter name of zoo";
		cin >> name;
	}
	void display()
	{
		cout << "name of zoo is " << name << endl;
	}
};

class enclosure : public zoo
{
	string name;
	float area;
	int keepers;
public:
	enclosure()
	{
		name = " ";
		area = 0.0;
		keepers = 0;
	}
	enclosure(string s, float f, int z)
	{
		name = s;
		area = f;
		keepers = z;
	}
	void accept()
	{
		zoo::accept();
		cout << "name of enclosure ";
		cin >> name;
		cout << "area of enclosure ";
		cin >> area;
		cout << "number of zookeepers responsible for that area";
		cin >> keepers;
	}
	void display()
	{
		zoo::display();
		cout << "name of enclosure is " << name << endl;
		cout << "it has an area of " << area << endl;
		cout << keepers << " zookeepers are running this" << endl;
	}
};

class zookeepers :public enclosure
{
	string name;
public:
	zookeepers()
	{
		name = " ";
	}
	zookeepers(string s)
	{
		name = s;
	}
	void accept()
	{
		enclosure::accept();
		cout << "enter name of zookeeper";
		cin >> name;
	}
	void display()
	{
		enclosure::display();
		cout << "name of zookeeper is " << name << endl;
	}
};

class animals :public zookeepers
{
	string name;
public:
	animals()
	{
		name = " ";
	}
	animals(string s)
	{
		name = s;
	}
	void accept()
	{
		zookeepers::accept();
		cout << "enter name of animal: ";
		cin >> name;
	}
	void display()
	{
		zookeepers::display();
		cout << "name of animal in enclosure is " << name << endl;
	}
};


int main()
{
	animals a;
	a.display();
}