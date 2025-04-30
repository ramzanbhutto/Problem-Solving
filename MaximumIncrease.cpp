#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int main()
{
  ll n;  cin>>n;
  vector<ll> vec(n);
  for(ll &v:vec) cin>>v;
 
  int crn=1;
  int minxLen=1;  // minimum possible length is 1

  for(ll i=1;i<n;i++){
    if(vec[i]>vec[i-1]){
      crn++;
      if(crn>minxLen) minxLen=crn;
    }
   
    else crn=1;
  }

  cout<<minxLen<<"\n";
  
  return 0;
}
