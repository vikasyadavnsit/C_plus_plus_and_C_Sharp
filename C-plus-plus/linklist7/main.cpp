#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
}*head=0,*a=0,*b=0;

void push(int data)
{
    struct node* temp=new node;
    temp->data=data;
    temp->next=head;
    head=temp;
}

void print(struct node* temp)
{
  while(temp)
   cout<<temp->data<<" ",temp=temp->next;
   cout<<endl;
}

int max(int a, int b ,int c)
{
   if(a>b&&a>c)
     return 1;
   if(b>c&&b>a)
     return 2;
    else
     return 3;
}

void zigzig(struct node* temp)
{
   while(temp->next->next)
   {
       if(temp->next->next)
       {
          int b=max(temp->data,temp->next->data,temp->next->next->data);
          if(b==1)
          {
             int t=temp->data;
             temp->data=temp->next->data;
             temp->next->data=t;
          }
          else if(b==3)
          {
             int t=temp->data;
             temp->data=temp->next->next->data;
             temp->next->next->data=t;
          }
       }
      temp=temp->next->next;
   }
}

int main()
{

     push(10);
     push(5);
     push(7);
     push(15);
     push(25);
     push(3);
     print(head);

     zigzig(head);
      print(head);

     return 0;
}
