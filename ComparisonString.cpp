#include<iostream>
using namespace std;

void time(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
}

void solve(int n){
  string s;
  cin>>s;
  int curr=1,maxe=1;

  for(int i=1; i<n ;i++){
    if(s[i] == s[i-1]) curr++;
    else curr=1;

    maxe = max(maxe, curr);
  }

  cout<<maxe+1<<endl;
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
