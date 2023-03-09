#include <iostream>

void doPrint()                  // returnType functionName()
{
    std::cout << "In doPrint()\n";// function body
}

void foo()
{
    // function can call other functions
    std::cout << "In foo()\n";
    doPrint();
    std::cout << "ending foo()\n";
}

int main()
{
    std::cout << "starting main()\n";
    foo();  // use the parentheses to call the function
    std::cout << "ending main()\n";

    return 0;
}
