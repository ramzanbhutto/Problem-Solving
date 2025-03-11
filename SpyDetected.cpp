#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve();
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }

  return 0;
}
void solve()
{
  int n;
  cin>>n;
  if(n<=0)
    return;
  vector<int> vec(n);
  for(int&v:vec)
   cin>>v;

  vector<int> b=vec;
  sort(b.begin(),b.end());

  for(int i=0;i<n;i++)
  {
   if(vec[i] != b[1])
    {
      cout<<i+1<<endl;
      return;  
    }
  }
}
