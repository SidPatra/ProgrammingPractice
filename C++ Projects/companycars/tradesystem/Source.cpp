#include <iostream>
#include <string>
using namespace std;

class truck
{
	string name;
	string mods;
	string decals;
	int capacity;
public:
	truck()
	{
		name = "name";
		mods = "mods";
		decals = "decals";
		capacity = 0;
	}
	void accept()
	{
		cout << "Capacity of truck (in kg): ";
		cin >> capacity;
		cout << "What is the model name of this truck? ";
		cin >> name;
		cout << "What mods does this truck have? ";
		cin >> mods;
		cout << "Any special paint decals? ";
		cin >> decals;
	}
	void display()
	{
		cout << "Capacity of truck (in kg): " << capacity << endl;
		cout << "Model of truck: " << name << endl;
		cout << "Mods: " << mods << endl;
		cout << "Decals: " << decals << endl;
	}
};

class car
{
	string name;
	string mods;
	string decals;
public:
	car()
	{
		name = "name";
		mods = "mods";
		decals = "decals";
	}
	void accept()
	{
		cout << "What is the model name of this car? ";
		cin >> name;
		cout << "What mods does this car have? ";
		cin >> mods;
		cout << "Any special paint decals? ";
		cin >> decals;
	}
	void display()
	{
		cout << "Model of car: " << name << endl;
		cout << "Mods: " << mods << endl;
		cout << "Decals: " << decals << endl;
	}
};

class vehicle :public car, truck
{
	string company;
	int numwheels;
	float kmperl;
	string color;
	string license;
public:
	vehicle()
	{
		company = "company";
		numwheels = 0;
		kmperl = 0;
		color = "color";
		license = "none";
	}
	void accepttruck()
	{
		truck::accept();
		cout << "How many wheels does this truck have (including spares)? ";
		cin >> numwheels;
		cout << "How many km can it travel per litre? ";
		cin >> kmperl;
	}
	void acceptcar()
	{
		car::accept();
		cout << "How many wheels does this car have (including spares)? ";
		cin >> numwheels;
		cout << "How many km can it travel per litre? ";
		cin >> kmperl;
	}
	void displaytruck()
	{
		truck::display();
		cout << "Company that produced truck: ";
		cin >> company;
		cout << "Number of wheels (including spares): " << numwheels << endl;
		cout << "Mileage: " << kmperl << endl;
		cout << "Color of truck: ";
		cin >> color;
		cout << "License plate number: ";
		cin >> license;
	}
	void displaycar()
	{
		car::display();
		cout << "Company: " << company << endl;
		cout << "Number of wheels (including spares): " << numwheels << endl;
		cout << "Mileage: " << kmperl << endl;
		cout << "Color: " << color << endl;
		cout << "License plate number: " << license << endl;
	}
};


class company
{
	vehicle ve[3];
	string dec;
	string list[3];
	int v;
public:
	company()
	{
		dec = "";
		v = 0;
	}
	void display()
	{
		cout << "ALL DATA:" << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << "Vehicle " << i << " details:" << endl;
			if (list[i] == "t")
			{
				ve[v].displaytruck();
			}
			if (list[i] == "c")
			{
				ve[v].displaycar();
			}
		}

	}
	void accept()
	{
		while (dec != "X")
		{
			if (v == 3)
			{
				cout << "Function ended" << endl;
				display();
			}
			else
			{
				cout << "Vehicle " << v << " details:" << endl;
				cout << "Is vehicle a truck or a car? (X to quit): ";
				cin >> dec;
				if (dec == "truck")
				{
					ve[v].accepttruck();
					ve[v].displaytruck();
					list[v] = "t";
					v += 1;

				}
				if (dec == "car")
				{
					ve[v].acceptcar();
					ve[v].displaycar();
					list[v] = "c";
					v += 1;
				}
				else
				{
					cout << "Try again." << endl;
				}
			}
		}
	}
};

int main()
{
	company c;
	c.accept();
	c.display();
}