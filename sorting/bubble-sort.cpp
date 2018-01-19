#include<iostream>
#include<conio.h>

using namespace std;

int main(void)
{
  int arr[30],n;
  cout<<"\nEnter the number of elements required: ";
  cin>>n;
  cout<<"\nEnter the elements: ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  
  cout<<"\nSorted list is: \n";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}




for(int i=n/2,j=n/2;i>=0 && j<n;i--,j++)
{
  if(temp>a[i] || temp>a[j])
  {
    if(a[i]<a[j])
    {
      temp=a[i];
    }
    else if(temp>a[j])
    {
      temp=a[j];
    }

  }
}
