#include<iostream>
#include<vector>
using namespace std;
#define ll long long
void solve(int,int);
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    solve(a,b);
  }

  return 0;
}
void solve(int a,int b)
{
  vector<int> vec(a*b);
  for(int &v:vec)
    cin>>v;

  ll sum=0;
  int median=(a/2)+1;
  int index= a*b-median;
   
  for(int n=0;n<b;n++)
  {
    sum+=vec[index];
    index-=median;
  }
  cout<<sum<<endl;
}
