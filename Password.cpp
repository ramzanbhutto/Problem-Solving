/*
* Author: Muhammad Ramzan
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
const ll MOD = 1e9 + 7;

template<typename T>
T mod_pow(T base, T exp, T mod){
    T result = 1;
    base%= mod;
    while(exp > 0){
      if(exp & 1) result= (result * base) % mod;
      base= (base * base) % mod;
      exp>>= 1;
    }
  return result;
}

template<typename T>
T mod_inv(T a, T mod){   
    return mod_pow(a, mod - 2, mod);
}

template<typename T>
T mod_mul(T a, T b, T mod){
    return ((a % mod) * (b % mod)) % mod;
}

template<typename T>
T mod_div(T a, T b, T mod){
    return mod_mul(a, mod_inv(b, mod), mod);
}

template<typename T>
T combinatorics(T n, T r, T mod){
    if(r > n) return 0;
    if(r == 0 || r == n) return 1;
    vector<T> fact(n + 1, 1);
    for(T i = 2; i <= n; ++i){
        fact[i] = mod_mul(fact[i - 1], i, mod);
    }
    return mod_div(fact[n], mod_mul(fact[r], fact[n - r], mod), mod);
}

void solve(){
  int n;
  cin>>n;
  int x;
  for(int i = 0; i < n; ++i) cin>>x;

  int allowed=10-n; /* total digits are 10(0-9) and n digits are not allowed, so 10-n digits are allowed */
  if(allowed<2){
    cout<<0<<endl;
    return;
  }

  ll ways= combinatorics<ll>(allowed, 2LL, MOD); /* we have to choose 2 distinct digits from the allowed digits */
  ways= mod_mul<ll>(ways, 6LL, MOD); /* there are 4 digits and 2 distinct digits, so we can arrange them in 4!/(2!*2!)=6 ways [repetition of 2 digits like AABB]*/

  cout<<ways<<endl;
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
