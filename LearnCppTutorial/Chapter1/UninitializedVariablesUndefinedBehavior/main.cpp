#include <iostream>

void doNothing(int&) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
{
}

int main()
{

    // Uninitialized variable
    int x;

    std::cout << "x value is " << x;    // will display a random value
    doNothing(x);

    return 0;
}
