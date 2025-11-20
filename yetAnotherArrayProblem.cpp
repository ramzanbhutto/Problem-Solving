// answer is always a prime
// smallest answer can be 2 and largest possible answer can be 53 , added till 59 for safety
// gcd(x,p)==1  -> where 'x' is the number and 'p' is the prime number
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD 1'000'000'007
#define ll long long

ll find_gcd(ll a, ll b){
  if(a<0) a=-a;
  if(b<0) b=-b;
  while(b){
    ll r= a%b;
    a=b;
    b=r;
  }

  return a;
}

void solve(){
  int n;
  cin>>n;
  vector<ll>vec(n);
  for(ll &i: vec) cin>>i;

  vector<ll> coprimes= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53, 59}; // there product= 1.something x 10^21  -> enough for cases till 10^18

  for(ll p: coprimes){
    for(ll x: vec){
     // if(find_gcd(x,p)==1){  // do this or just the below statement
       if(x%p){  // must be non-zero
       cout<<p<<endl;
        return;
      }
    }
  }

  cout<<-1<<endl;
}


int main(){
#ifdef TESTING
  freopen("input.txt", "r", stdin);
#else
#define endl "\n"
#endif

  fastio
  int t;
  cin>>t;

  while(t--){
    solve();
  }

  return 0;
}
