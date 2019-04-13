#include<iostream>

using namespace std;

double celsius ( double );
double fahrenheit ( double );

int main (){

    for (int i = 0; i<= 100; i++ ){
        cout << fahrenheit( i ) << endl;                //重点1
    }

    for(int j=32;j<=212;j++){
        cout << celsius( j ) << endl;                   //重点2
    }
}

double celsius ( double a ){                            //重点3
    return ((a - 32)/1.8);
}

double fahrenheit ( double b ){
    return ( b * 1.8 + 32 );
}
