#include<iostream>
#include<vector>
using namespace std;

int minPathSum(vector<vector<int>>& );
int main()
{
  int rows, cols;
  cout<<"Enter rows: ";
  cin>>rows;
  cout<<"Enter cols: ";
  cin>>cols;

  vector<vector<int>> grid(rows, vector<int>(cols));
  cout<<"Enter elements: "<<endl;
  for(int i=0; i<rows; i++)
  {
    for(int j=0; j<cols; j++)
      cin>>grid[i][j];
  }

  cout<<"Minimum path sum in the grid is: "<<minPathSum(grid)<<endl;

  return 0;
}

int minPathSum(vector<vector<int>>& path)
{
  int m=path.size(), n=path[0].size();

  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i-1>=0 && j-1>=0)
        path[i][j]+= min(path[i-1][j],path[i][j-1]);

      else if(i-1>=0)
          path[i][j]+= path[i-1][j];
      
      else if(j-1>=0)
          path[i][j]+= path[i][j-1];
    }
  }

  return path[m-1][n-1];
}
