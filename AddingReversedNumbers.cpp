#include<iostream>
using namespace std;
#define ll long long
void solve(ll,ll);
ll reversed(ll);
int main()
{

  int t;
  cin>>t;
  while(t--){
    ll a,b;
    cin>>a>>b;
    solve(a,b);
  }

  return 0;

}

void solve(ll a,ll b){

  ll rev1=reversed(a);
  ll rev2=reversed(b);
  ll sum=rev1+rev2;
  ll rev3=reversed(sum);
  cout<<rev3<<endl;

}

ll reversed(ll n){
  
  ll rev=0;
  while(n>0){
    rev=rev*10+n%10;
    n=n/10;
  }
  return rev;

}
