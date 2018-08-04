#include <iostream>
using namespace std;

int something(int count)
{
	int num = 0;
	//cout << "something";
	
	if (count <= 1)
	{
		return 1;
	}
	num++;
	count--;
	cout << "Inside something, count = " <<  count << endl;
	//something(count);
	cout << "After recursive function"<<endl;
	cout << "Num = " << num << endl;
	
}

long long factorial(long long fact)
{
	long long num = fact;
	do {
		num--;
		fact = fact * num;
	} while (num != 1);
	return fact;
}



int main()
{
	int count = 5;
	int val = something(count);
	cout << "Val is finally: " << val << endl;
	//long long x;
	//cin >> x;
	//cout << factorial(x)<<endl;
}