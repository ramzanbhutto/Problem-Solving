#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
using ll=long long;

void solve(){
  ll n,k;
  cin>>n>>k;

  if(!(n%k)) cout<<1<<endl;
  else if(!(k%n)) cout<<k/n<<endl;
  else if(n<k) cout<<(k/n)+1<<endl;
  else cout<<2<<endl;
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
