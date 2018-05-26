#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int arr[100]={0},i=-1;
int l=-1;
char arrc[100];//={'1'};
void push(int data)
{
    i++;
    arr[i]=data;
    cout<<arr[i]<<" ";
}
void pop()
{
    cout<<arr[i]<<" ";
    i--;
}

void pushc(char c)
{
    l++;
    arrc[l]=c;
    cout<<arrc[l]<<" ";
}
void popc()
{
    cout<<arrc[l]<<" ";
    l--;
}

bool isempty()
{
    if(i==-1)
       return true;
    return false;
}

bool isemptyc()
{
    if(l==-1)
       return true;
    return false;
}

bool peek()
{
   if(i==99)
      return true;
   return false;
}

void balanceparenthesis(char *str)
{
  for(int p=0;str[p]!='\0';p++)
  {
     if(str[p]=='(' || str[p]=='[' || str[p]=='{' )
      pushc(str[p]);

     if((str[p]==')') && arrc[l]=='(' )
      popc();
     else if((str[p]==']')&& arrc[l]=='[' )
      popc();
     else if((str[p]=='}')&& arrc[l]=='{' )
      popc();

  }

  if(isemptyc())
     cout<<"Balanced";
  else
    cout<<"Unbalanced";
}

int main()
{
/*   for(int p=1;p<10;p++)
   {
     srand(time(NULL));
     push(rand()%p+1);
   }
   cout<<endl;

   while(!isempty())
   pop();
*/

  balanceparenthesis("((dfss{()}dfsf))sffsf");
}
