#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using ll= long long;
const ll MOD = 1'000'000'007;

void solve(vector<int>& arr, int l, int r){
  unordered_map<int,int> freq;
  int segment= r-l+1;
  int threshold= segment/2;

  for(int i=l-1;i<r;i++)  freq[arr[i]]++;
  
  int dominant=0, maxCount=0;
  for(auto &it: freq){
    if(it.second>maxCount){
      maxCount= it.second;
      dominant= it.first;
    }
  }

  if(maxCount>threshold) cout<<dominant<<"\n";
  else cout<<"0\n";
}

int main(){
  fastio
#ifdef TESTING
  freopen("input.txt", "r", stdin);
#else
#define endl "\n"
#endif

  int n,q;
  cin>>n>>q;

  vector<int> arr(n);
  for(int &i: arr) cin>>i;

  while(q--){
    int l,r;
    cin>>l>>r;
    if(l<1 || r>n || l>r){
      cout<<"0\n";
      continue;
    }
    solve(arr,l,r);
  }

  return 0;
}

