#include <algorithm>
#include<iostream>
using namespace std;
#define ll long long
int solve(ll,ll,ll);
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int tt;
  cin>>tt;
  while(tt--){
    ll a,b,n;
    cin>>a>>b>>n;
    cout<<solve(a,b,n)<<"\n";
  }

  return 0;
}

int solve(ll a,ll b,ll n){
  int cnt=0;
  for(int i=min(a,b);i<=n;i++){
   if(a>n || b>n) return cnt;
   
   if(a<b) a+=b;
   else b+=a;
   
   cnt++;
  } 

  return cnt;
}
