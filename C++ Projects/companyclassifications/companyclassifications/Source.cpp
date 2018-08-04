#include <iostream>
#include <string>
using namespace std;

int total_revenue = 0;
int total_cost = 0;
int total_employees;
class oil
{
	int numrefineries;
	int barrels;
	int sold;
	float priceperbar;
	int empl;
	float cost_per_empl;
public:
	oil()
	{
		numrefineries = 0;
		barrels = 0;
		sold = 0;
		priceperbar = 0;
		empl = 0;
		cost_per_empl = 0;
	}
	void accept()
	{
		cout << "Number of refineries owned by company: ";
		cin >> numrefineries;
		cout << "Number of employees: ";
		cin >> empl;
		cout << "Average salary of employees: ";
		cin >> cost_per_empl;
		cout << "Barrels produced per refinery: "; 
		cin >> barrels;
		cout << "Barrels sold per refinery: ";
		cin >> sold;
		while (sold > barrels)
		{
			cout << "Invalid input, try again" << endl;
			cout << "Barrels produced per refinery: ";
			cin >> barrels;
			cout << "Barrels sold per refinery: ";
			cin >> sold;
		}
		cout << "Price per barrel sold: ";
		cin >> priceperbar;
	}
	void display()
	{
		int revact = sold*numrefineries*priceperbar;
		int rev = barrels*numrefineries*priceperbar;
		cout << "Refineries owned by company: " << numrefineries << endl;
		int cost;
		cost = empl*cost_per_empl;
		cout << "Number of employees: " << empl << endl;
		cout << "Cost of employees: " << cost << endl;
		cout << "Barrels produced per day: " << barrels << endl;
		cout << "Barrels sold: " << sold << endl;
		cout << "Oil revenue gained:" << revact << endl;
		cout << "Maximum revenue possible: " << rev << endl;
		total_revenue += revact;
		total_cost += cost;
		total_employees += empl;
	}
};

class pharmaceutical
{
	int numretail;
	int soldperretail;
	float avprice;
	int empl;
	float cost_per_empl;
public:
	pharmaceutical()
	{
		numretail = 0;
		soldperretail = 0;
		avprice = 0;
		empl = 0;
		cost_per_empl = 0;
	}
	void accept()
	{
		cout << "Number of employees: ";
		cin >> empl;
		cout << "Average salary of employees: ";
		cin >> cost_per_empl;
		cout << "Number of retail stores: ";
		cin >> numretail;
		cout << "Products sold at stores: ";
		cin >> soldperretail;
		cout << "Average price of products: ";
		cin >> avprice;
	}
	void display()
	{
		int rev;
		int cost;
		cost = empl*cost_per_empl;
		cout << "Number of employees: " << empl << endl;
		cout << "Cost of employees: " << cost << endl;
		cout << "Number of retail stores: " << numretail << endl;
		cout << "Products sold at stores: " << soldperretail << endl;
		cout << "Average price of products: " << avprice << endl;
		rev = numretail * soldperretail * avprice;
		cout << "Pharmaceutical revenue gained:" << rev << endl;
		total_revenue += rev;
		total_cost += cost;
		total_employees += empl;
	}
};

class telecommunications
{
	int empl;
	float cost_per_empl;
	int towers;
	int callspertower;
	float revpercall;
public:
	telecommunications()
	{
		towers = 0;
		callspertower = 0;
		revpercall = 0;
	}
	void accept()
	{
		cout << "Number of employees: ";
		cin >> empl;
		cout << "Average salary of employees: ";
		cin >> cost_per_empl;
		cout << "Number of cell towers stores: ";
		cin >> towers;
		cout << "Calls bounced per tower: ";
		cin >> callspertower;
		cout << "Average price per call: ";
		cin >> revpercall;
	}
	void display()
	{
		int rev;
		int cost;
		cost = empl*cost_per_empl;
		cout << "Number of employees: " << empl << endl;
		cout << "Cost of employees: " << cost << endl;
		cout << "Number of cell towers stores: " << towers << endl;;
		cout << "Calls bounced per tower: "<< callspertower<<endl;
		cout << "Average price per call: " << revpercall << endl;
		rev = revpercall * towers * callspertower;
		total_revenue += rev;
		total_cost += cost;
		total_employees += empl;
	}
};


class company :public oil, pharmaceutical, telecommunications
{
	int type[3];
	string name;
public:
	company()
	{
		name = "name";
	}
	void display()
	{
		cout << "======INITIALIZING ALL DATA======" << endl;
		if (type[0] == 1)
		{
			oil::display();
		}
		if (type[1] == 1)
		{
			pharmaceutical::display();
		}
		if (type[2] == 1)
		{
			telecommunications::display();
		}
		cout << "All revenues and details allocated" << endl;
		cout << "Aggregate revenue: " << total_revenue << endl;
		cout << "Aggregate costs: " << total_cost << endl;
		cout << "Final profit: " << total_revenue - total_cost << endl;
	}
	void accept()
	{
		string something;
		cout << "Name of company: ";
		cin >> name;
		while (something != "X") {
			cout << "What does the company do? (enter X to quit): ";
			cin >> something;
			if (something == "oil")
			{
				cout << "Oil and Natural Gas details" << endl;
				cout << "---INITIALIING O&NG DATA---" << endl;
				oil::accept();
				oil::display();
				type[0] = 1;
			}
			if (something == "pharma")
			{
				cout << "Pharmaceutical division details" << endl;
				cout << "----INITIALIING PHARMA DATA----" << endl;
				pharmaceutical::accept();
				pharmaceutical::display();
				type[1] = 1;
			}
			if (something == "telecom")
			{
				cout << "Telecommunications division details" << endl;
				cout << "------INITIALIING TELECOM DATA------" << endl;
				telecommunications::accept();
				telecommunications::display();
				type[2] = 1;
			}
			if (something == "X")
			{
				display();
			}
		}
	}
};

int main()
{
	company c;
	c.accept();
}