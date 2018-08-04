#include <iostream>
#include <string>
using namespace std;

const static string nat = "Indian";
bool canvote = false;

class jobdetails
{
	string company;
	string position;
	int income;
public:
	jobdetails()
	{
		company = "company";
		position = "peon";
		income = 0;
	}
	void accept()
	{
		cout << "-----Employment details-----" << endl;
		cout << "Name of company: ";
		cin >> company;
		cout << "Position in company: ";
		cin >> position;
		cout << "Income of employee (in Rs.): ";
		cin >> income;
	}
	void display()
	{
		cout << "-----Employment details-----" << endl;
		cout << "Works for " << company << " and has position: " << position << endl;
		cout << "Income from job: Rs. " << income << endl;
		
	}
};

class familydetails
{
	int numbreadwinners;
	int numfamily;
public:
	familydetails()
	{
		numbreadwinners = 0;
		numfamily = 0;
	}
	void accept()
	{
		cout << "-----Family details-----" << endl;
		cout << "Number of members in family: ";
		cin >> numfamily;
		cout << "Number of breadwinners in family: ";
		cin >> numbreadwinners;
	}
	void display()
	{
		cout << "-----Family details-----" << endl;
		cout << "Person has " << numfamily << " family members and " << numbreadwinners << " breadwinners in family." << endl;
	}
};

class person:public jobdetails
{
public:
	string name;
	int age;
	string gender;
	string citstatus;
	familydetails f;

	person()
	{
		name = "name";
		age = 0;
		gender = "N/A";
		citstatus = "Undocumented";
	}
	void accept()
	{
		cout << "-----Personal details-----" << endl;
		cout << "Enter name of person: ";
		cin >> name;
		cout << "Gender of person (Male/Female): ";
		cin >> gender;
		cout << "Enter person's age: ";
		cin >> age;
		if (age >= 18)
		{
			canvote = true;
		}
		cout << "Citizenship status (Resident, Undocumented, NRI, OCI, etc.): ";
		cin >> citstatus;
		if (citstatus == "Pending" || citstatus == "NRI" || citstatus == "OCI" || citstatus == "Undocumented")
		{
			canvote = false;
		}
		f.accept();
		jobdetails::accept();
	}
	void display()
	{
		cout << "-----Personal details-----" << endl;
		cout << "Name: " << name << "--- Gender: " << gender << endl;
		cout << "Age: " << age << endl;
		cout << "Citizenship status: " << citstatus << endl;
		if (canvote == false)
		{
			cout << "Voter status: Not eligible to vote" << endl;
		}
		else
		{
			cout << "Voter status: Eligible to vote" << endl;
		}
		f.display();
		jobdetails::display();
	}
};



int main()
{
	cout << "-----------------------------------------" << endl;
	cout << "Census database of "<< nat <<" government"<< endl;
	cout << "-----------------------------------------" << endl;
	person p;
	p.accept();
	p.display();
}