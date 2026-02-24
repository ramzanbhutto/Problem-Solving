#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
  int n;  cin>>n;
  char d;  cin>>d;
  string s;  cin>>s;

  string ans="";
  bool inserted=false;
  for(int i=0;i<static_cast<int>(s.size());i++){
    if(d>s[i] && !inserted){
      ans.push_back(d);
      inserted=true; 
    }
    ans.push_back(s[i]);
  }

  if(!inserted)  ans.push_back(d);

  cout<<ans<<"\n";
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
