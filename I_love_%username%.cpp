#include<iostream>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int x;
  cin>>x;
  int arr[x];
  for(int&i:arr)
  cin>>i;
  
  int count=0,Min=arr[0],Max=arr[0];

  for(int i=1;i<x;i++){
    if(Max>arr[i]){
      count++;
      Max=arr[i];
    }
    else if(Min<arr[i]){
      count++;
      Min=arr[i];
    }
  }

  cout<<count<<endl;
  return 0;
}
