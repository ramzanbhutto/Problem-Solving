#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n][3];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<3;j++)
    {
      cin>>arr[i][j];
    }
  }

  bool chk[n];
  for(bool &x: chk)
    x=false;

  for(int i=0;i<n;i++)
  {
    
    if(arr[i][0]+arr[i][1]==arr[i][2] || arr[i][0]+arr[i][2]==arr[i][1] || arr[i][1]+arr[i][2]==arr[i][0])
        chk[i]=true;
    
  }

  for(int i=0;i<n;i++)
  {
    if(chk[i])
       cout<<"YES"<<endl;
    else
       cout<<"NO"<<endl;
  }

  return 0;
}
