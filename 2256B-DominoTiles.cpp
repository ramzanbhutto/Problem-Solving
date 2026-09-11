/*
* Author: Muhammad Ramzan
*/ 

/* answer will always be between 0 and 4 cuz we split string into two independent groups(even and odd positions) */


#include<bits/stdc++.h>
using namespace std;

using ll=long long;
using ld=long double;

#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

const int MOD = 998244353;

void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;

  bool question=true;
  for(const char c:s){
    if(c!='?'){
      question=false;
      break;
    }
  }
  if(question){
    cout<<4<<endl;
    return;
  }

  ll oddWays=0, evenWays=0;
  
  // odd positions
  bool valid=true;
  int x=0;  // first start with 0

  for(int i=0;i<n;i+=2){
    if(s[i]!='?' && s[i]-'0'!=x){
      valid=false;
      break;
    }
    x=1-x;
  }
  if(valid) oddWays++;

  valid=true;
  x=1; // now with 1

  for(int i=0;i<n;i+=2){
    if(s[i]!='?' && s[i]-'0'!=x){
      valid=false;
      break;
    }
    x=1-x;
  }
  if(valid) oddWays++;

  if(oddWays==0){
    cout<<0<<endl;
    return;
  }

  // even positions
  valid=true;
  x=0; // start with 0

  for(int i=1;i<n;i+=2){
    if(s[i]!='?' && s[i]-'0'!=x){
      valid=false;
      break;
    }
    x=1-x;
  }
  if(valid) evenWays++;

  valid=true;
  x=1; // now 1

  for(int i=1;i<n;i+=2){
    if(s[i]!='?' && s[i]-'0'!=x){
      valid=false;
      break;
    }
    x=1-x;
  }
  if(valid) evenWays++;

  cout<<(oddWays*evenWays)%MOD<<endl;

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
