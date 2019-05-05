#include<iostream>
using namespace std;

void mystery1(char *, const char *);

int main(){
    char string1[ 80 ];
    char string2[ 80 ];

    cout << "Enter two strings: ";
    cin >> string1 >> string2;
    mystery1 ( string1, string2 );
    cout << string1 << endl;
    }

    void mystery1( char *s1, const char *s2 ){
        while ( *s1 != '\0' )
            ++s1;

    for ( ; (*s1 = * s2 );++s1,++s2 )
        ;
        }


// 这个程序：输入的第一个数与第二个数组合起来形成一个新的数。
//第一个数在前，第二个数在后。
