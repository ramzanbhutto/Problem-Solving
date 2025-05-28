#include<iostream>
#include<unordered_set>
using namespace std;

void time(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

void solve(int n){
  string s;
  cin>>s;
  unordered_set<char> unique_chars;
  for(char c:s) unique_chars.insert(c);

  cout<<unique_chars.size()+s.size()<<"\n";
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
