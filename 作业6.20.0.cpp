#include<iostream>

using namespace std;

bool multiple ( int,int );

int main ()
{
    int number1;
    int number2;

    cout << " Enter the first number: ";
    cin >> number1;
    cout << " Enter the second number: ";
    cin >> number2;

    if ( multiple ( number1,number2 ))
        cout << "True";
    else
        cout << "False";
}


bool multiple ( int number1,int number2 )
{
    return !( number1 % number2);
}
