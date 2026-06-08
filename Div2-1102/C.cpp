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
  int n;
  cin>>n;
  vector<ll> h(n);
  for(auto &i:h) cin>>i;
        
  for(int l=0; l<n; l++){
    vector<ll> cw(n), ccw(n);
            
    cw[1]= h[l];
    for(int k=2; k<n; k++)  cw[k]= max(cw[k-1], h[(l+k-1)%n]);
            
    ccw[n-1]= h[(l+n-1)%n];
    for(int k=n-2; k>=1; k--)  ccw[k]= max(ccw[k+1], h[(l+k)%n]);
            
    ll ans= 0;
    for(int k=1; k<n; k++)  ans+= min(cw[k], ccw[k]);
            
    cout<<ans<<" ";
  }
  cout<<'\n';

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

