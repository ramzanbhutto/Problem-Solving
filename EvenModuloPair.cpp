#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD 1'000'000'007
#define ll long long

void solve(){
  int n;
  cin>>n;
  vector<int> vec(n);
  for(int &i: vec) cin>>i;

  int x=0, y=0;
  for(int i=0; i<n-1; i++){
    x=vec[i];
    for(int j=i+1; j<n; j++){
      if(x > vec[j]) continue;
      y= vec[j];
      int mod = y % x;
      if((mod & 1) == 0){  // even check
        cout<<x<<" "<<y<<endl;
        return;
      }
    }
  }
 cout<<-1<<endl;

}

int main(){
#ifdef TESTING
  freopen("input.txt", "r", stdin);
#else
#define endl "\n"
#endif

  fastio
  int t;
  cin>>t;

  while(t--){
    solve();
  }

  return 0;
}
