#include <iostream>
using namespace std;

struct node
{
   int data;
   struct node* next;
   struct node* prev;
}*head=0,*endss=nullptr;

void push(int data)
{
    struct node* temp=new node;
    temp->data=data;
    temp->prev=0;
    if(head!=0)
      head->prev=temp;
    temp->next=head;
    head=temp;

}

void print(struct node* temp)
{
    struct node* last=0;
    while(temp)
    {   last=temp;
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    endss = last;

    while(endss!=0)
    {
      cout<<endss->data<<" ";
      endss=endss->prev;
    }cout<<endl;
}

void insertnode(int data)
{
    struct node * temp=new node;
    temp->data=data;
    temp->next=0;
    temp->prev=0;
    if(head==0)
      head=endss=temp;
    else
    {
      if(data<=head->data)
      {
          temp->next=head;
          head->prev=temp;
          head=temp;
      }
      else if(data>=endss->data)
      {
           endss->next=temp;
           temp->prev=endss;
           endss=temp;
      }
      else
      {
          struct node* mov=head,*ptemp=0;
          while(data>=mov->data)
          {
            ptemp=mov;
            mov=mov->next;
          }
          temp->next=mov;
          mov->prev=temp;
          temp->prev=ptemp;
          ptemp->next=temp;
      }
    }
}


int main()
{
/*    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    print(head);
*/
    insertnode(1);
    insertnode(20);
    insertnode(15);
    insertnode(0);
    insertnode(28);
    print(head);

    return 0;
}
