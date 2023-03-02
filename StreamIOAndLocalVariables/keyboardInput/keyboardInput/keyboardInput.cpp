#include <iostream>

using std::cout;
using std::cin;

int main()
{
	int i = 0;

	// what is typed in the keyboard will be assigned to the variable i
	// type still apply, hence an integer must be valid only
	cout << "Enter a number: ";
	cin >> i;

	cout << 2 * i << '\n';

	return 0;
}