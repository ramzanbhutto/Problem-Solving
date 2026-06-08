/*
* Author: Muhammad Ramzan
*/ 

#include<bits/stdc++.h>
using namespace std;

using ll=long long;
using ld=long double;

#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

vector<ll> palindromes;
bool computed=false;

void precompute(){
  if(computed) return;
  computed=true;
  for(ll i=0;i<=9999;i++){
    string s= to_string(i);
    string r=s;
    reverse(r.begin(),r.end());
    if(s==r) palindromes.push_back(i);
  }
}

void solve(){
  ll n;
  cin>>n;
  bool found=false;
  for(ll i:palindromes){
   if(i>n) break;
   if((n-i)%12==0){
    cout<<i<<" "<<(n-i)<<endl;
    found=true;
    break;
   }
  }

  if(!found) cout<<-1<<endl;
}

int main(){
  fastio
#ifdef TESTING
  freopen("input.txt", "r", stdin);
#endif

  precompute();

  int t;
  cin>>t;

  while(t--){
    solve();
  }

  return 0;
}
