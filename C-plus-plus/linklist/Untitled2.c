#include<stdio.h>
void showbit(unsigned char);
int main()
{
    unsigned char num;
    for (num=0;num<=5;num++)
    {
        printf("\ndecimal %d is same as binary",num)
    showbit(num)
    }
    return 0;

}
void showbit(unsigned char)
{
    int i;
    unsigned char j,k,l;
    for(i=7;i>=0;i--)
    {
        j=i
        l=1<<j;
        k=n&l
        k==0?printf("0"):printf("1");
    }
}
