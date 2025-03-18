#include <algorithm>
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main()
{
  int t; 
  cin>>t;

  vector<int> v(t);
  for(int &n:v)   cin>>n;

  unordered_set<int> set;
  vector<int> res;
  for(int i=t-1;i>=0;i--){
    if(set.find(v[i])==set.end()){
      set.insert(v[i]);
      res.push_back(v[i]);
    }
  }
  reverse(res.begin(),res.end());
  cout<<res.size()<<endl;

  for(auto i:res){
    cout<<i<<" ";
  }
  cout<<endl;

  return 0;
}
