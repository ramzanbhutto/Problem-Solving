#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define endl '\n'

vector<int> primes;

void seive(int limit= 1000000){ // 10^6 = 1 million
  vector<bool> is_prime(limit+1, true);
  is_prime[0] = is_prime[1] = false;

  for(int i=2; i*i<=limit; i++){
    if(is_prime[i]){
      for(int j=i*i; j<=limit; j+=i){
        is_prime[j] = false;
      }
    }
  }
  for(int i=2; i<=limit; i++){
    if(is_prime[i])  primes.pb(i);
  }
}

bool isPrime(ll n){
    if(n<=1) return false;
    for(ll p: primes){
        if((ll)p*p > n) break;
        if(n%p == 0) return n==p;
    }
    return true;
}

void solve(){
  ll n;
  cin>>n;
  for(ll i=n+1; ; i++){
    if(isPrime(i)){
        cout<<i<<endl;
        return;
  }
 }
}

int main(){
    fastio
    seive();
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
