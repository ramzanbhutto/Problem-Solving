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

  int pos= max_element(h.begin(), h.end()) - h.begin();

  vector<ll> leftSum(n,0);
  {
    ll curSum = 0;
    stack<pair<ll,ll>> stk; 
    ll totalCount = 0;

    for(int d=1; d<n; d++){
      int idx= ((pos-d) % n+n) % n;
      ll x= h[idx];
      ll took= 0; 
      while(!stk.empty() && stk.top().first <= x){
        took+= stk.top().second;  // absorb previos count
        curSum-= stk.top().first * stk.top().second;
        stk.pop();
      }
      took+= 1; 
      curSum+= x*took;
      stk.push({x, took});
      totalCount++;
      leftSum[d]= curSum;
     }
  }

  vector<ll> rightSum(n, 0);
  {
    ll curSum = 0;
    stack<pair<ll,ll>> stk;

    for(int d=1; d<n; d++){
      int idx = (pos+d) % n;
      ll x= h[idx];
      ll took= 1;
      while(!stk.empty() && stk.top().first <= x){
        took+= stk.top().second;
        curSum-= stk.top().first * stk.top().second;
       stk.pop();
      }
      curSum+= x*took;
      stk.push({x, took});
      rightSum[d] = curSum;
    }
  }

    for(int l=0; l<n; l++){
      int leftd= (pos-l+n) %n;   
      int rightd= n-1-leftd; 
      ll ans= leftSum[leftd] + rightSum[rightd];
      cout<<ans<<" ";
    }
    cout<<endl;

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
