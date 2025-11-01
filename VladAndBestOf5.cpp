#include<iostream>
using namespace std;

void solve();
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;     cin>>t;
  while(t--) solve();

  return 0;
}

void solve(){
  string s;   cin>>s;
  
  int a=0, b=0;
  for(char c : s){
    if(c=='A') a++;
    else b++;
  }

  if(a>b) cout<<"A\n";
  else cout<<"B\n";
}
