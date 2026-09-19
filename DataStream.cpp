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

int main(){
  fastio
#ifdef TESTING
  freopen("input.txt", "r", stdin);
#endif

  int n;
  while(cin>>n){
    vector<ll>data(n);
    for(ll &i:data) cin>>i;

    vector<ll> d(n-1);
    for(int i=1;i<n;i++){
      d[i-1]= abs(data[i]-data[i-1]);
    }

    sort(all(d));

    if(d[0]<1){
      cout<<"Not UP\n";
      continue;
    }

    ll C=0;
    if(n-1>1) C=d[1]-d[0];
    bool diff=true;
    for(int i=1;i<n-1;i++){
      if(d[i]-d[i-1]!=C){
        diff=false;
        break;
      }
    }

    if(diff) cout<<"UP\n";
    else cout<<"Not UP\n";
  }

  return 0;
}
