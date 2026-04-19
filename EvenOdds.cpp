#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve(){}

int main(){
  fastio
#ifdef TESTING
  freopen("input.txt", "r", stdin);
#endif

  ll n,k;
  cin>>n>>k;

  ll p;
  if((n&1)==0) p=n/2;
  else p=n/2+1;

  if(k<=p) cout<<2*k-1<<endl;
  else cout<<2*(k-p)<<endl;

  return 0;
}
