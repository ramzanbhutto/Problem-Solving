#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
vector<vector<int>> sortStudents(vector<vector<int>>&,int );
int main()
{
  int rows,cols;
  cout<<"Enter number of rows: ";     cin>>rows;
  cout<<"Enter number of columns: ";  cin>>cols;

  vector<vector<int>> score(rows, vector<int>(cols));
  cout<<"Enter score of each student in rows:\n";
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
       cin>>score[i][j];
  }
  cout<<"\n";

  int k;
  cout<<"Enter the value of k: ";  cin>>k;

  vector<vector<int>> sorted= sortStudents(score,k);
  cout<<"The score of students sorted by kth score is:\n";
  for(int i=0;i<sorted.size();i++)
  {
    for(int j=0;j<sorted[i].size();j++)
       cout<<sorted[i][j]<<" ";
    cout<<"\n";
  }

  return 0;
}

vector<vector<int>> sortStudents(vector<vector<int>>& score,int k)
{
  vector<vector<int>> ans;
  map<int,int> freq;
  
  for(int i=0;i<score.size();i++)  
    freq[score[i][k]]=i;

  for(auto it: freq){
    int i=it.second;
    ans.push_back(score[i]);
  }

  reverse(ans.begin(),ans.end());

  return ans;
}
