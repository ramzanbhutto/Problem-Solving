#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;

  while(t--){
    int n; cin>>n;
    string s; cin>>s;
    string temp=s;
    sort(temp.begin(),temp.end());
    
    if(s==temp) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

  }
  return 0;
}
