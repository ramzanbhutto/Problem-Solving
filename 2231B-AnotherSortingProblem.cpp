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

void solve(){
  int n;
  cin>>n;
  vector<int> vec(n);
  for(int &i:vec) cin>>i;
 
  int maxdif=0;
  for(int i=1;i<n;i++)  maxdif= max(maxdif, vec[i-1]-vec[i]);
  for(int i=1;i<n;i++)  if(vec[i]<vec[i-1]) vec[i]+= maxdif;

  if(is_sorted(vec.begin(), vec.end())) cout<<"YES\n";
  else cout<<"NO\n";
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
