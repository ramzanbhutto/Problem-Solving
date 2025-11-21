#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using ll= long long;
const ll MOD = 1'000'000'007;

void solve(){
  int n;
  cin>>n;
  vector<int> vec(n);
  for(int &i:vec) cin>>i;

  vector<int> pre(n);
  pre[0]= vec[0];
  for(int i=1; i<n; i++) pre[i]= min(pre[i-1], vec[i]);

  vector<int> suf(n);
  suf[n-1]= vec[n-1];
  for(int i=n-2; i>=0; i--) suf[i]= max(suf[i+1], vec[i]);

  int check=0, i=0;
  while(i<n-1){
    if(pre[i] > suf[i+1]){
      check=1;
      break;
    }
    i++;
  }

  if(!check) cout<<"Yes\n";
  else cout<<"No\n";
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
