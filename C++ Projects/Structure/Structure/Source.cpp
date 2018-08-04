#include <iostream>
#include <string>
using namespace std;

struct student // Define the structure
{
	int id;
	float marks;
	// cannot put functions here, like cout or something.
};
// Structure is a user defined data type, in which the user can set everything up.
// Array is a kind of data type that contains other data of the same type stored continuously.
// Structure is similar, but can contain different data types.

int main() {
	student s1; //Initialize structure in main
	cout << "Enter student's id#: ";
	cin >> s1.id;
	cout << "Enter student's marks: ";
	cin >> s1.marks;
	cout << "Student ID# " << s1.id << " got " << s1.marks << " percent as final grade." << endl;
	// What if I had like 1000 students?
	student s[4];
	s[0].id = s1.id;
	s[0].marks = s1.marks;
	for (int i = 1; i <= 3; i++)
	{
		cout << "ID #: ";
		cin >> s[i].id;
		cout << "Marks: ";
		cin >> s[i].marks;
	}
	for (int i = 0; i <= 3; i++)
	{
		cout << "ID# " << s[i].id << " got " << s[i].marks << " percent." << endl;
	}
	// for loops are a gift.

	// HW: Make a school, with the school, teachers, students.
	//		School must have teachers and students combined.
	//		Student: ID#, marks, name.
	//		Teacher: Subject, name
	//		School: School name, # of classrooms, # of students (all students), # of teachers (all teachers)
	//		Additional functions: display school, display student, display teacher - do all cins in functions
	//							  Don't mess around
	//		Extra credit for me: make it with staff, including maintenance
	//	   Learn how to use string, teach gudi how to use string.
}
