#include<iostream>
#include<vector>
using namespace std;
vector<int> runningSum(vector<int>&);
int main()
{
  int size;
  cout<<"Size: ";
  cin>>size;
  vector<int> arr(size);
  cout<<"Elements: ";
  for(int &n:arr)
    cin>>n;

  vector<int>sum= runningSum(arr);
  cout<<"Sum as per prefix is: ";
  for(int a: sum)
   cout<<a<<" ";

  cout<<endl;

  return 0;
}

vector<int> runningSum(vector<int>& nums)
{
  vector<int> sum(nums.size());
  sum[0]=nums[0];
  for(int i=1;i<nums.size();i++)
    sum[i]= sum[i-1]+nums[i];

  return sum;
}
