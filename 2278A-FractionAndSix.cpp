/*
* Author: Muhammad Ramzan
*/ 

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(){
  int n,m;
  cin>>n>>m;
  string p,q;
  cin>>p>>q;

  int cs1=0, ci1=0, cx1=0;
  int cs2=0, ci2=0, cx2=0;
  int freq[26]={};

  for(int i=0;i<n+m;i++){
    if(i<n){
      if(p[i]=='s') cs1++;
      else if(p[i]=='i') ci1++;
      else if(p[i]=='x') cx1++;
      else freq[p[i]-'a']++;
    }
    if(i<m){
      if(q[i]=='s') cs2++;
      else if(q[i]=='i') ci2++;
      else if(q[i]=='x') cx2++;
      else freq[q[i]-'a']--;
    }
  }

  if(cs1-cs2!=1 || ci1-ci2!=1 || cx1-cx2!=1){
    cout<<"NO\n";
    return;
  }

  for(int c=0;c<26;c++){
    if(freq[c]!=0){
      cout<<"NO\n";
      return;
    }
  }

  cout<<"YES\n";
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
