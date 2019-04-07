
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   long double a = 0.0;
   long double d = 1.0;
   long accuracy = 1000;


   cout << fixed << setprecision( 8 );


   cout << "Accuracy set at: " << accuracy << "\n\nterm\t\ta\n";


   for ( long loop = 1; loop <= accuracy; loop++ )
   {
      if ( loop % 2 != 0 )
         a += 4.0 / d;
      else
         a -= 4.0 / d;
      cout << loop << "\t\t" << a << '\n';

      d += 2.0;
   }

   cout << endl;
}
