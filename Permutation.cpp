#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
void solve(vector<int>&,int);
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n; 
  cin>>n;
  vector<int>v(n);
  for(int &i:v) cin>>i;

  solve(v,n);
  return 0;
}
void solve(vector<int>& nums,int n){
  
  unordered_set<int> s;
  int outofrange=0;

  for(int i:nums){
    if(i>=1 && i<=n) s.insert(i);
    else outofrange++;
  } 
  
  int missing= n-s.size();
  
  cout<<max(outofrange,missing)<<endl;
}
