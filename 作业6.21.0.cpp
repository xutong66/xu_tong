#include<iostream>

using namespace std;

bool iseven ( int );

int main ()
{
    int x = 0;

    for ( int i = 1;i <= 4;i++)
    {
        cout << "\nEnter an integer: ";
        cin >> x;

    if ( iseven ( x ))
        cout << x << "True";
    else
        cout << x <<"False";
}
    cout << endl;
}

bool iseven ( int a )
{
    return ! ( a % 2 );
}
