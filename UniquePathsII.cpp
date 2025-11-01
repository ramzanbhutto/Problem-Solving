#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& );
int main()
{
  int rows,cols;
  cout<<"Enter rows: ";
  cin>>rows;
  cout<<"Enter columns: ";
  cin>>cols;

  vector<vector<int>> obstacleGrid(rows,vector<int>(cols));

  srand(time(0));
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
    {
      obstacleGrid[i][j] = rand()%2;
    }
   }

  cout<<"Grid: "<<endl;
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
    {
      cout<<obstacleGrid[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<"Number of unique paths in the grid: "<<uniquePathsWithObstacles(obstacleGrid)<<endl;

 return 0;
}
int uniquePathsWithObstacles(vector<vector<int>>&grid)
{
  int m=grid.size(), n=grid[0].size();

  if(grid[0][0]==1 || grid[m-1][n-1]==1)
    return 0;

  vector<vector<int>> path(m,vector<int>(n,0));

  path[0][0] = 1;

  for(int i=1;i<m;i++){
    if(grid[i][0]==0)
      path[i][0]=path[i-1][0];
  }

  for(int j=1;j<n;j++){
    if(grid[0][j]==0)
      path[0][j]= path[0][j-1];
  }

  for(int i=1;i<m;i++){
    for(int j=1;j<n;j++){
      if(grid[i][j]==0)
        path[i][j]= path[i-1][j]+path[i][j-1];
    }
  }

  return path[m-1][n-1];
}
