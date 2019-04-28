#include <iostream>
using namespace std;

int main(){
    int sales[3][5];
    int flag=0;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=4;j++){
            sales[i][j]=flag++;
        }
    }

    return 0;
}
