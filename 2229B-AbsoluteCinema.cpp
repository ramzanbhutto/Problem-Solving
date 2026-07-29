/*
* Author: Muhammad Ramzan
*/ 

#include<bits/stdc++.h>
using namespace std;

using ll=long long;
using ld=long double;

#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

const int MOD = 1e9+7;

void solve(){
  int n; cin>>n;
  vector<int> a(n), b(n);
  for(int &i:a) cin>>i;
  for(int &i:b) cin>>i;

  for(int i=0;i<n;i++){
    if(a[i]>b[i]) swap(a[i],b[i]);
  }

  int maxe= *max_element(all(a));
  ll sum=0;
  for(int i:b) sum+=1LL*i;

  cout<<maxe+sum<<endl;
}

int main(){
  fastio
#ifdef TESTING
  freopen("input.txt", "r", stdin);
#endif

  int t;
  cin>>t;

  while(t--){
    solve();
  }

  return 0;
}
