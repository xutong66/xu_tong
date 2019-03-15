#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    cout << " Enter a integer: ";
    cin >> a;

    if ( a % 2 == 0 )
        cout << a << " is an even number.";
    if ( a % 2 != 0 )
        cout << a << " is an add number.";
}
