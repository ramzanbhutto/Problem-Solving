#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using ll= long long;
const ll MOD = 1'000'000'007;

void solve(vector<ll>& gas, vector<ll>& drain){
  int n=(int)gas.size();
  vector<ll> net(n);
  ll total=0;
  for(int i=0;i<n;i++){
    net[i]=gas[i]-drain[i];
    total+=net[i];
  }

  if(total<0){
    cout<<"-1\n";
    return;
  }

  ll curr=0;
  int idx=0;

  for(int i=0;i<n;i++){
    curr+=net[i];
    if(curr<0){
      curr=0;
      idx=i+1;
    }
  }

  curr=0;
  bool possible=true;
  for(int i=0;i<n;i++){
    int st= (idx+i)%n;
    curr+=net[st];
    if(curr<0){
      possible=false;
      break;
    }
  }

  if(possible) cout<<idx+1<<endl;
  else cout<<"-1\n";
}


int main(){
  fastio
#ifdef TESTING
  freopen("input.txt", "r", stdin);
#else
#define endl "\n"
#endif

  int n; 
  cin>>n;
  vector<ll> vec1(n), vec2(n);
  for(ll &i: vec1) cin>>i;
  for(ll &i: vec2) cin>>i;

  solve(vec1, vec2);

  return 0;
}
