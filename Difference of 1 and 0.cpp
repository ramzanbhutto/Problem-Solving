#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> onesMinusZeros(vector<vector<int>> &);
int main()
{
  int rows,cols;
  cout<<"Rows: ";
  cin>>rows;
  cout<<"Columns: ";
  cin>>cols;
  vector<vector<int>> grid(rows,vector<int>(cols));
  cout<<"Elements: \n";
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
      cin>>grid[i][j];
  }
  
  onesMinusZeros(grid);
  cout<<"Result: \n";
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
      cout<<grid[i][j]<<" ";
    cout<<endl;
  }

  return 0;
}

vector<vector<int>> onesMinusZeros(vector<vector<int>>& dp){
  int m=dp.size();
  int n=dp[0].size();
  vector<int> row(m,0);
  vector<int> col(n,0);

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      row[i]+= dp[i][j];
      col[j]+= dp[i][j];
    }
  }

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      dp[i][j]= 2*(row[i]+col[j])-(m+n);
    }
  }
  return dp;
}
