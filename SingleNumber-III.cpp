#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> singleNumber(vector<int>& );
int main()
{
  int size;
  cout<<"Size: ";
  cin>>size;
  vector<int> vec(size);
  cout<<"Enter elements: ";
  for(int&v:vec)
   cin>>v;

  vector<int> res = singleNumber(vec);
  cout<<"Single Numbers: ";
  for(int&v:res)
   cout<<v<<" ";
cout<<endl;
  return 0;
}

vector<int> singleNumber(vector<int>& nums)
{
  unordered_map<int,int> freq;
  
  for(int&v:nums)
   freq[v]++;

  vector<int> ans;
  for(int&v:nums)
  {
    if(freq[v]==1)
     ans.push_back(v);
  }

  return ans;
}
