#include<iostream>

using namespace std;

int reverseFunction( int );

int main()
{
   int number;

   cout << "Enter a number: ";
   cin >> number;

   cout << "The number with its reversed is: ";

   cout << reverseFunction( number ) << endl;
}

    int reverseFunction( int n )
{
   int reverse = 0;

   while ( n > 0 )
   {
      reverse *= 10;
      reverse += n % 10;
      n /= 10;
   }

   return reverse;
}
