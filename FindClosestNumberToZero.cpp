#include<iostream>
#include<vector>
using namespace std;

int findClosestNumberToZero(vector<int>& nums){
  int close= nums[0];
  for(int n: nums){
    if(abs(n) < abs(close))   close = n;
    else if(abs(n) == abs(close))  close = max(close, n);
  }

  return close;
}

int main(){
  int n;
  cout<<"Size: ";
  cin>>n;

  vector<int> nums(n);
  cout<<"Enter elements: ";
  for(int &i: nums) cin>>i;

  cout<<"Closest number to zero is: "<<findClosestNumberToZero(nums)<<endl;

  return 0;
}
