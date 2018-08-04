#include <iostream>
using namespace std;

class student {
public:
	int age;
	int roll;

/*	student() {
		cout << "inside parameterless" << endl;
		age = 0;
		roll = 0;
	}*/
	student(int a, int r) {
		cout << "inside paramterized" << endl;
		age = a;
		roll = r;
	}
	void display() {
		cout << age << endl << roll << endl;
	}
};

int main()
{
	
	student s1;
	student s2(10, 11);
	s1.display();
	s2.display();
}