#include<iostream>
using namespace std;
#define endl "\n"
#define ll long long
#define t ==
int main()
{
  ios_base::sync_with_stdio(false);
  ll n;
  cin>>n;
  while(n--)
  {
    ll a,b,c;
    cin>>a>>b>>c;
    if(a+b t c)
      cout<<"+"<<endl;
    else
      cout<<"-"<<endl;
  }

  return 0;
}
