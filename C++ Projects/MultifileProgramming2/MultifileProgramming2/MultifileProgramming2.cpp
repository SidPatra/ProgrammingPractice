// MultifileProgramming2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	/* Object like macros: 
	-Example 1:
	#define myfavnum 10
		cout << "my fav num" << myfavnum; 
	-Example 2:
	#define lal <- this does nothing lol. Only for text-related stuff
	Conditional compilation:
	-Example 1
	#define prettynames "Bob"
	#ifdef prettynames
	cout << "Bob" << endl;
	#endif
	- Example 2
	#ifdef notsoprettynames // won't work, as it hasn't been defined
	cout << "Homiehoestasis" << endl;
	#endif 
	*/
	#define PRINT_JOE // this doesn't do anything at all
	#ifdef PRINT_JOE

#endif // 

    return 0;
}

