#include<iostream>
#include<vector>
using namespace std;
class Solution{
private:
  int helper(vector<int>& n,int i, int curr){
    if(i==n.size())  return curr;
    return helper(n,i+1,curr ^ n[i]) + helper(n,i+1,curr);
  }
public:
  int subsetXORSum(vector<int>& nums){
    return helper(nums,0,0);
  }
};
int main(){
  Solution s;
  int size;
  cout<<"Size: ";
  cin>>size;
  vector<int> vec(size);
  cout<<"Elements: ";
  for(int &v:vec)  cin>>v;

  cout<<"Sum of All Subset XOR Totals: "<<s.subsetXORSum(vec)<<endl;
  return 0;
 }
