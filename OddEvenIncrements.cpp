#include<iostream>
#include <vector>
using namespace std;

void time(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}

void solve(int n){
  vector<int> a(n);
  for(int &i:a)  cin>>i;

  vector<int> odd, even;
  for(int i=1;i<n;i+=2)  odd.push_back(a[i]);
  for(int i=0;i<n;i+=2)  even.push_back(a[i]);

  bool odde=true, evene=true;

  for(int i=1;i<odd.size();i++){
    if(odd[i]%2 != odd[0]%2) odde=false;
  }
  for(int i=1;i<even.size();i++){
    if(even[i]%2 != even[0]%2) evene=false;
  }

  if(odde && evene)  cout<<"YES\n";
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
