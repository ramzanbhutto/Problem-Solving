#include<iostream>
#include<vector>
using namespace std;
int minimumOperations(vector<int>&);
int main()
{
  int size;
  cout<<"Size: ";
  cin>>size;
  vector<int> vec(size);
  cout<<"Elements: ";
  for(int& i:vec)
  cin>>i;

  cout<<"Minumum Operations required to make some numbers divisible by three are: "<<minimumOperations(vec)<<endl;

  return 0;
}

int minimumOperations(vector<int>& nums)
{
  int opts=0;
  for(int i=0;i<nums.size();i++)
  {
    if(nums[i]%3 != 0)
      opts++;
  }

  return opts;
}
