#include<iostream>
#define endl "\n"
using namespace  std;
int main()
{
  int c;
  cin>>c;
  int arr[c][2];
  
  for(int i=0;i<c;i++)
  {
    for(int j=0;j<2;j++)
      cin>>arr[i][j];
  }
  
  for(int i=0;i<c;i++)
  cout<<arr[i][1]-arr[i][0]<<endl;

return 0;
}
