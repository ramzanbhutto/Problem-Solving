#include<iostream>
using namespace std;
int main()
{
  int n; 
  cin>>n;
  int arr1[n], arr2[n];

  for(int &i: arr1)
      cin>>i;

  for(int &j:arr2)
      j=0;

  int digit=0;
  for(int i=0;i<n;i++)
  {
    while(arr1[i]!=0)
    {
      digit=arr1[i]%10;
      arr2[i]+=digit;
      arr1[i]/=10;
    }
  }

  for(int &j: arr2)
  cout<<j<<endl;

  return 0;
}
