#include <iostream>

int main ()
{
    int number1 = 0;
    int number2 = 0;
    int sum = 0;
    int difference = 0;
    int product = 0;
    int consult = 0;

    std::cout << " Enter first integer: ";
    std::cin >> number1;

    std::cout << " Enter second integer: ";
    std::cin >> number2;

    std::cout << "Sum is " << number1 + number2 << std::endl;
    std::cout << "Difference is " << number1 - number2 << std::endl;
    std::cout << "Product is " << number1 * number2 << std::endl;
    std::cout << "Consult is " << number1 / number2 << std::endl;
}
