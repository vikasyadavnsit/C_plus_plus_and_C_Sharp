#include <iostream>
using namespace std;

struct  node
{
    int data;
    node* next;
};

struct  node2
{
    int data;
    node2* next;
};

void push(struct node** temp,int data)
{
   struct node* temp2 = new node;
   temp2->data=data;
   temp2->next=*temp;
   *temp=temp2;
}

void push2(struct node2 ** temp,int data)
{
   struct node2* temp2 = new node2;
   temp2->data=data;
   temp2->next=*temp;
   *temp=temp2;
}

void sort(struct node* temp)
{
  struct node *trip=temp;
  struct node *trip2=temp;
  trip2=trip2->next;

  for(trip;trip!=0;trip=trip->next)
  {
     for(trip2=temp;trip2!=0;trip2=trip2->next)
     {
       if(trip->data<trip2->data)
       {
          int temppp=trip->data;
          trip->data=trip2->data;
          trip2->data=temppp;
       }
     }
  }
}

void sort2(struct node2* temp)
{
  struct node2 *trip=temp;
  struct node2 *trip2=temp;
  trip2=trip2->next;

  for(;trip!=0;trip=trip->next)
  {
     for(trip2=temp;trip2!=0;trip2=trip2->next)
     {
       if(trip->data<trip2->data)
       {
          int temppp=trip->data;
          trip->data=trip2->data;
          trip2->data=temppp;
       }
     }
  }
}

void print(struct node* temp)
{
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void print2(struct node2* temp)
{
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void merge(struct node* temp,struct node2* temp2)
{
   while(temp->next!=0)
   {
       temp=temp->next;
   }
   temp->next=(node*)temp2;
}

int main()
{

    struct node* head=NULL;
    struct node2* head2=NULL;

    push(&head,1);
    push(&head,5);
    push(&head,3);
    push(&head,7);
    push(&head,2);

    push2(&head2,45);
    push2(&head2,4);
    push2(&head2,67);
    push2(&head2,1);
    push2(&head2,11);

    //sort(head);
    //sort2(head2);

    print(head);
    cout<<endl;
    print2(head2);
    cout<<endl;

    merge(head,head2);

    sort(head);
    print(head);
    cout<<endl;



    return 0;
}
