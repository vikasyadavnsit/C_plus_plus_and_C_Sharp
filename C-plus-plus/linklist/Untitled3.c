#include<stdio.h>
void showbit(unsigned char);
int main()
{
    unsigned char num;
    for (num=0;num<=5;num++)
    {
        printf("\ndecimal %d is same as binary",num);
        showbit(num);
    }
    return 0;

}
void showbit(unsigned char n)
{   n=20;
    int i;
    unsigned char j,k,l;
    for(i=7;i>=0;i--)
    {
        j=i;

        l=1<<j;
        printf("\t%d",l);
        k=n&l;
         printf("\t%d",k);
        k==0?printf("0"):printf("b");
    }
}

