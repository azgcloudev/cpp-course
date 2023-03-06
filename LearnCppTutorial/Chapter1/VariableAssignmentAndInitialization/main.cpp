#include <iostream>

int main()
{
	// --- defining a variable --- //
	int a;
	int b, c;	// define two variables with the same type

	// variable assignment
	int width;	//define the variable
	width = 5;	// copy assigment 5 to variable width
	width = 7;	// overrite value 5 with new value 7

	// --- initialization methods --- //
	int d;		// no use of initializer
	int e = 1;	// copy initialization
	int f(1);	// direct initialization

	// c++11 list initialization methods
	int j{ 1 };		// direct list initialization
	int g = { 1 };	// copy list initialization
	int h{};		// value initialization
	
	int distance = 4.5;		// will truncate the number value to 4, because int cannot hold franctions
	// int distance1{ 4.5 };	// provides a compile error

	int age{ 27 };	// variable define but not use

	// c++11 variable not used
	[[maybe_unused]] int age1{ 28 };	// won't show a compile warning


	return 0;
}