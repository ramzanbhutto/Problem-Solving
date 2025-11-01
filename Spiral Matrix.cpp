#include<iostream>
#include<vector>
using namespace std;
vector<int> Order(vector<vector<int>>&);
int main()
{
  int rows,cols;
  cout<<"Enter rows: ";
  cin>>rows;
  cout<<"Enter columns: ";
  cin>>cols;
  vector<vector<int>> matrix(rows,vector<int>(cols));
  cout<<"Enter elements of matrix:\n";
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
      cin>>matrix[i][j];
  }
  vector<int> result = Order(matrix);
  cout<<"Spiral order of matrix is: ";
  for(int i:result)
    cout<<i<<" ";
  cout<<endl;
  return 0;
}
vector<int> Order(vector<vector<int>>& matrix){
  int left=0,right=matrix[0].size()-1, top=0,bottom=matrix.size()-1;
  vector<int> spiral;

  while(left<=right && top<=bottom)
  {
    for(int i=left;i<=right;i++) spiral.push_back(matrix[top][i]);
    top++;
    for(int i=top;i<=bottom;i++) spiral.push_back(matrix[i][right]);
    right--;
    if(top<=bottom)
      for(int i=right;i>=left;i--) spiral.push_back(matrix[bottom][i]);
    bottom--;
    if(left<=right)
      for(int i=bottom;i>=top;i--) spiral.push_back(matrix[i][left]);
    left++;
  }

  return spiral;
}
