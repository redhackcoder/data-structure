#include<iostream.h>
#include<conio.h>

using namespace std;

struct node{
  struct node *left;
  int data;
  struct node *right;
};

node *TREE = NULL;

 searchElement(TREE, val)
{
  if(TREE!=NULL){
    if(TREE->data == val)
    {
      return TREE;
    }
    else
    {
      if(val < TREE->data){
        return searchElement(TREE->left,val);
      }
      else{
        return searchElement(TREE->right,val);
      }
    }
  }
}

void
