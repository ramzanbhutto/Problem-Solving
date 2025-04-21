#include<iostream>
using namespace std;
#define ll long long
void solve(ll,ll);
bool isPrime(ll);

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int tt;
  cin>>tt;
  while(tt--){
    ll x,k;
    cin>>x>>k;
    solve(x,k);
  }
  return 0;
}

void solve(ll x,ll k){
  if(k>1 && x>1)
    cout<<"NO\n"; 
  else if(k==1){
    if(isPrime(x)) cout<<"YES\n";
    else  cout<<"NO\n";
  }

  else cout<<((k==2)?"YES\n":"NO\n");
}

bool isPrime(ll n){
  if(n<2) return false;

  for(ll i=2;i*i<=n;i++){
    if(n%i==0) return false;
  }
  return true;
}
