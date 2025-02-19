#include<iostream>
using namespace std;
#define endl "\n"

int binary_search(int*,int,int,int);
int main()
{
  int arr[10];
  cout<<"Enter 10 elements in sorted form: ";
  for(int& i:arr)
     cin>>i; 
    
  int target;
  cout<<"Enter target to look for: ";
  cin>>target;

  int size=sizeof(arr)/sizeof(int);
  int left=0,right=size-1;

  int found=binary_search(arr,left,right,target);
  if(found != -1)
    cout<<"Target is present at "<<found<<" index"<<endl;
  else
    cout<<"Target not found"<<endl;
 
  return 0;
}

int binary_search(int* vec,int left,int right,int target)
{
  
  while(left<=right)
  {
    int mid=left+(right-left)/2;

    if(vec[mid]==target)
      return mid;

    if(vec[mid]>target)
      right=mid-1;        //ignores right half

    else
      left=mid+1;      //ignores left half
  }

  return -1;

}
