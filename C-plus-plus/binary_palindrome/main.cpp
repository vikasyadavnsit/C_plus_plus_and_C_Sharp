#include<iostream>
#include<climits>
using namespace std;

int main()
{
    unsigned int Y=0,X=0,temp=0,h=0;
    //cout<<"Enter the Number  ";
    //cin>>Y;
    Y=1<<15 | 1<<16;
    for(int i=0;i<32;i++)
    {
        if((Y&(1<<i)))
        {
            temp=temp|(1<<32-i-1);
        }
    }
    Y=temp;

/*    temp=0;

    for(int i=0;i<32;i++)
    {
        if((Y&(1<<i)))
        {
            temp=temp|(1<<32-i-1);
        }
    }
    Y=temp;
*/
    for(int i=31;i>=0;i--)
    {
       (Y&(1<<i))? cout<<"1" :cout<<"0";
    }
    cout<<endl;

    if((temp^Y))
    cout<<"NOT Palindrome"<<endl;
    else
    cout<<"Palindrome"<<endl;



    return 0;
}
