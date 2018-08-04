#include <iostream>
#include <string>
using namespace std;

class house
{
	int *numrooms;
	string *nameofhouse;

	house()
	{
		numrooms = new int;
		nameofhouse = new string;
	}
};