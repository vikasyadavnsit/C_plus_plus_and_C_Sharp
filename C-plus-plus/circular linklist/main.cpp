#include<bits/stdc++.h>
using namespace std;

struct node
{
   int data;
   node* next;
}*first=0,*last=0;

void insertdata(int data)
{
    struct node* temp=new node;
    temp->data=data;
    if(last==0&&first==0)
    {
       last=first=temp;
       last->next=first;
       first->next=last;
    }
    else
    {
        if(temp->data<=first->data)
        {
            temp->next=first;
            last->next=temp;
            first=temp;
        }
        else if(temp->data>=last->data)
        {
            temp->next=first;
            last->next=temp;
            last=last->next;
        }
        else
        {
            struct node* trye=first,*prev=0;
            while(data>=trye->data)
            {
              prev=trye;
              trye=trye->next;
            }
            temp->next=prev->next;
            prev->next=temp;
        }
    }
}

void print(struct node* f,struct node* l)
{
    while(f!=l)
    {
        cout<<f->data<<" ";
        f=f->next;
    }
    cout<<f->data; cout<<endl;
}

int main()
{
   insertdata(1);
   insertdata(2);
   insertdata(1);
   insertdata(11);
   insertdata(123);
   insertdata(15);
   insertdata(0);

   print(first,last);


}
