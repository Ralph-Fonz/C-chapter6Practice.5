// This program has three function: main, first, and second

#include "stdafx.h"
#include <iostream>
using namespace std;

//*************************************
// Definition of function first       *
// This function displays a message   *
//*************************************

void first()
{
	cout << "I am now inside the function first.\n";
}

//*************************************
// DEfinition of function second      *
// This function displays a message   *
//*************************************

void second()
{
	cout << "I am now inside the function second.\n";
}

//*************************************
// Function main					  *
//*************************************

int main()
{
	cout << "I am starting in function main.\n";
	first();		// Calls first fucntion
	second();		// Calls second function
	cout << "Back in function main again.\n";
	return 0;
}
