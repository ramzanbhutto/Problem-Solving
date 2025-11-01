#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

void solve();
int main()
{
  int x;
  cin>>x;

  while(x--)
    solve();

  return 0;
}

void solve()
{
  int s;
  cin>>s;
  vector<ll> vec(s);
  for(ll&v:vec)
   cin>>v;

  ll temp=1;
 for(ll& n:vec)
  {
    while(n%2==0){
      n/=2;
      temp*=2;
    }
  }

  sort(vec.begin(),vec.end());
  vec[s-1]*=temp;

  ll sum=0;
  for(ll v:vec)
   sum+=v;

  cout<<sum<<endl;
}
