#include <iostream>

// libraries use namespaces to identify mathods with the same name from other libraries
// std::cout --> std: namespace; cout: method

// the following helps to not use the namespace for the STL library
// using namespace std;

using std::cout; // this allows to map cout always to std namespace without typing std, but all the library still need the namespace for other methods

int main()
{
	cout << "Hello from the namespace std!\n";

	return 0;
}