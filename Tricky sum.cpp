#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
void solve(ll);
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
   ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    solve(n);
  }
  return 0;
}
void solve(ll n){
ll total_sum=n*(n+1)/2;
  ll power2=1, power2_sum=0;
  while(power2<=n){
    power2_sum+=power2;
    power2*=2;
  }
  cout<<total_sum-(2*power2_sum)<<endl;
}
