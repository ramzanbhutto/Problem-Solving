#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using ll=long long;

template<typename T>
void cinv(vector<T> &v){
    for(auto &it:v) cin>>it;
}
 
int casee=0;

void solve(){
  int n,a;
  cin>>n>>a;

  int cnt=1;
  ll rem=a%n;
  while(rem!=0){
    rem=(rem*10+a)%n;
    cnt++;
  }

  cout<<"Case "<<++casee<<": "<<cnt<<"\n";
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
