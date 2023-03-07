#include <iostream>

/*
       create a program that allows the user to input an integer
       displays the double of it
       displays the triple of it
*/

int main()
{

    std::cout << "Enter an integer: ";

    int num{};
    std::cin >> num;

    std::cout << "Double " << num << " is: " << num * 2 << '\n';
    std::cout << "Triple " << num << " is: " << num * 3 << '\n';

    return 0;
}
