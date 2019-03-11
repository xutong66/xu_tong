#include <iostream>

using namespace std;

int main()
{
    int radius = 0;
    int diameter = 0;
    int perimeter = 0;
    int area = 0;

    std::cout << "Enter the radius: ";
    std::cin >> radius;

    std::cout << "Diameter is " << radius * 2 << std::endl;
    std::cout << "Perimeter is " << radius * 2 * 3.14159 << std::endl;
    std::cout << "Area is " << radius * radius * 3.14159 << std::endl;
}
