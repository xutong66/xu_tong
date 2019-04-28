#include <iostream>

using namespace std;

int main(){
    int t[2][3];
    t[1][2]=0;
    t[0][0]=0;
    t[0][1]=0;
    t[0][2]=0;
    t[1][0]=0;
    t[1][1]=0;
    t[1][2]=0;
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            t[i][j]=0;
        }
    }
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            cin>>t[i][j];
        }
    }
    for(int i=0;i<=2;i++){
        cout<<t[1][i];
    }
    int result=0;
    for(int i=0;i<=1;i++){
        result+=t[i][2];
    }
}
