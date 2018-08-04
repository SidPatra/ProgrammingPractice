// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

//Time to learn about cin, cout, endl, and more
// STUFF TO REMEMBER:
// - semicolons at the end of every line
// - 
int main()
{
	std::cout << "Hello World!"; // prints 'Hello World!' with an end-'' thing at the end
	std::cout << "Hello World!" << std::endl; //same, but starts a new line
	std::cout << "Enter a value for x: ";
	int x;
	std::cin >> x;
	std::cout << "You entered ";
	std::cout << x << std::endl;
	std::cout << "420+69 = 489, the best of numbers y'all" << std::endl;
}

