#include <iostream>
using namespace std;

int main()
{
   double radius;
   double a = 3.14159;
   cout << "Enter the radius: ";
   cin >> radius;
   cout << "The diameter is " << radius * 2.0;
   cout << "\nThe circumference is " << 2.0 * a * radius;
   cout << "\nThe area is " << a * radius * radius << endl;
}
