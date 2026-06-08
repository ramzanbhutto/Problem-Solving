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
  vector<int> vec(n);
  for(int &i:vec) cin>>i;

  sort(vec.begin(),vec.end(),greater<int>());

  bool b=true;
  for(int i=2;i<n;i++){
    if(vec[i-1]==0 || vec[i]!=vec[i-2]%vec[i-1]){
      b=false;
      break;
    }
  }

  if(b && n>=2) cout<<vec[0]<<" "<<vec[1]<<endl;
  else cout<<-1<<endl;
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
