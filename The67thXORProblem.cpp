#include<bits/stdc++.h>
using namespace std;

using ll=long long;

#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve(){
  int n;
  cin>>n;
  vector<int> vec(n);
  for(int &i:vec) cin>>i;

  int res=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      res= max(res, vec[i]^vec[j]);  // xor all values including, not only max value
    }
  }
  
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
