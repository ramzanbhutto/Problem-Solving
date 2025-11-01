#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define endl "\n"
int singleNumber(vector<int>& );
int main()
{
  int x;
  cin>>x;
  vector<int> vec(x);
  for(int& i:vec)
  cin>>i;

  cout<<"Single number in vector is: "<<(singleNumber(vec))<<endl;

  return 0;
}

int singleNumber(vector<int>& nums)
{
  sort(nums.begin(),nums.end());

  for(int i=1;i<nums.size();i+=3){
    if(nums[i]!=nums[i-1])
      return nums[i-1];
  }

  return nums[nums.size()-1];
    
}
