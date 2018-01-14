#include <iostream>

using namespace std;

int search(int elem,int *arr,int n);
int insertEnd(int elem,int *arr,int n);
int insertPos(int elem,int pos,int *arr,int n);
int deleteEnd(int n);
int deletePos(int pos,int *arr,int n);

int main(void)
{
  int arr[50],n,elem,pos,choice;
  cout<<"\nEnter the number of desired input elements";
  cin>>n;
  cout<<"\nEnter the elements:\n";
  for(int i=0;i<n;i++)
  {
    cout<<"Element["<<i+1<<"] :";
    cin>>arr[i];
  }

  cout<<"\nWhat operation do you want to perform:";
  cout<<"\n1: Searching an element";
  cout<<"\n2: Inserting at the end";
  cout<<"\n3: Inserting at a specific position";
  cout<<"\n4: Deleting from the end";
  cout<<"\n5: Deleting from the specified position";
  pos:
  cout<<"\n Enter your choice: _";
  cin>>choice;

  switch(choice)
  {
    case 1: cout<<"\n Enter the element to search :";
            cin>>elem;
            pos = search(elem,arr,n);
            if(pos!=-1) cout<<"\nThe element is at position:"<<pos;
            else cout<<"The element is not present";
            break;
    case 2: cout<<"\nEnter the element to be inserted at last:";
            cin>>elem;
            n = insertEnd(elem,arr,n);
            cout<<"\nChanged List:";
            for(int i=0;i<n;i++)
            {
              cout<<arr[i]<<"\n";
            }
            break;
    case 3: cout<<"\nEnter the position where you want to insert the element:";
            cin>>pos;
            cout<<"\nEnter the element to be inserted at last:";
            cin>>elem;
            n=insertPos(elem,pos,arr,n);
            cout<<"\nChanged List:";
            for(int i=0;i<n;i++)
            {
              cout<<arr[i]<<"\n";
            }
            break;
    case 4: cout<<"\nDeleting the last element...";
            n= deleteEnd(n);
            cout<<"\nDeleted";
            break;
    case 5: cout<<"\nEnter the position of the element to be deleted:";
            cin>>pos;
            n = deletePos(pos,arr,n);
            break;
    default: cout<<"\n***Wrong Input***";
             goto pos;
  }
  return 0;
}

int search(int elem,int *arr,int n)
{
  for(int i=0;i<n;i++)
  {
      if(arr[i]==elem) return i+1;
  }
  return -1;
};

int insertEnd(int elem,int *arr,int n)
{
  arr[n]=elem;
  n=n+1;
  return n;
};

int insertPos(int elem,int pos,int *arr,int n)
{
  for(int i=n-1;i>=pos;i--)
  {
    arr[i+1]=arr[i];
  }
  arr[pos]=elem;
  n=n+1;
  return n;
};

int deleteEnd(int n)
{
  n=n-1;
  return n;
};

int deletePos(int pos,int *arr,int n)
{
  for(int i=pos;i<n;i++)
  {
    arr[i]=arr[i+1];
  }
  n=n-1;
  return n;
};
