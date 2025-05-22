#include<iostream>
#include<unordered_map>
using namespace std;

void time(){
  iostream::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
}

void solve(int n){
  string s;
  cin>>s;

  unordered_map<char,int> mp;
  for(char c:s) mp[c]++;

  if(mp['U'] & 1) cout<<"YES\n"; /* comparing lsb with 1. If it is one then num is odd else even */
  else cout<<"NO\n";

}

int main(){
  time();

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    solve(n);
  }

  return 0;
}
