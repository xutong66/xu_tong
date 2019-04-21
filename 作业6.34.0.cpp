#include<iostream>
#include<cstdlib>

using namespace std;

void guess (int number,int base);
int number = 0;
int base = 0;
char c='y';

int main (){
    while(c=='y'){
        base=rand();
        base=base%50;
        cout<<base;
        cout << "Enter an integer: "<<endl;
        cin >> number;
        while(base!=number){
             guess(number,base);
        }
        if(number=base){
            cout<<"Excellent! You guessed the number!\nwould you like to play again (y or n)?";
            cin>>c;
        }
    }
    return 0;
}

void guess (int number,int base){
    if (number<base){
        cout<<"Too low,Try again.";
        cin>>number;
    }
    if(number>base){
        cout<<"Too high,Try again.";
        cin>>number;
    }

}
