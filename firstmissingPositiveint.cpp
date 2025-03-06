#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int firstMissingPositive(vector<int>&);
int main()
{
  int size;
  cout<<"Size: ";
  cin>>size;
  
  vector<int> vec(size);
  cout<<"Enter elements: ";
  for(int &v:vec)
    cin>>v;

  cout<<"First missing positive integer: "<<firstMissingPositive(vec)<<endl;

  return 0;
}
int firstMissingPositive(vector<int>& nums)
{        
  sort(nums.begin(),nums.end());
             
  int missing=1;
  for(int n:nums)
   {
     if(n>=0 && n==missing)
      missing++;
    }
  return missing;
}
