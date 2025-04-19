#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> getFinalArray(vector<int>&,int,int);
int main(){
  int n;
  cout<<"Size: ";
  cin>>n;
  vector<int> arr(n);
  cout<<"Enter elements: ";
  for(int &i:arr)
    cin>>i;

  int k;
  cout<<"Enter the k number of operations: ";
  cin>>k;
  int multiplier;
  cout<<"Enter the multiplier: ";
  cin>>multiplier;
  getFinalArray(arr,k,multiplier);
  cout<<"Final array after k operations: ";
  for(int i:arr)
    cout<<i<<" ";
  cout<<endl;
  return 0;
}

vector<int> getFinalArray(vector<int>& nums,int k,int multiplier){
  while(k--){
    auto it = min_element(nums.begin(), nums.end());  // Find the minimum element
    int idx= distance(nums.begin(), it);        // Get the index of the minimum element
    nums[idx]*= multiplier;
  }
  return nums;
}
