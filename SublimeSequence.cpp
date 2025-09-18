#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define endl '\n'

void solve(){
  int x,n;
  cin>>x>>n;;
  if(!(n%2)) cout<<0<<endl;
  else cout<<x<<endl;
}

int main(){
    fastio
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
