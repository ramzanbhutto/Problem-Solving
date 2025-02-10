#include<iostream>
#include<string>
using namespace std;
bool check(string,string);
int main()
{
  string str1,str2;
  cin>>str1;
  cin>>str2;

  if(check(str1,str2))
  cout<<"YES"<<endl;
  
  else
  cout<<"NO"<<endl;;

  return 0;
}

bool check(string s, string t)
{
  if(s.length()!=t.length())
    return false;

  int j=0;
  string k;
  for(int i=s.length()-1; i>=0; i--)
    k.push_back(s[i]);

  if(k==t)
    return true;
  
return false;

}
