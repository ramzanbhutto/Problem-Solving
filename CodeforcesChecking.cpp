#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
  int n;  cin>>n;
  string s="codeforces";
  unordered_map<char,int> mp;
  for(char &a:s)
   mp[a]++;

  while(n--){
    char ch; cin>>ch;
    if(mp[ch]>0)   cout<<"YES"<<endl;
    else           cout<<"NO"<<endl;
  }

  return 0;
}
