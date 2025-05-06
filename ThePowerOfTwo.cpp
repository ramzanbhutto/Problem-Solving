#include<iostream>
using namespace std;
using ll = long long;
void time(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
}
bool IsPower(ll );
ll findPower(ll );
void solve();

int main()
{
  time();

  int t;
  cin>>t;
  while(t--){
    solve();
  } 

  return 0;
}

void solve(){
  
  ll num;
  cin>>num;
  if(IsPower(num)){
    cout<<num<<"\n";
  }
  else{
      cout<<num<<" ";
      cout<<findPower(num)<<"\n";
    }

}

bool IsPower(ll n){
  if(n==0) return false;

  while(n%2==0){
    n/=2;
  }

  return n==1;
}

ll findPower(ll n){
  for(int i=n+1;;++i){
    int t=i;
    while(t%2==0) t/=2;
    if(t==1) return i;
  }
  return -1;
}
