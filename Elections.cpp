#include <algorithm>
#include<iostream>
using namespace std;
#define ll long long

int main(){
  int t;
  cin>>t;

  while(t--){
    ll a,b,c;
    cin>>a>>b>>c;

    cout<<max(0LL, max(b,c) -a+1)<<" ";
    cout<<max(0LL, max(a,c) -b+1)<<" ";
    cout<<max(0LL, max(a,b) -c+1)<<endl;
  }

  return 0;
}
