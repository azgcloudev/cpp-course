#include <iostream>

int main()
{
	// practice differnt input values such as 5, 5.5, -3, hello, 3000000000000, 123abc
	std::cout << "Enter a number: "; // ask for a number
	int x{};
	std::cin >> x;
	std::cout << "You entered " << x << '\n';


	return 0;
}