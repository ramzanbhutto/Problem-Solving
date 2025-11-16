#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll MAX= 3000000;
bool precomputed= false;
vector<ll> primes;

void seive(){
  if(precomputed) return;
  precomputed= true;

  vector<bool> isPrime(MAX+1, true);
  isPrime[0]= isPrime[1]= false;

  for(ll i=2; i*i<=MAX; i++){
    if(isPrime[i]){
      for(ll j=i*i; j<=MAX; j+=i){
        isPrime[j]=false;
      }
    }
  }

  for(ll i=2; i<=MAX; i++){
    if(isPrime[i]){
      primes.push_back(i);
    }
  }
}

ll nthPrime(ll n){
  seive();  // precompute primes
  if(n<=0 || n>primes.size()) return -1;

  return primes[n-1]; // n-1 because of 0-based indexing
}

int main(){
#ifdef TESTING
  freopen("input.txt", "r", stdin);
#else
#define endl "\n"
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll num;
  cin>>num;
  
  ll result= nthPrime(num);
  if(result != -1) cout<<result<<endl;
  

  return 0;
}
