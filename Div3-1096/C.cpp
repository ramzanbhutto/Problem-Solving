#include <bits/stdc++.h>
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
  vector<int> vec(n);
  for(int &i:vec) cin>>i;

  vector<int> div2,div3,div6, independent;
  for(int i=0;i<n;i++){
    if(vec[i]%2==0 && vec[i]%3==0) div6.push_back(vec[i]);
    else if(vec[i]%2==0) div2.push_back(vec[i]);
    else if(vec[i]%3==0) div3.push_back(vec[i]);
    else independent.push_back(vec[i]);
  }

  for(int i:div6) cout<<i<<" ";
  for(int i:div2) cout<<i<<" ";
  for(int i:independent) cout<<i<<" ";
  for(int i:div3) cout<<i<<" ";
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
