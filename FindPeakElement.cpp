#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findPeakElement(vector<int>& nums){
  int Max= *max_element(nums.begin(),nums.end());
  auto it= find(nums.begin(),nums.end(),Max);
  return it-nums.begin();
}
int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  vector<int> nums(n);
  cout<<"Enter the elements of the array: ";
  for(int &i:nums) cin>>i;
  cout<<findPeakElement(nums);
  return 0;
}
