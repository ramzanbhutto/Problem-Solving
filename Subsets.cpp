#include<iostream>
#include<vector>
using namespace std;

// Generating all subsets using Bit Manipulation
vector<vector<int>> subsets(vector<int> nums){
  int n = nums.size();
  vector<vector<int>> res;
  int total_subsets = 1<<n; // 2^n subsets 

  for(int mask=0; mask<total_subsets; mask++){
    vector<int> subset;
    for(int i=0; i<n; i++){
      if(mask & (1<<i)){
        subset.push_back(nums[i]);
      }
    }
    res.push_back(subset);
  }

  return res;
}

// Generating all subsets using Recursion
void RecSolve(int i, vector<int> nums, vector<vector<int>> &res, vector<int> curr){
  if(i==nums.size()){
    res.push_back(curr);
    return;
  }
  // Exclude nums[i]
  RecSolve(i+1, nums, res, curr);
  // Include nums[i]
  curr.push_back(nums[i]);
  // Move to next
  RecSolve(i+1, nums, res, curr);
}


int main(){
  int n;
  cout<<"Enter number of elements: ";
  cin>>n;

  vector<int> nums(n);
  cout<<"Enter the elements: ";
  for(int &i:nums) cin>>i;

  int choice;
  cout<<"Choose method to find subsets:\n1. Iterative\n2. Recursive\nEnter choice: ";
  cin>>choice;
 
  if(choice==1){
   // Iterative Approach
   vector<vector<int>> result = subsets(nums);  

   cout<<"All subsets are: \n";
   for(const auto &subset: result){
    cout<<"[ ";
     for(int num: subset){
      cout<<num<<" ";
     }
     cout<<"]\n";
  }
 }   

  else{
   // Recursive Approach
   vector<vector<int>> Recres;
   RecSolve(0, nums, Recres, {});
   
    cout<<"All subsets using Recursion are: \n";
    for(const auto &subset: Recres){
     cout<<"[ ";
     for(int num: subset){
       cout<<num<<" ";
     }
     cout<<"]\n";
   }
 }

  return 0;
}
