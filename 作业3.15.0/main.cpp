#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
   Date date();

   cout << "Month: " << date.getMonth() << endl;
   cout << "Day: " << date.getDay() << endl;
   cout << "Year: " << date.getYear() << endl;

   cout << "\nOriginal date:" << endl;
   date.displayDate();

   date.setMonth();
   date.setDay();
   date.setYear();

   cout << "\nNew date:" << endl;
   date.displayDate();
}

