#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll MAX= 1000000;  // 10^6
vector<bool> isPrime(MAX+1, true);

void seive(){
  isPrime[0]=isPrime[1]= false;

  for(int i=2; i*i<=MAX; i++){
    if(isPrime[i]){
      for(int j=i*i; j<=MAX; j+=i){
        isPrime[j]= false;
      }
    }
  }
}

ll integerSqrt(ll x){
  ll left=1, right=1e6; // sqrt(10^12) <= 10^6

  while(left<=right){
    ll mid= left+ (right-left)/2;
    ll sq= mid*mid;
    if(sq==x) return mid;
    if(sq<x) left= mid+1;
    else right= mid-1;
  }

  return right;
}

int main(){
#ifdef TESTING
  freopen("input.txt", "r", stdin);
#else
#define endl "\n"
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  seive();

   int n;
   cin>>n;
  
  while (n--){
    ll x;
    cin>>x;
    ll root= integerSqrt(x);

    if(root*root==x && root<=MAX && isPrime[root]) cout<<"YES\n";
    else cout<<"NO\n";
  }

  return 0;
}

