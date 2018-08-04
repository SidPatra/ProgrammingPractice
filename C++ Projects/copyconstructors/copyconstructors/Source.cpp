#include <iostream>
#include <string>
using namespace std;

class line
{
	int *length;
	string *color;
public:
	line()
	{
		length = new int;
		color = new string;
	}
	line(int x, string y)
	{
		length = new int;
		color = new string;
		*length = x;
		*color = y;
	}
	void display()
	{
		cout << "line length is " << *length << endl;
		cout << "color is " << *color << endl;
	}
};



int main()
{
	line *li1 = new line(10,"color");
	line li2 = *li1;
	li1->display();
	li2.display();
	delete li1;
	li2.display();
}