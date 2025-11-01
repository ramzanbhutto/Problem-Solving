#include<iostream>
using namespace std;

void time(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}

void solve(string s, string t){
  string ans;
  int i=0,j=0;
  while(i<s.size() && j<t.size()){
    if(s[i]!=t[j])  ans+='1';
    else ans+='0';
    i++;
    j++;
  }

  cout<<ans<<endl;
}

int main(){
  time();
  string s,t;
  cin>>s>>t;

  solve(s,t);
  return 0;
}
