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
  int n,k;
  cin>>n>>k;
  string s,z;
  cin>>s>>z;

  ll ps=0,pz=0,px=0;
  for(int i=0;i<n;i++){
    int sx= s[i]-'0';
    int zx= z[i]-'0';
    ps+=sx;
    pz+=zx;
    px+= (sx^zx);
  }

  ll cs,cz,cx;
  ll total= (1LL<<k)+1;  // 2^k+1 elements
  if(k&1) cs=cz=cx= (total)/3;
  else{
    cx= (total-1)/3;
    cs=cz=(cx+1);
  }

  ll res= cs*(ps*(n-ps)) + cz*(pz*(n-pz)) + cx*(px*(n-px));
  cout<<res<<endl;
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

