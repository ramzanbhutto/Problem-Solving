#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using ll= long long;
const ll MOD = 1'000'000'007;

void solve(){
  int n;
  cin>>n;
  int arr[n];
  for(int &i: arr) cin>>i;

  int first=INT_MAX, second=INT_MAX;
  for(int i=0; i<n; i++){
    if(arr[i]<first){
      second=first;
      first=arr[i];
    }
    else if(arr[i]<second && arr[i]!=first){
      second=arr[i];
    }
  }

  cout<<max(first, second-first)<<endl;
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
