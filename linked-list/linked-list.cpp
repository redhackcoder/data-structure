#include<iostream>
#include<malloc.h>
using namespace std;

struct node
{
  int data;
  struct node *next;
};

struct node *start = NULL;

int main(void)
{

}

struct node *create_ll(struct node *start)
{
  struct node *new_node, *ptr;
  int num;
  cout<<"\nEnter the data: ";
  cin>>num;
  new_node=(struct node*)malloc(sizeof(struct node));
  new_node->data=num;
  if(start==NULL)
  {
    new_node->next=NULL;
    start=new_node;
  }
  else
  {
    ptr=start;
    while(ptr->next!=NULL) ptr=ptr->next;
    ptr->next=new_node;
    new_node->next=NULL;
  }
  return start;
}

void *display(struct node *start)
{
  struct node *ptr;
  ptr=start;
  while(ptr!=NULL)
  {
    cout<<"\n"<<ptr->data;
    ptr=ptr->next;
  }
}

struct node *insert_beg(struct node *start)
{
  struct node *new_node;
  int num;
  cout<<"\nEnter the data:";
  cin>>num;
  new_node=(struct node *)malloc(sizeof(struct node));
  new_node->data=num;
  new_node->next=start;
  start=new_node;
  return start;
}

struct node *insert_end(struct node *start)
{
  struct node *ptr, *new_node;
  ptr=start;
  int num;
  cout<<"\nEnter the data:";
  cin>>num;
  new_node=(struct node *)malloc(sizeof(struct node));
  new_node->data=num;
  new_node->next=NULL;
  while(ptr!=NULL) ptr=ptr->next;
  ptr->next=new_node;
  return start;
}

struct node *insert_before(struct node *start)
{
  struct node *new_node,*ptr,*preptr;
  int num,val;
  cout<<"\nEnter the data:";
  cin>>num;
  cout<<"\nEnter the value before which the data is to be inserted:";
  cin>>val;
  new_node=(struct node *)malloc(sizeof(struct node));
  new_node->data=num;
  ptr=start;
  while(ptr->data!=val)
  {
    preptr=ptr;
    ptr=ptr->next;
  }
  preptr->next=new_node;
  new_node->next=ptr;
  return start;
}

struct node *insert_after(struct node *start)
{
  struct node *new_node,*ptr,*preptr;
  int num,val;
  cout<<"\nEnter the data:";
  cin>>num;
  cout<<"\nEnter the value before which the data is to be inserted:";
  cin>>val;
  new_node=(struct node *)malloc(sizeof(struct node));
  new_node->data=num;
  ptr=start;
  preptr=ptr;
  while(preptr->data!=val)
  {
    preptr=ptr;
    ptr=ptr->next;
  }
  preptr->next=new_node;
  new_node->next=ptr;
  return start;
}
