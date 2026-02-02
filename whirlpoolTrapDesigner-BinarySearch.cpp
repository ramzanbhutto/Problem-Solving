#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using ll= long long;

void solve(){
  int d,r,g,k;
  cin>>d>>r>>g>>k;
  ll b; cin>>b;
  int Wmax; cin>>Wmax;
 
  int gd= g*d;
  ll res= -1;
  int left=r+1, right= Wmax;
  while(left<=right){
    int mid= left+(right-left)/2;
    ll gdw= gd*(mid-r)*1LL;
    int kw= k*mid;
    int kwr= kw*(mid-r);
    ll Ew= (gdw+kwr)*1LL;
    ll Bw= b*(mid*1LL);
    if(Ew>Bw){
      res= mid;
      right= mid-1;
    }
    else left= mid+1;
  }
  
  if(res==-1) cout<<"None\n";
  else cout<<res<<endl;
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

  while(t--){
    solve();
  }

  return 0;
}
