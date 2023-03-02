#include <iostream>

using std::cout;

int main()
{
	// built in types
	int age; // declaration
	float pi = 3.1415; // declaration and initialization

	// user define types
	//std::cout is a user define type from stl

	// Type Safety

	int i = 2 + 2; // variable with type 'integer'

	cout << "i = 4\n";

	int j = i + 10;
	cout << "j = i + 10: " << j << '\n';

	// if using float numbers in integers types, the value will be truncated

	j = 9.4 / 2.5;
	cout << "j = 9.4 / 2.5: " << "'" << j <<  "'" << '\n';

	return 0;

}