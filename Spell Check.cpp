#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  string name="Timru";
  int t;
  cin>>t;
  while(t--)
  {
    int m; cin>>m;
    string s; cin>>s;
    sort(s.begin(),s.end());
    if(s==name)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  return 0;
}
