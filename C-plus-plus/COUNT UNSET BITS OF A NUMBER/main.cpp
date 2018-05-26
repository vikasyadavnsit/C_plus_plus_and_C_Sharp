#include <iostream>

using namespace std;

int countUnsetBits(int n)
{
    int x = n;

    // Make all bits set MSB
    // (including MSB)

    // This makes sure two bits
    // (From MSB and including MSB)
    // are set
    n |= n >> 1;

    // This makes sure 4 bits
    // (From MSB and including MSB)
    // are set
    n |= n >> 2;

    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;

    // Count set bits in toggled number
    return  __builtin_popcount(x ^ n);
}


int main()
{
   int y=100,count=0,count1=0;

   for(int i=0;i<=31;i++)
   {
      (y&(1<<i))? cout<<1 :cout<<0;
   }
   cout<<endl;

   y=((y&0x0000ffff)<<16) | ((y&0xffff0000)>>16);
   y=((y&0x00ff00ff)<<8) | ((y&0xff00ff00)>>8);
   y=((y&0x0f0f0f0f)<<4) | ((y&0xf0f0f0f0)>>4);
   y=((y&3333333333)<<2) | ((y&0xcccccccc)>>2);
   y=((y&0x55555555)<<1) | ((y&0xaaaaaaaa)>>1);

   for(int i=0;i<=31;i++)
   {
      (y&(1<<i))? cout<<1 :cout<<0;
   }
   cout<<endl;

   for(int x=1;x<=y;x<<=1)
   {
       if((x&y)==0)
        count++;
       else
        count1++;
   }

   cout<<"Number of ZEROS "<<count<<endl;
   cout<<"Number of ONES  "<<count1<<endl;

   int n = 17;
  cout << countUnsetBits(n);
  return 0;
}
