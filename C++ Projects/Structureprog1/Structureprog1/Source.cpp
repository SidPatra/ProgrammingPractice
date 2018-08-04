#include <iostream>
#include <string>
using namespace std;

struct student {
	string name;
	int id;
	float mark;
};
struct teacher {
	string name;
	string subject;
};
struct school {
	string name;
	student st[3];
	teacher t[3];
};


void acceptsch(school *s) {
	cout << "School name is: ";
	cin >> s->name;
	for (int i = 0; i <= 2; i++)
	{
		cout << "Name one student: ";
		cin >> s->st[i].name;
		cout << "Insert ID#: ";
		cin >> s->st[i].id;
		cout << "Mark is: ";
		cin >> s->st[i].mark;
	}
	for (int i = 0; i <= 2; i++) {
		cout << "Name one teacher: ";
		cin >> s->t[i].name;
		cout << "What subject does he/she teach: ";
		cin >> s->t[i].subject;
	}
}

void displaysch(school s)
{
	cout << "The school is: " << s.name << endl;
	for (int i = 0; i <= 2; i++) {
		cout << "Students are: " << s.st->name << " with grade " << s.st->mark << "%." << endl;
	}
	for (int i = 0; i <= 2; i++) {
		cout << "Teachers are: " << s.t->name << " who teaches " << s.t->subject << "." << endl;
	}
}


int main() 
{
	school s;
	acceptsch(&s);
	displaysch(s);
}