#include<iostream.h>

struct node
{
  int n;
  node *next;
};

int main(void)
{
  
}

bool search(int n, node *list)
{
  node *ptr = list;
  while(ptr!=NULL)
  {
    if(ptr->n == n) return true;
    ptr=ptr->next;
  }
  return false;
}
