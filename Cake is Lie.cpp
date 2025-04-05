#include<iostream>
using namespace std;
void solve();
int main()
{
  int t;  cin>>t;
  while(t--) solve();
  return 0;
}
void solve()
{
  int n,m,k;  cin>>n>>m>>k;
  cout<<(n*m-1==k?"YES":"NO")<<endl;
}
