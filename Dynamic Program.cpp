#include<iostream>
using namespace std;
int main()
{
  int m,n;
  cout<<"Enter rows: ";
  cin>>m;
  cout<<"Enter columns: ";
  cin>>n;

  int** grid=new int*[m];
  for(int i=0;i<m;i++)
    grid[i]=new int[n];

  for(int i=0;i<m;i++)
    grid[i][0]=1;          //filling row1 with 1's

  for(int j=0;j<n;j++)
    grid[0][j]=1;          //filling column1 with 1's


  for(int i=1;i<m;i++)
  {
    for(int j=1;j<n;j++)
      grid[i][j]= grid[i-1][j]+grid[i][j-1];
  }

  cout<<grid[m-1][n-1]<<endl;

  for(int i=0;i<m;i++){
    delete[] grid[i];
    grid[i]=NULL;
  }
  delete[] grid;
  grid=NULL;

  return 0;
}
