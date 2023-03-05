#include <iostream>

int main()
{
    int age {27};

    // cout and endl
    std::cout << "My age is " << age << std::endl;
    std::cout << "This is a new line";

    // endl vs '\n'
    int x {5};
    std::cout << "x is equal to " << x << std::endl; // endl creates a new line and also flushes the buffer
    std::cout << "And that's all, folks!" << '\n';

    // std::cin is use to move input data from console to a variable
    int y {};
    std::cout << "\nEnter a number: ";
    std::cin >> y;
    std::cout << "Value entered is " << y << '\n';

    return 0;
}
