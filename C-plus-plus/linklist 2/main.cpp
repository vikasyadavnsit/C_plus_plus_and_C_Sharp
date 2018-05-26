#include<iostream>
#include<stdlib.h>
#include<limits.h>
using namespace std;
struct node
{
    int data;
    node * next;
};

void recursearch(struct node* temp)
{
   if(temp==NULL) return ;
   recursearch(temp->next);
   // return  INT_MIN;
   cout<<temp->data;
   return;
}

void push(struct node**temp ,int data)
{
   struct node * temp12=(node * )malloc(sizeof(node *));
   temp12->data=data;
   temp12->next=*temp;
   *temp=temp12;
}
int main()
{
  struct node * head=NULL;
  push(&head,1);
  push(&head,2);
  push(&head,3);
  push(&head,3);
  push(&head,4);
  push(&head,5);
/*
  int count=0;
  while(head!=0)
  {
      head=head->next;
      count++;
  }
   cout<<count;
 */
 /*
   recursearch(head);
*/
  struct node* temp=head;
  while(temp!=0)
  {
      cout<<temp->data;
      temp=temp->next;
  }
  cout<<"\nEnter the nodes to be swapped"<<endl;
  cout<<"Node 1 ";int a;cin>>a;
  cout<<"Node 2 ";int b;cin>>b;

  struct node* temp2=head;
  temp=head;
  while(temp!=0 && temp->data!=a)
  {
      temp=temp->next;
  }
  while(temp2!=0 && temp2->data!=b)
  {
      temp2=temp2->next;
  }
  temp->data=temp->data+temp2->data;
  temp2->data=temp->data-temp2->data;
  temp->data=temp->data-temp2->data;

  temp=head;
  while(temp!=0)
  {
      cout<<temp->data;
      temp=temp->next;
  }

    return 0;
}
