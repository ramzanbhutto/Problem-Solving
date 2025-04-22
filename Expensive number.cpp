#include<iostream>
#include <string>
using namespace std;
void solve(string );
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    solve(s);
  }
  return 0;
}
void solve(string t){
  int n = t.length();
  bool check=false;
  int zero=0;

  for(int i=n-1;i>=0;i--){
    if(t[i]!='0') check=true;
    else if(check) zero++;
  }
  
  cout<<n-(zero+1)<<"\n";
}
