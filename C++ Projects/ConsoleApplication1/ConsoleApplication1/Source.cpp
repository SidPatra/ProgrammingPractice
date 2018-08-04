#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
	string line;
	ifstream myfile("book1.csv");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			line.spl
			cout << line << '\n';
		}
		myfile.close();
	}
	int test;
	cin >> test;
}