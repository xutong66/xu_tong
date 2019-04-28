#include <iostream>
#include<iomanip>
#include<array>
using namespace std;

int main()
{
    int number;
    array<int,20>a;
    array<int,20>b;
    cout<<"Enter 20 numbers: "<<endl;
    for(int x=0;x<20;x++)
    {
        cin>>number;
        a[x]=number;
    }
    int counter=0
    for(int i=0;i<20;i++)
    {
        int j=0;
        for(j<counter;j++)
            {
            if(a[i]==b[j])
            break;
            }
        if(j==counter)
    {
        b[counter]=a[i];
        counter++;
    }
    }
    cout<<"the result is: "<<endl;
    for(int i=0;i<counter;i++)
        cout<<b[i]<<" ";
}

