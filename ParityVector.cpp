#include<iostream>
#include<vector>
using namespace std;
#define endl "\n"

vector<int> sortArrayByParity(vector<int>&);
int main()
{
  int size;
  cout<<"Size: ";
  cin>>size;
  if(size<=0)
    return -1;
  vector<int> vec(size);
  cout<<"Elements: ";
  for(int&v:vec)
  cin>>v;
  
  sortArrayByParity(vec);
  cout<<"Sorting after parity is: ";
  for(int&v: vec)
  cout<<v<<" ";

  cout<<endl;

  return 0;
}

vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>Parity;
        for(int i=0;i<nums.size();i++)
         {
            if(nums[i]%2==0)
             Parity.push_back(nums[i]);
         }
         for(int i=0;i<nums.size();i++)
         {
            if(nums[i]%2!=0)
             Parity.push_back(nums[i]);
         }
         nums=Parity;
       return nums;
    }
