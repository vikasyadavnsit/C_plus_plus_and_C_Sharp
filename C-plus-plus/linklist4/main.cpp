#include <iostream>
using namespace std;

struct  node
{
    int data;
    node* next;
};

struct node* push(int data)
{
   struct node* temp2 = new node;
   temp2->data=data;
   return temp2;
}

void loopremoval(node* , node*);

bool detection(struct node*temp)
{
  struct node*slow=temp,*fast=temp;
  while(fast&&slow)
  {
      slow=slow->next;
      fast=fast->next->next;
      if(slow==fast)
        {
            loopremoval(temp,slow);
            return 1;
        }

  }
  return 0;
}

void loopremoval(struct node* head,struct node* loopnode)
{
  struct node* ptr=head,*ptr1=loopnode;

  while(1)
  {
    ptr1=loopnode;
    while(ptr1->next!=loopnode&&ptr!=ptr1->next)
        ptr1=ptr1->next;

    if(ptr1->next==ptr)
    {
      ptr1->next=NULL;
      return ;
    }
    ptr=ptr->next;
  }
}

int main()
{
  struct node* head=0;
  head=push(1);
  head->next=push(2);
  head->next->next=push(3);
  head->next->next->next=push(4);
  head->next->next->next->next=push(5);
  head->next->next->next->next->next=push(6);
  head->next->next->next->next->next->next=head->next->next->next;

  //cout<<detection(head);
   cout<<detection(head)<<endl;
   cout<<detection(head)<<endl;
  // loopremoval(head);



}
