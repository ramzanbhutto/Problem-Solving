#include<iostream>
using namespace std;
void solve();
int main()
{
    int t;
    cin>>t;
    while(t--)
      solve();
    
  return 0;
}
void solve()
{
  int a,b;
  cin>>a>>b;
  if(a<b)
    cout<<a<<" "<<b<<endl;
  else
    cout<<b<<" "<<a<<endl;
}
