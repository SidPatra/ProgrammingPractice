#include <iostream>
#include <string>
using namespace std;

struct patient
{
	string name;
	int cotnum;
	int billnum;
	float bill;
};

//struct hospital
//{
//	string name;
//	patient p[3];
//	//doc d[3];
//};
// Step 1: create int type pointer
// Step 2: take input from user (has to be int)
// Step 3: Integer pointer must store 6 values in it (given that user inputted 6)
// Step 4: Search this all up on the interwebs
// Step 5: Every member of your structure should be a pointer type
// Build the first program with just one patient, then work with more than one patient
// Step 6: p = new patient
// Step 7: Stuff inside the patient (cot#, bill#, etc.) must also be pointers, and have new function used for them



void accepthos(patient *p)
{
	for (int i = 0; i <= 2; i++)
	{
		cout << "List patient: ";
		cin >> p[i].name;
		cout << "Patient's cot number: ";
		cin >> p[i].cotnum;
		cout << "Patient's bill number: ";
		cin >> p[i].billnum;
		cout << "Patient's bill: ";
		cin >> p[i].bill;
	}
	/*for (int i = 0; i <= 2; i++)
	{
		cout << "Doctor's name: ";
		cin >> h->d[i].name;
	}*/
}

int main() 
{
	patient *p;
	accepthos(p);
}