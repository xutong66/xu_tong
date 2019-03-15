#include <iostream>

using namespace std;

int main()
{
   int a = 0,b = 0,c = 0,d = 0,e = 0,f = -100000000,g = 100000000;

   cout << " Enter five integers: ";
   cin >> a >> b >> c >> d >> e;

   if( a>f ) f = a;

   if( b>f ) f = b;

   if ( c>f ) f = c;

   if( d>f ) f = d;

   if( e>f ) f = e;

  cout << "The largest is: " << f << endl;

   if ( a<g ) g = a;

   if ( b<g ) g = b;

   if ( c<g ) g = c;

   if ( d<g ) g = d;

   if ( e<g ) g = e;

  cout << "The smallest is: " << g << endl;

}
