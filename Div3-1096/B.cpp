#include <bits/stdc++.h>
using namespace std;

using ll=long long;
using ld=long double;

#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

const int MOD = 1e9+7;


void solve(){
  int n; cin>>n;
  string s; cin>>s;
  if(n&1){  // always even
    cout<<"NO\n";
    return;
  }
  int count=0;
  for(char c:s){
    if(c=='(') count++;
  }

  if(count==n/2) cout<<"YES\n";  // half chars must be '(' and half must be ')'
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
