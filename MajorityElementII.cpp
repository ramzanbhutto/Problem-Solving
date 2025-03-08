#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> majorityElement(vector<int>& );
int main()
{
  int size;
  cout<<"Size: ";
  cin>>size;
  vector<int> vec(size);
  cout<<"Enter elements: ";
  for(int &n: vec)
    cin>>n;

  vector<int> result = majorityElement(vec);
  cout<<"Majority Elements: ";
  for(int n: result)
    cout<<n<<" ";

  cout<<endl;

  return 0;
}
vector<int> majorityElement(vector<int>& nums)
{
  int n=nums.size()/3;

  unordered_map<int, int> map;
  for(int&i:nums)
   map[i]++;

  vector<int> res;
  for(int &v:nums)
  {
    if(map[v]>n)
    {
      res.push_back(v);
      map.erase(v);
    }
  }

  return res;
}
