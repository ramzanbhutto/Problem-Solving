#include<iostream>
using namespace std;

void time(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
}

int main(){
  time();

  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;
    if(n%4==0) cout<<"YES\n";
    else cout<<"NO\n";
  }

  return 0;
}
