#include <iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct link1
{
    int data;
    struct link1 * next;
}*head=0,*ch1,*ch2,*ch3;

void push(int dta)
{
      struct link1 * temp=new link1;
      temp->data=dta;
      temp->next=head;
      head=temp;

}

int main()
{
/*  head= (struct link1*)malloc(sizeof(struct link1));
  head->data=10;
  head->next=0;

  struct link1* good= new link1;
  good->data=100;

  struct link1* bad = new struct link1;
  bad->data=12;

  cout<<head->data;

*/

/*  ch1=new link1;       // traversing
    ch2=new link1;
    ch3=new link1;

    head=ch1;

   ch1->data=1;
   ch1->next=ch2;

   ch2->data=2;
   ch2->next=ch3;

   ch3->data=3;
   ch3->next=0;

   while(head!=NULL)
   {
       cout<<head<<" "<<sizeof(head)<<" "<<head->data<<endl;
       head=head->next;
   }
*/

  // insertion at beginning
 /*
  int int1;
  cout<<"enter nodes you want ";
  cin>>int1;


  while(int1--)
  {
      struct link1 * temp=new link1;
      cout<<"Enter data ";
      cin>>temp->data;

        temp->next=head;
        head=temp;
  }
  while(head!=0)
  {
       cout<<head->data<<endl;
       head=head->next;
  }
   */

   // insertion at end
/*
   int int1;
   cout<<"enter nodes you want ";
   cin>>int1;

   while(int1--)
  {
      struct link1 * temp=new link1;
      cout<<"Enter data ";
      temp->next=0;
      cin>>temp->data;

      if(head==0)
       {
         head=temp;
         struct link1* temp2=head;
       }
      else
      {
       struct link1* temp2=head;
       while(temp2->next!=0)
        temp2=temp2->next;
        temp2->next=temp;
      }
  }
  while(head!=0)
  {
       cout<<head->data<<endl;
       head=head->next;
  }
*/

 // insertion at nth node
/*
   int int1, int2,counte=0;
   //head->next=0;
   cout<<"enter nodes you want ";
   cin>>int1;

   while(int1--)
  {
      struct link1 * temp=new link1;
      cout<<"Enter data ";
      temp->next=0;
      cin>>temp->data;
      cout<<"Enter the node";
      cin>>int2;

      if(head==NULL || int2==1)
      {
        temp->next=head;
        head=temp;
        struct link1* temp2=head;
      }
      else
      {
            struct link1* temp2=head;
            int counter=1;
            while(counter!=int2-1)
            {
                ++counter;
                temp2=temp2->next;
            }
            temp->next=temp2->next;
            temp2->next=temp;
      }
 }
  while(head!=0)
  {
       cout<<head->data<<endl;
       head=head->next;
  }

  */
  push(1);
  push(2);
  push(3);

  push(1);
  push(2);
  push(3);

  struct link1* trip=head;
  while(trip!=0)
  {
       cout<<trip->data;
       trip=trip->next;
  }
  cout<<endl;
  int delt=3;
  //cout<<"\nEnter data to delete ";
 // cin>>delt;

  struct link1* trip2=head;
  trip=head;

  if(trip!=NULL && trip->data==delt)
  {
     trip=trip->next;
     delete trip2;
     head=trip;
  }
  trip=head;
  if(trip!=NULL)
  {
      while(trip!=NULL && trip->data!=delt)
      {
          trip2=trip;
          trip=trip->next;
      }

      if(trip!=0)
      {trip2->next=trip->next;
      delete trip2;
      }
  }

  trip=head;
  while(trip!=NULL)
  {
      cout<<trip->data<<"->";
      trip=trip->next;
  }
    return 0;


}
