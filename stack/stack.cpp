#include<iostream>
#include<conio.h>
using namespace std;

int arr[20],top=-1;
const int CAPACITY=20;

void arrayImplementationStack();
bool APush(int elem);
bool APop();

int main(void)
{
  int choice;
  cout<<"\n 1. Implementation of stack using array";
  cout<<"\n 2. Implementation of stack using linked list";
  cout<<"\nEnter your choice : ";
  pos:
  cin>>choice;
  if(choice==1)
  {
    arrayImplementationStack();
  }
  else if(choice==2)
  {
    //linkedImplementationStack();
  }
  else
  {
    cout<<"Retry:";
    goto pos;
  }
  return 0;
}



void arrayImplementationStack()
{
  int option,elem;
  char cont;
  bool done;
  do{

      cout<<"\nChoose one option: ";
      cout<<"\n 1. Push \t\t 2. Pop";
      cout<<"\nEnter your choice : ";
      position:
      cin>>option;
      if(option==1)
      {
        cout<<"\nEnter the element : ";
        cin>>elem;
        done = APush(elem);
        if(done)
        {
          cout<<"\nPushed successfully into the stack";
          cout<<"\nStack: \n";
          for(int i=0;i<=top;i++)
          {
            cout<<" "<<arr[i]<<" ";
          }
        }
        else
        {
          cout<<"\nError while pushing the element";
        }
      }
      else if(option==2)
      {
        done = APop();
        if(done)
        {
          cout<<"\nPopped successfully from the stack";
          cout<<"\nStack: \n";
          for(int i=0;i<=top;i++)
          {
            cout<<" "<<arr[i]<<" ";
          }
        }
        else
        {
          cout<<"\nError while pushing the element";
        }
      }
      else
      {
        cout<<"Retry:";
        goto position;
      }
      cout<<"\nDo you want to continue: ";
      cin>>cont;
  }while(cont=='Y'||cont=='y');
}

bool APop()
{
  if(top==-1)
  {
    cout<<"\n The list is empty";
    return false;
  }
  top--;
  return true;
};

bool APush(int elem)
{
  if(top==CAPACITY)
  {
    cout<<"\nStack is already full.";
    return false;
  }
  top++;
  arr[top]=elem;
  return true;
};
