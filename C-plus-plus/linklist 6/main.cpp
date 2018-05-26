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
    while(temp!=0)
    {
        cout<<temp->data;
        temp=temp->next;
    } cout<<endl;
}


void oddeven(struct node* temp)
{
   while(temp!=0)
   {
       if((temp->data)%2==0)
       {
          struct node* key=new node;
          key->data=temp->data;
          key->next=a;
          a=key;
       }
      else
       {
          struct node* key=new node;
          key->data=temp->data;
          key->next=b;
          b=key;
       }
       temp=temp->next;
   }
}

void merge()
{  head=0;
   while(b!=0)
   {
       struct node* bb=new node;
       bb->data=b->data;
       bb->next=head;
       head=bb;
       b=b->next;
   }
//    print(head);

   while(a!=0)
   {
       struct node* aa=new node;
       aa->data=a->data;
       aa->next=head;
       head=aa;
       a=a->next;
   }
}

int main()
{
   push(1);push(2);push(3);push(4);push(5);push(6);
   print(head);

   oddeven(head);
   print(a);
   print(b);

   merge();
   print(head);


    return 0;
}
