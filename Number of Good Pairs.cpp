#include<iostream>
#include <unordered_map>
#include<vector>
using namespace std;
int numIndenticalPairs(vector<int>&);
int main()
{
  int size;
  cout<<"Size: ";
  cin>>size;
  vector<int> nums(size);
  cout<<"Enter elements: ";
  for(int &n:nums)
  cin>>n;

  cout<<"Number of good pairs are: "<<numIndenticalPairs(nums)<<endl;

  return 0;
}
int numIndenticalPairs(vector<int>& num)
{
  int count=0;
  unordered_map<int,int> map;
  for(int n:num){
    count+=map[n];
    map[n]++;
  }

  return count;
}
