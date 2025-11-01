#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& , int );
int main()
{
  int s;
  cout<<"Size: ";
  cin>>s;
  vector<int> vec(s);
  cout<<"Enter elements: ";
  for(int&v:vec)
  cin>>v;

  int target;
  cout<<"Enter target: ";
  cin>>target;
  vector<int> res=twoSum(vec,target);
  cout<<"Indices: ";
  for(int&v:res)
  cout<<v<<" ";
  
  cout<<endl;

  return 0;
}
vector<int> twoSum(vector<int>& nums, int target)
{
  int i=0,j=nums.size()-1;
  while(i<j)
  {
    if(nums[i]+nums[j]==target)
      return {i+1,j+1};
    else if(nums[i]+nums[j]<target)
      i++;
    else
      j--;
  }
  return {};
}
