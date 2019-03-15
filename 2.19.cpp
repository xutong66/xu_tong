#include <iostream>

using namespace std;

int main()
{
   int number1 = 0;
   int number2 = 0;
   int number3 = 0;
   int sum = 0;
   int average = 0;
   int product = 0;

   cout << " Input three different integers: ";
   cin >> number1 >> number2 >> number3;

   sum = number1 + number2 + number3;
   average = (number1 + number2 + number3)/3;
   product = number1 * number2 * number3;

   cout << "Sum is " << sum << endl;
   cout << "Average is " << average << endl;
   cout << "Product is " << product << endl;

   int c = min( number1,number2 );
   int d = min(c,number3);
   cout << "Smallest is " << d << endl;

   int a = max( number1,number2 );
   int b = max(a,number3);
   cout << "Largest is " << b << endl;

}
