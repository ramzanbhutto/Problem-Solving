/*
* Author: Muhammad Ramzan
*/ 

#include<bits/stdc++.h>
using namespace std;

using ll=long long;

#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

const int LIMIT=200000;
vector<ll> primes;

void seive(){
  vector<bool> isPrime(LIMIT+1,true);
  isPrime[0]=isPrime[1]=false;
  for(int i=2;i*i<=LIMIT;i++){
    if(!isPrime[i]) continue;
    for(int j=i*i;j<=LIMIT;j+=i) isPrime[j]=false;
  }

  for(int i=2; i<=LIMIT;i++){
    if(isPrime[i]) primes.push_back(i);
  }
}

void solve(){
  ll num;
  cin>>num;

  vector<ll> res(num);

  // gcd of consecutive numbers is always 1. like gcd(1,2)=1 ; so gcd(a,a+1)=1; so first calculating different positions to calculate gcd that will be different on these positions.  

  res[0]=primes[0];
  for(ll i=1;i<num;i++){
    res[i]= primes[i-1]*primes[i];
  }

  for(ll i:res) cout<<i<<" ";
  cout<<endl;
}

int main(){
  fastio
#ifdef TESTING
  freopen("input.txt", "r", stdin);
#endif

  seive();  // precompute at once

  int t;
  cin>>t;

  while(t--){
    solve();
  }

  return 0;
}
