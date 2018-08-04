#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

//What is a function?
void message() 
{
	cout << "Smile and the world smiles with you..." << endl;
}
void ex1() 
{
	message();
	cout << "Cry, and you stop the monotony!" << endl;
}

void italy() 
{
	cout << "I am in Italy" << endl;
}
void brazil()
{
	cout << "I am in Brazil" << endl;
}
void argentina()
{
	cout << "I am in Argentina" << endl;
}
void ex2()
{
	cout << "I am in main" << endl;
	italy();
	brazil();
	argentina();
}

void italy2() 
{
	cout << "I am in Italy" << endl;
	brazil();
	cout << "Now I am back in Italy" << endl;
}
void brazil2()
{
	cout << "I am in Brazil" << endl;
	argentina();
}
void ex3()
{
	cout << "I am in main" << endl;
	italy2();
	cout << "I am back in main" << endl;
}

//Passing values between functions

int calsum(int a,int b,int c) // can also say calsum(a,b,c) and int them in function.
{
	return a + b + c; // purpose of return: returns function back to the 'calling' program
}
void ex4()
{

	int a, b, c, sum;
	cout << "Enter 3 different numbers: ";
	cin >> a;
	cin >> b;
	cin >> c;
	sum = calsum(a, b, c); // shallow copy takes place here
	cout << "Sum is: " << sum << endl;
}

int ex5()
{
	char ch;
	cout << "Enter any alphabet: " << endl;
	cin >> ch;
	if (ch >= 65 && ch <= 90) 
	{
		return ch;
	}
	else {
		return ch + 32;
	}
}

//Scope of functions
void display1(int j)
{
	int k = 35; // confined to this function only
	cout << j << endl;
	cout << k << endl;
}
void ex6()
{
	int i = 20; // confined to this function but shallow copied to function above
	display1(i);
}

//Calling convention
void ex7() 
{
	int a = 1;
	cout << a << " " << ++a << " " << a++ << endl;
	/* Steps explaining why this prints 3 3 1 and not 1 2 3:
		1. 1 passed through expression a++. a = 1 -> Let's call it a' = 2
		2. Now, a' goes through the middle expression: a' = 2 -> a'' = 3
		3. Now, a'' is passed and printed -- output is 3
 		4. After that, the latest value of a, which is still 3, is passed -- output is 3
		5. Finally, a is passed on its own -- output is 1
		-- ASK FOR HELP HERE --
	*/
}
// One dicey issue
void ex8()
{
	void clrscr(); // library functions
	void gotoxy(int, int);  // library functions
	int getch(); // library functions
}

void ex9(int i, int j)
{
	//Doesn't work for some reason
	cout << "%d %d %d" << i, j;
	cout << "\n%d" << i, j;
	cout << "" << endl;
}

//Function Declaration and Prototypes
int square1(float a) 
{
	return a*a;
}
void ex10()
{
	float  a, b;
	cout << "Enter any number ";
	cin >> a;
	b = square1(a);  
	cout << "Square of " << a << " is " << b << endl;
}

float square2(float a)
{
	return a*a;
}
void ex11()
{
	float  a, b;
	cout << "Enter any number ";
	cin >> a;
	b = square2(a);
	cout << "Square of " << a << " is " << b << endl;
}

void gospel()
{
	cout << "THE GOSPEL: " << endl;
	cout << "Viruses are electronic bandits..."<<endl;  
	cout << "who eat nuggets of information..."<<endl;  
	cout << "and chunks of bytes..." << endl;
	cout << "when you least expect..."<< endl;
}
void ex12()
{
	gospel();
}

void ex13()
{
	int i = 3;
	int *loci = &i;
	cout << "Variable named i has value " << i << " and has location: " << &i << endl;
	cout << "At location " << loci << " the value " << *loci << " is stored" << endl;
	cout << "loci is the pointer, i is the variable" << endl;
}

void ex14()
{
	int  i = 3;  
	int  *j;
	j = &i;  
	cout << "Address of i = " << &i << endl;
	cout << "Address of i = " << j << endl;
	cout << "Address of j = " << &j << endl;
	cout << "Value of j = " << j << endl;
	cout << "Value of i = " << i << endl;
	cout << "Value of i = " << *(&i) << endl;
	cout << "Value of i = " << *j << endl;
	// Not complicated, just annoying
}

void ex15()
{
	// you can also type c language into this somehow.
	int  i = 3, *j, **k;   
	j = &i;  k = &j; 
	printf("\nAddress of i = %u", &i);  
	printf("\nAddress of i = %u", j);  
	printf("\nAddress of i = %u", *k); 
	printf("\nAddress of j = %u", &j); 
	printf("\nAddress of j = %u", k); 
	printf("\nAddress of k = %u", &k);
	printf("\nValue of j  = %u", j); 
	printf("\nValue of k  = %u", k); 
	printf("\nValue of i  = %d", i); 
	printf("\nValue of i  = %d", *(&i)); 
	printf("\nValue of i  = %d", *j); 
	printf("\nValue of i  = %d", **k);
	printf("\n");
}

void swapv1(int a, int b)
{
	int  t;

	t = a; 
	a = b;
	b = t;
	cout << "Inside swap function: ";
	printf("\na = %d b = %d", a, b);
}
void ex16()
{
	cout << "Before swap function: ";
	int  a = 10, b = 20;
	cout << "a = " << a << " b = " << b << endl;
	swapv1(a, b);
	cout << "Out of swap funciton: ";
	printf("\na = %d b = %d", a, b);
	cout << "" << endl;
}

void swapv2(int *a, int *b)
{
	int  t;
	// How to do this without third variable 't'
	t = *a;
	*a = *b;
	*b = t;
	cout << "Inside swap function: " << endl;;
	cout << "a = " << a << " b =" << b << endl;
}
void ex17()
{
	cout << "Before swap function: ";
	int  a = 10, b = 20;
	cout << "a = " << a << " b = " << b << endl;
	swapv2(&a, &b);
	cout << "Out of swap funciton: ";
	printf("\na = %d b = %d", a, b);
	cout << "" << endl;
}

void areaperi(int r, float *a, float *p)
{
	*a = 3.14 * r * r;  
	*p = 2 * 3.14 * r;
}
void ex18()
{
	int  radius;  
	float  area, perimeter;
	printf("\nEnter radius of a circle ");  
	cin >> radius;
	areaperi(radius, &area, &perimeter);
	printf("Area = %f", area);  
	printf("\nPerimeter = %f", perimeter);
	cout << "" << endl;
}

int main() 
{
// What is a function?
	cout << "-------------Section: What is a function-------------" << endl;
	ex1();
	ex2();
	ex3();
	/* Summary 1:
	1. initialize function inside main() by doing: function();
	2. functions defined the same way as main - statements exist inside {} and parameters inside ()
	3. Can call other functions from within other functions - but can't call main that way.
	4. No link between how you initialize and how you call functions in terms of the order they appear
	5. Functions calling themselves: recursion
	6. cout and cin are in-built functions from the 'Library'
	7. Why use functions:
		- Organization
		- Avoid repetition
		- Save time typing
		- Allows you to do same function over and over with different values
	Break everything into functions, saves a lot of time.
*/

// Passing values between functions
	cout << "-------------Section: Passing values between functions-------------" << endl;
	ex4();
	cout << ex5() << endl;
/*
	Summary 2:
	1. If you want your function to return nothing, use void
	2. Valid returns: a, 1, 1.234, or even nothing
	3. Returns one thing at a time
	4. If the value of a formal argument (i.e: x =4) changes within another function, 
		the corresponding change does not take place within the original function.
	*/
// Scope of functions
	cout << "-------------Section: Scope of functions-------------" << endl;
	ex6();
	//Variables can get confined or expanded to fit different scopes.
// Calling Convention
	cout << "-------------Section: Calling Convention-------------" << endl;
	ex7(); // functions work right to left, not left to right

// One dicey issue
	cout << "-------------Section: One Dicey Issue-------------" << endl;
	ex8();
	ex9(10,20);

// Function Declaration and Prototypes
	cout << "-------------Section: Function Declaration and Prototypes-------------" << endl;
	ex10();
	ex11();
	ex12();
	// You know this stuff

// Intro to pointers
	cout << "-------------Section: Introduction to pointers-------------" << endl;
	ex13();
	/* Summary of what was done in that function:
	1. i = 3, with loci being the location of i.
	2. loci = &i
	3. The location of i is loci, but the value stored at that location can be shown as i and/or *loci
*/
	ex14();
	ex15();
// Back to function calls, but with pointers
	cout << "-------------Section: Back to function calls, but with pointers-------------" << endl;
	ex16();
	ex17();// same, but ex17 uses pointer of a and b in the swap function
	ex18();
	// Learn how pointers to the second degree work (**i for example). 

// Recursion
	cout << "-------------Section: Recursion-------------" << endl;


	int i = 10;
	int *j = &i;


}

/* Applications of pointers:
1. Pass value of function by address
2. Return value of function by reference (will learn later)
3. Return value of function by address
4. Handle arrays easier - use arrays to point
5. Dynamic memory allocation
There are more also

*/