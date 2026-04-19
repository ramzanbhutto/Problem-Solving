#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve(string s){
  if(s[0]!='1'){
    cout<<"NO\n";
    return;
  }

  int n=s.length();
  for(int i=0;i<n;i++){
    if(s[i]!='1' && s[i]!='4'){
      cout<<"NO\n";
      return;
    }

    if(i+2<n){
      if(s[i]=='4' && s[i+1]=='4' && s[i+2]=='4'){
        cout<<"NO\n";
        return;
      }
    }
  }

  cout<<"YES\n";
}

int main(){
  fastio
#ifdef TESTING
  freopen("input.txt", "r", stdin);
#endif

  string s;
  cin>>s;

  solve(s);

  return 0;
}
