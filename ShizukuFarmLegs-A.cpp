#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using ll= long long;
const ll MOD = 1'000'000'007;

void solve(){
  int n;
  cin>>n;
  if((n&1)!=0){
    cout<<0<<endl;
    return;
  }

  int per= n/2;
  cout<<per/2+1<<endl;
}

int main(){
  fastio
#ifdef TESTING
  freopen("input.txt", "r", stdin);
#else
#define endl "\n"
#endif

  int t;
  cin>>t;

  while(t--){
    solve();
  }

  return 0;
}

