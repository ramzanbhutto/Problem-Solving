#include<iostream>
using namespace std;

using ll=long long;
using ld=long double;
const ll mod=1e9+7;

ll powSimple(ll a, ll b){
  ll res=1;
  while(b>0){
    if(b&1) res=res*a;
    a=a*a;
    b>>=1;
  }
  return res;
}

ll powMod(ll a, ll b){
  ll res=1;
  while(b>0){
    if(b&1) res=res*a%mod;
    a=a*a%mod;
    b>>=1;
  }
  return res;
}

ld powDouble(ld a, ll b){
  ld res=1.0;
  while(b>0){
    if(b&1) res=res*a;
    a=a*a;
    b>>=1;
  }
  return res;
}

ld fmod(ld a, ll m){
  return a - (ll)(a/m)*m;
}

ll powModDouble(ld a, ll b){
  ld res=1.0;
  while(b>0){
    if(b&1) res=fmod(res*a, mod);
    a=fmod(a*a, mod);
    b>>=1;
  }
  return (ll)res;
}

ld powDoubleInv(ld a, ll b){
  ll exp= static_cast<ll>(b);
  if(exp<0){
    exp=-exp;
    a=1.0/a;
  }
  ld res=1.0;
  while(exp>0){
    if(exp&1) res=res*a;
    a=a*a;
    exp>>=1;
  }
  return res;
}

int main(){
  ll a,b;
  cout<<"Enter base and exponent(long long): ";
  cin>>a>>b;
  cout<<"powSimple: "<<powSimple(a,b)<<endl;
  cout<<"powMod: "<<powMod(a,b)<<endl;
  ld x;
  cout<<"Enter base(double) and exponent(long long): ";
  cin>>x>>b;
  cout<<"powDouble: "<<powDouble(x,b)<<endl;
  cout<<"powModDouble: "<<powModDouble(x,b)<<endl;
  cout<<"powDoubleInv: "<<powDoubleInv(x,b)<<endl;
  return 0;
}
