#include<iostream>
#include <vector>
using namespace std;
#define endl "\n"

const int r=5,c=5;
int beautiful(int[][c]);
int main()
{
  int arr[5][5];
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
      cin>>*(*(arr+i)+j);
  }
  int steps=beautiful(arr);
  
  cout<<steps<<endl;
  
  return 0;
}

int beautiful(int v[r][c])
{
  vector<int> index(2,-1);
  
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
    {
      if(v[i][j]==1)
      {
        index[0]=i;
        index[1]=j;
        goto label;
      }
    }
  }
  
label:
  if(index[0]==2 && index[1]==2)
    return 0;
  
  return abs(index[0]-2)+abs(index[1]-2);
}
