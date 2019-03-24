#include <iostream>
#include "Account.h"
using namespace std;
Account::Account( int initialBalance )
{

   int balance = 0;

   if ( initialBalance > 0 )
      balance = initialBalance;

   if ( initialBalance < 0 )
      cout << "Error: Invalid initial balance.\n" << endl;
}

void Account::credit( int amount )
{
   balance = balance + amount;
}

void Account::debit( int amount )
{
   if ( amount > balance )
      cout << "Debit amount exceeded account balance.\n" << endl;
   if ( amount <= balance )
      balance = balance - amount;
}

int Account::getBalance()
{
   return balance;
}
