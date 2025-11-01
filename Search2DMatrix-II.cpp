#include<iostream>
#include<vector>
using namespace std;
#define endl "\n"

bool searchMatrix(vector<vector<int>>& , int );
int main()
{
  int rows,cols;
  cout<<"Enter number of rows: ";
  cin>>rows;
  cout<<"Enter number of columns: ";
  cin>>cols;

  vector<vector<int>> vec(rows, vector<int>(cols));
  cout<<"Enter elements of 2D Vector: "<<endl;
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
      cin>>vec[i][j];
  }

  int target;
  cout<<"Enter target to look for: ";
  cin>>target;

  if(searchMatrix(vec,target))
    cout<<"Target found!"<<endl;
  else
    cout<<"Target missing!"<<endl;

  return 0;
}

bool searchMatrix(vector<vector<int>> &nums, int target)
{
int r=nums.size(), c=nums[0].size();
  int i=0,j=c-1;

  while(i<r && j>=0)
  {
    if(nums[i][j]==target)
      return true;

    else if(nums[i][j]>target)
        j--;
    else
      i++;
  }

  return false;
}
