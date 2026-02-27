#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using ll=long long;

template<typename T>
void cinv(vector<T> &v){
    for(auto &it:v) cin>>it;
}

void solve(){
  ll k; cin>>k;
  if(k<0LL)  k=-1LL*k;
  if(k==0LL){
    cout<<3<<endl;
    return;
  }

  ll sum=0, n=0;
  while(sum<k || ((sum-k)&1)){  
    n++;
    sum+=n;
  }

  cout<<n<<endl;
}

int main(){
  fastio
  #ifdef TESTING
    freopen("input.txt", "r", stdin);
  #endif

  int t; cin>>t;
  while(t--){
    solve();
    if(t) cout<<endl;
  }

  return 0;
}
