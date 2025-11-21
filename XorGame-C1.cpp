#include<bits/stdc++.h>
#include <ios>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve(){
  int n;
  cin>>n;
  vector<int> a(n), b(n);

  for(int &i:a) cin>>i;
  for(int &i:b) cin>>i;
    
  int xor_a = 0, xor_b = 0;
  for(int i=0; i<n; i++){
    xor_a ^= a[i];
    xor_b ^= b[i];
  }

  if(xor_a==xor_b){
    cout<<"Tie\n";
    return;
  }

  int flip=-1;
  int i=n-1;
  while(i>=0){
    if(a[i] != b[i]){
      flip=i;
      break;
    }
    i--;
  }

  bool turn= ((flip&1)==0);
  if(turn) cout<<"Ajisai\n";
  else cout<<"Mai\n";
}

int main(){
fastio  
#ifdef TESTING
    freopen("input.txt", "r", stdin);
#else
#define endl "\n"
#endif

  int t;
  cin>>t;
  while(t--) solve();

  return 0;
}
