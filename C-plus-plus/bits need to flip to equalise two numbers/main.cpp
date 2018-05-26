#include <iostream>
#include<stdio.h>
using namespace std;

void recur(int n)
{  if(n>1)
   recur(n/16);
   cout<<n%16;
}

int main()
{
   /* unsigned int x=10,y=20,i=32,count=0;
    unsigned int a=0,b=0;

    while(i--)
    {
       a=x&1;
       b=y&1;
       x=x>>1;
       y=y>>1;
       if(a!=b)
        count++;

    }
    cout<<count<<endl;

  */

   // check a number is either bleak of not
/*     int n=3,sum=0;;

     bool bleak=true;
     while(sum<=n)
     {
        if(sum +__builtin_popcount(sum)==n)
         bleak=false;
         sum++;
     }
     bleak ?cout<<1:cout<<0;

*/
  int n=23,temp=0,rem=0,p=1;
 // binary representation of number
  //recur(23);


    cout<<temp;
 //   unsigned i;
    //for (i = INT_MIN; i > 0; i = i / 2)
     //   (n & i)? printf("1"): printf("0");

    return 0;
}
