#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int boothAlgorithm(vector<int> &s){
  int n=static_cast<int>(s.size());
  vector<int> f(2*n,-1);
  int k=0;

  for(int j=1;j<2*n;j++){
    int sj=s[j%n];
    int i=f[j-k-1];
    while(i!=-1 && sj!=s[(k+i+1)%n]){
      if(sj<s[(k+i+1)%n]) k=j-i-1;
      i=f[i];
    }
    if(sj!=s[(k+i+1)%n]){
      if(sj<s[k%n]) k=j;
      f[j-k]= -1;
    }
    else f[j-k]=i+1;
  }

  return k;
}

void solve(){
  int n,x,y;
  cin>>n>>x>>y;

  vector<int> s(n);
  for(int &i:s) cin>>i;

  vector<int> lr,m;
  for(int i=0;i<x;i++) lr.push_back(s[i]);
  for(int i=x;i<y;i++) m.push_back(s[i]);
  for(int i=y;i<n;i++) lr.push_back(s[i]);

  if(m.empty()){
    for(int i:s) cout<<i<<" ";
    cout<<endl;
    return;
  }

  int minm= *min_element(m.begin(),m.end());
  int ms= static_cast<int>(m.size());
  int idx= boothAlgorithm(m);

  int k=static_cast<int>(lr.size());
  for(int i=0;i<static_cast<int>(lr.size());i++){
    if(minm<lr[i]){
      k=i;
      break;
    }
  }

  for(int i=0;i<k;i++) cout<<lr[i]<<" ";
  for(int i=0;i<ms;i++) cout<<m[(idx+i)%ms]<<" ";
  for(int i=k;i<static_cast<int>(lr.size());i++) cout<<lr[i]<<" ";
  cout<<endl;
}

int main(){
  fastio
  #ifdef TESTING
    freopen("input.txt", "r", stdin);
  #endif

  int t; cin>>t;

  while(t--){
    solve();
  }

  return 0;
}
