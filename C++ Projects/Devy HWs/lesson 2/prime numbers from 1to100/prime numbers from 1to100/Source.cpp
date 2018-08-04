#include <iostream>
using namespace std;

int main()
{
	int count;//counter: counts all numbers from 1 to 100
	int n;//has to be smaller than count
	int j;//divisibility score: if condition is accomplished, increases by 1

	for (count = 1; count <= 100; count++)//considers all numbers from 1 to 100
	{
		j = 0;//a tester
		for (n = 1; n <= count; n++)//another loop like count
		{
			if (count%n == 0)//when count/n = 0
			{
				j = j + 1;//ONLY when count%n = 0
			}
			if (j > 2) {
				cout << count << endl;
				break;
			}
		}
		
	}
}