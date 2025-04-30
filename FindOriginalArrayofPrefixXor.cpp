#include<iostream>
#include<vector>
using namespace std;
vector<int> findArray(vector<int>& );
int main()
{
  int n;
  cout<<"Size: ";
  cin>>n;
  vector<int> pref(n);
  cout<<"Enter elements after XOR operation: ";
  for(int &i:pref) 
    cin>>i;

  vector<int> ans = findArray(pref);
  cout<<"Elements of array before XOR operation: ";
  for(int i:ans)
    cout<<i<<" ";
  cout<<endl;

  return 0;
}

vector<int>findArray(vector<int>& nums){
  vector<int> res(nums.size());
  res[0] = nums[0];
  for(int i=1; i<nums.size(); i++)
    res[i] = nums[i]^nums[i-1];

  return res;
}
