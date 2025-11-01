#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
    string s[3];
    cin>>s[0]>>s[1]>>s[2];
    cout<<s[0][0]<<s[1][0]<<s[2][0]<<endl;
  }
  return 0;
}
