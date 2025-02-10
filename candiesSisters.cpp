#include<iostream>
using namespace std;
int main()
{
  int x;
  cin>>x;
  int arr[x];
  for(int &i:arr)
  cin>>i;

  for(int i=0;i<x;i++)
  {
    if(arr[i]%2==0)
      arr[i]=(arr[i]/2)-1;
    else
      arr[i]/=2;
    cout<<arr[i]<<endl;
  }

  return 0;
}
