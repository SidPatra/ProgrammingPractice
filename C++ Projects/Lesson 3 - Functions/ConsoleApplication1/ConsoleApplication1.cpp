// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>



// Function of the type 'void' just does something, like printing an output.
//	Doesn't need to return a value. Doesn't compile - just directly prints something.

void something() // No return value here - just does the basic printing when called.
{
	std::cout << "This function adds to: "; 
}

int getsomeval() // Simple function = returns an input value. In main, it defines something.
{
	std::cout << "Enter an integer: ";
	int a;
	std::cin >> a;
	return a;
}

int adding(int x, int y) // This is an actual adding function. You need the ints in parameters.
{
	int z;
	z = x + y;
	return z;
}

int main()
{
	std::cout << "Enter first number: ";
	int x;
	std::cin >> x;
	std::cout << "You entered: ";
	std::cout << x;
	std::cout << "" << std::endl;
	std::cout << "Enter second number: ";
	int y;
	std::cin >> y;
	something(); // Can't do std::cout << something();, as no value is returned by this 
	//function. The only thing one can do with void functions is to ignore their return 
	// statements
	int z;
	z = x + y;
	std::cout << z << std::endl;
	//inserting 'return 0;' here makes everything after it obsolete
	std::cout << "There's another way to do this process as well. Requires another function." << std::endl;
	int b = getsomeval();
	int c = getsomeval();
	std::cout << b << "+" << c << "=" << c + b << std::endl;
	std::cout << "Another way, this time using functions." << std::endl;
	int e = getsomeval();
	int d = getsomeval();
	adding(e, d);
	std::cout << "The answer is " << adding(e, d) << std::endl;
}
// IMPORTANT RULES:
// - Functions can be called in other functions. But everything must result in the main function.
// - You cannot define a function inside another function. Nested functions don't exist.
// - You must initialize parameters within the brackets in function definitions
// - Semicolons EVERYWHERE except function defining lines
// - Main function should be the last function in your program


