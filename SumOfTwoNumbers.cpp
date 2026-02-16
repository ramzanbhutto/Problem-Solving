/*
* Author: Muhammad Ramzan
*/

#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using ll=long long;

void solve(){
  ll num;
  cin>>num;
  if(num==1){
    cout<<"1 0\n";
    return;
  }

  std::function<int(ll)> digit_sum= [](ll n){
    int sum=0;
    while(n>0LL){
      sum+= static_cast<int>(n%10LL);
      n/=10LL;
    }
    return sum;
  };

  int low=0, high=static_cast<int>(num);
  while(low<=high){
    int x=low+(high-low)/2;
    int y= static_cast<int>(num)-x;
    int xs=digit_sum(x);
    int ys=digit_sum(y);
    int dif= abs(xs-ys);
    if(dif==0 || dif==1){
      cout<<x<<" "<<y<<'\n';
      return;
    }
    else if(xs>ys) high=x-1;
    else low=x+1;
  }
}

int main(){
  #ifdef TESTING
    freopen("input.txt", "r", stdin);
  #endif
  fastio

  int t;
  cin>>t;

  while(t--){
    solve();
  }

  return 0;
}
