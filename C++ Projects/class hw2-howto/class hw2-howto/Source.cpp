#include <iostream>
#include <string>
using namespace std;
  // slashes mean added later.
class math {
public:
	int a;
	int b;
	int c; //
	int d; //

	math(int x, int y) {
		a = x;
		b = y;
	}
	math(int x, int y, int z, int w) { //
		a = x;//
		b = y;//
		c = z;//
		d = w;//
	}
	math(float x, int y) { //
		c = x; //
		d = y; //
	}
	int add(){
		return a + b;
	}
	int sub() {
		return a - b;
	}


};

int main() 
{
	math obj1(10,20);
	math obj2(10, 20, 30, 40); //
	cout<<obj1.add()<<endl;
	cout << obj1.sub()<<endl;
	cout << obj2.add() << endl;
}