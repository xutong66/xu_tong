#include<iostream>

using namespace std;

double smallest ( double,double,double );

int main ()
{
    double n1 = 0;
    double n2 = 0;
    double n3 = 0;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    cout << "The smallest is: " << smallest ( n1, n2, n3 )<< endl;

}

double smallest ( double n1,double n2, double n3 )
{
    if ( n1 < n2 && n1 < n3)
        return n1;
    else if ( n2 < n1 && n2 < n3 )
        return n2;
    else if ( n3 < n1 && n3 < n2 )
        return n3;
}
