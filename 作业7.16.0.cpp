#include <iostream>
#include<array>
using namespace std;

int main()
{
   array<int,36000>npc;
   int x=0,y=0,z=0;
   for(int n=0;n<=35999;n++)
   {
       x=1+rand()%6;
       y=1+rand()%6;
       z=x+y;
      npc[n]=z;
   }
   int a=0,b=0,c=0,d=0,f=0,g=0,h=0,j=0,k=0,l=0,m=0;
   for(int e=0;e<=35999;e++)
   {
       if(npc[e]==2)
        a=a+1;
       if(npc[e]==3)
        b=b+1;
       if(npc[e]==4)
        c=c+1;
       if(npc[e]==5)
        d=d+1;
        if(npc[e]==6)
            f=f+1;
        if(npc[e]==7)
            g=g+1;
        if(npc[e]==8)
            h=h+1;
        if(npc[e]==9)
            j=j+1;
        if(npc[e]==10)
            k=k+1;
        if(npc[e]==11)
            l=l+1;
        if(npc[e]==12)
          m=m+1;
   }
   array<int,11>sum;
   sum[0]=a;
   sum[1]=b;
   sum[2]=c;
   sum[3]=d;
   sum[4]=f;
   sum[5]=g;
   sum[6]=h;
   sum[7]=j;
   sum[8]=j;
   sum[9]=l;
   sum[10]=m;


  cout<<"   "<<"  cishu"<<endl;
  int q=0;
  for(int z=2;z<=12;z++)
    {
        cout<<"["<<z<<"]   "<<sum[q]<<endl;
    q++;
    }

    return 0;
}
