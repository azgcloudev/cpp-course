#include <iostream>

int main()
{
    int num1{};
    int num2{};

    std::cout << "Enter an integer: ";
    std::cin >> num1;
    std::cout << "Enter another integer: ";
    std::cin >> num2;

    // output the sum operation
    std::cout << num1 << " + " << num2
              << " is " << num1 + num2 << '\n';

    // output the substraction of the numbers
    std::cout << num1 << " - " << num2
              << " is " << num1 - num2 << '\n';

    return 0;
}
