#include<iostream>
#include<vector>
using namespace std;

bool checkPossibility(vector<int>& );
int main(){
  int n;
  cout<<"Enter Size: ";
  cin>>n;
  vector<int> vec(n);
  cout<<"Enter elements: ";
  for(int &i: vec) cin>>i;

  if(checkPossibility(vec)) cout<<"true\n";
  else cout<<"false\n";

  return 0;
}

bool checkPossibility(vector<int>& nums){
  int count = 0;
  for(int i = 1; i < nums.size(); i++){
    
    if(nums[i] < nums[i-1]){
      count++;
      if(count > 1) return false;
      if(i-2 >= 0 && nums[i] < nums[i-2] && nums[i-1] > nums[i+1])   nums[i] = nums[i-1]; /* or if(i-2 >= 0 && nums[i-2] > nums[i]) nums[i]= nums[i-1];    else nums[i-1]= nums[i]; */
    }

  }
  return true;
}
