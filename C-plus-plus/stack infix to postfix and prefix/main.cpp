#include<iostream>
#include<cstring>
using namespace std;

int sz=0;

struct Stack
{
  int top=-1;
  int * array;

}*head=0;

bool isempty()
{
  if(head->top==-1)
    return true;
  return false;
}

bool fullstack()
{
  if(head->top==sz)
    return true;
  return false;
}

void pushstack(char data)
{
   if(!fullstack())
    head->array[++head->top]=data;
}

char popstack()
{
   if(!isempty())
    return head->array[head->top--];
   return NULL;
}

void infixtpostfix(char *str)
{
   for(p=0;str[i],p++)
   {

   }

}



int main()
{
  string str="s+d-fsfsdfsf(s)";
  sz=str.size();
  head=new Stack;
  head->top=-1;
  head->array = new int[str.size()];

  infixtpostfix(str);

}
