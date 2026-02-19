/*
* Author: Muhammad Ramzan
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define forf(i, a, b) for(int i = (a); i <= (b); ++i)
#define forr(i, a, b) for(int i = (a); i >= (b); --i)

void solve(){
  int n;
  cin>>n;
  vector<int> vec(n), prefix(n), suffix(n);

  cin>>vec[0];
  prefix[0]=vec[0];
  forf(i,1,n-1){
    cin>>vec[i];
    prefix[i]= min(prefix[i-1],vec[i]);
  }

  suffix[n-1]=vec[n-1];
  forr(i,n-2,0){
    suffix[i]= max(suffix[i+1],vec[i]);
  }

  forf(i,0,n-1){
    if(vec[i]==prefix[i] || vec[i]==suffix[i])  cout<<1;
    else cout<<0;
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
