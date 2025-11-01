#include<iostream>
using namespace std;
#define ll long long
int main()
{
  ll x;  cin>>x;
  while(x--){
    ll a,b;  cin>>a>>b;
    ll d=abs(a-b);
    cout<<(d+9)/10<<endl;
  }

  return 0;
}
