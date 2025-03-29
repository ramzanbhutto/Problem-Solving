#include <algorithm>
#include<iostream>
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
int a,b,c,d;
cin>>a>>b>>c>>d;  
cout<<max(a+b,c+d)<<"\n";
}
