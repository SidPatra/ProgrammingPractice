// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int x; //Expression - Also known as a variable definition
	x = 3; //Expression - This is an assignment operation
	std::cout << x << std::endl; //Statement -> prints 'x'
	int y; //Expression - variable definition
	y = 23; //Expression - variable has been assigned a value
	std::cout << y << std::endl; //Statement
	std::cout << "The most dank number ever is obviously: "; //Statement
	std::cout << x*y << std::endl; //Statement
}