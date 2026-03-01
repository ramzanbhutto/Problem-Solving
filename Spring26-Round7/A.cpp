#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
using ll=long long;

void solve(){}

int main(){
  fastio
  #ifdef TESTING
    freopen("input.txt", "r", stdin);
  #endif

  int n; cin>>n;
  string s; cin>>s;
 
  int count0=0, count1=0;
  for(int i=0; i<n; i++){
    if(s[i]=='0') count0++;
    else count1++;
  }

  int ans = min(count0, count1);
  ans*=2;
  ans = n-ans;
  cout<<ans<<endl;
  return 0;
}
