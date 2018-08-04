#include <iostream>
#include <string>
using namespace std;
// This one actually works somehow!!!

// Step 1: create int type pointer
// Step 2: take input from user (has to be int)
// Step 3: Integer pointer must store 6 values in it (given that user inputted 6)
// Step 4: Search this all up on the internet
// Step 5: Every member of your structure should be a pointer type
// Build the first program with just one patient, then work with more than one patient
// Step 6: p = new patient
// Step 7: Stuff inside the patient (cot#, bill#, etc.) must also be pointers, and have new function used for them



struct patient
{
	string *name;
	int *cotnum;
	int *billnum;
	float *bill;
};


void acep(patient *p, int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << "List patient: ";
		p[i].name = new string; // if setting up pointers, allocate memory for it ASAP
		cin >> *p[i].name;
		cout << "Patient's cot number: ";
		p[i].cotnum = new int;
		cin >> *p[i].cotnum;
		cout << "Patient's bill number: ";
		p[i].billnum = new int;
		cin >> *p[i].billnum;
		cout << "Patient's bill: ";
		p[i].bill = new float;
		cin >> *p[i].bill;
	}
}

void display(patient *p, int n) 
{
	for (int i = 0; i < n; i++)
	{
		cout << "Patient named " << *p[i].name << " with cot and bill numbers: " 
			<< *p[i].cotnum << " and " << *p[i].billnum << "." << endl;
		cout << *p[i].name << " must pay $" << *p[i].bill << "." << endl;
	}
}

// If already initialized in function as pointer, to print value itself, say '*pointer'.

int main()
{
	int n;
	cout << "Enter # of patients: ";
	cin >> n;
	patient *p = new patient[n];
	acep(p, n);
	display(p, n);
}

// Book: Pointers in C (just read the first few chapters, up to and including pointers-to-pointers)

//		1. Technical knowledge
//		2. Domain knowledge
//		3. Product knowledge
//		4. Leadership knowledge