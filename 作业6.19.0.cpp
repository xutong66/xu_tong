#include<iostream>
#include<cmath>

using namespace std;

double hypotenuse ( double , double );

int main()
{
    double side1;
    double side2;

    cout << " Enter the side1 and side2 ";
    cin >> side1 >> side2;
    cout << " The side3 is " << hypotenuse( side1,side2 );

}

double hypotenuse ( double side1, double side2 )
{
    return sqrt ( side1 * side1 + side2 * side2 );
}
