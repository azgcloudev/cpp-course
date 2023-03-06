#include <iostream>

int main()
{  // use braces of functions in a new line

	// try  avoid to exceed 80 characters length in a single line, use multiple lines
	std::cout << "This is another really, really, really, really, really, really, really, "
		"really long line\n"; // use a new line with another tab indentation

	std::cout << "This is another really, really, really, really, really, really, really, "
			     "really long line\n"; // can align the new line with the previous one

	std::cout << 3 + 4
			  + 5 + 6	// when using operators, put the operators first in the line
			  * 7 * 8;

	// readability of the lines (applies the same for comments at the end
	int cost          = 57;
	int pricePerItem  = 24;
	int value         = 5;
	int numberOfItems = 17;

	return 0;
}
