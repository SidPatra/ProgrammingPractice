// Lesson 3 - More functions - Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}

int multiply(int x, int y)
{
	return x*y;
}

int divide(float x, float y)
{
	float z;
	z = x / y;
	return z;
}

int main()
{
	float x;
	std::cout << "Enter a number here: ";
	std::cin >> x;
	std::cout << "" << std::endl;
	std::cout << "Enter a number here: ";
	float y;
	std::cin >> y;
	std::cout << "This program does a lot of functions" << std::endl;
	std::cout << "First it will add the inputted numbers together. The sum of " << x << " and " << y << " is " << add(x, y) << std::endl;
	std::cout << "Then it will subtract the two numbers from each other. " << x << " - " << y << " is " << subtract(x, y) << std::endl;
	std::cout << "It can also calculate products. For example: " << x << " x " << y << " = " << multiply(x, y) << std::endl;
	std::cout << "Finally, it also knows how to divide numbers, and will return values to the highest precision possible. " << std::endl; 
	std::cout << " is shown like so : ";
	std::cout << x << " / " << y << " = " << divide(x, y) << std::endl;
    return 0;
}