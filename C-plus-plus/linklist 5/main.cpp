#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

struct  node
{
    int data;
    node* next;
};

struct  node1
{
    int data;
    node1* next;
}*head1=0;

struct  node2
{
    int data;
    node2* next;
}*head2=0;

void push(struct node ** head, int data)
{
   struct node* temp=(node *)malloc(sizeof(node*));
   temp->data=data;
   temp->next=*head;
   *head=temp;
}

void print(struct node* temp)
{
    while(temp)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}

void print2(struct node2* temp)
{
    while(temp!=0)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}

void print1(struct node1* temp)
{
    while(temp!=0)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}

void reverse(struct node** head)
{
  struct node* prev=0,*temp=*head,*temp2=*head;
  while(temp->next!=0)
  {
      temp2=temp;
      temp=temp->next;
      temp2->next=prev;
      prev=temp2;
  }
  temp->next=prev;
  *head=temp;
}

void printrandom(struct node** head1)
{
   struct node* temp=*head1,*head=*head1;
   srand(time(NULL));
   for(int n=1;temp!=0;n++)
   {
       if(rand()%n==0)
         head=head->next;
       temp=temp->next;
   }
   cout<<head->data<<endl;
}

void seprate(struct node*head)
{
   bool abc=true;

   while(head!=0)
   {
       if(abc==true)
       {
         struct node1* head11=new node1;
         head11->data=head->data;
         head11->next=head1;
         head1=head11;
         abc=false;
       }
       else
       {
         struct node2* head11=new node2;
         head11->data=head->data;
         head11->next=head2;
         head2=head11;
         abc=true;
       }
       head=head->next;
   }
}


int main()
{
    struct node * head=0;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);

    print(head);
    reverse(&head);
    print(head);
    //printrandom(&head);
    seprate(head);
    print1(head1);
    print2(head2);

    return 0;
}
