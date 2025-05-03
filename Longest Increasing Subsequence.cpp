#include<iostream>
#include<vector>
using namespace std;
int lengthOfLIS(vector<int>&);
int main()
{
  int n;
  cout<<"Size of array: ";
  cin>>n;
  vector<int> arr(n);
  cout<<"Enter the elements of array: ";
  for(int &i:arr)
   cin>>i;

  cout<<"Length of longest increasing subsequence is: "<<lengthOfLIS(arr)<<endl;

  return 0;
}
int lengthOfLIS(vector<int>& nums){
  int Max=1;
  vector<int> dp(nums.size(),1);

  for(int i=1; i<nums.size(); i++){
    for(int j=0; j<i; j++){
      
     if(nums[i] > nums[j] && dp[j]+1 > dp[i]){
        dp[i] = dp[j]+1;
      }

    }

    Max = max(Max, dp[i]);
  }

  return Max;
}
