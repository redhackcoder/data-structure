#include<iostream>
#include<malloc.h>
using namespace std;

struct node
{
  int n;
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
