/*
* Author: Muhammad Ramzan
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

template<typename T>
void cinv1(vector<T>& v){
    for(T& i : v) cin>>i;
}

bool isPrime(int n){
  if(n<=1) return false;
  for(int i=2;(long long)i*i<=(long long)n;i++){
    if(n%i==0) return false;
  }
  return true;
}

int has2MorePrimeDivisors(int n){
  int factors=0;
  for(int i=2;(long long)i*i<=(long long)n;i++){
    if(n%i==0 && isPrime(i)){
      factors++;
      while(n%i==0) n/=i;
    }
  }
  return n>1 ? factors+1 : factors;
}

int base(int n){
  if(n==1) return 0;
  for(int i=2;(long long)i*i<=(long long)n;i++){
    if(n%i==0){
      return i;
    }
  }
  return n;
}

void solve(){
  int n; cin>>n;
  vector<int> v(n); cinv1(v);

  if(is_sorted(v.begin(), v.end())){
    cout<<"Bob"<<endl;
    return;
  }
  for(int i:v){
    if(has2MorePrimeDivisors(i)>=2){
      cout<<"Alice"<<endl;
      return;
    }
  }

  for(int i=1;i<n;i++){
    if(base(v[i])<base(v[i-1])){
      cout<<"Alice"<<endl;
      return;
    }
  }

  cout<<"Bob"<<endl;
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

