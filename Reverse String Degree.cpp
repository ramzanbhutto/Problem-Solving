#include<iostream>
#include <unordered_map>
using namespace std;
int reverseDegree(string );
int main()
{
  string str;
  cout<<"Enter the string: ";
  cin>>str;
  cout<<"The reverse degree of the string is: "<<reverseDegree(str)<<endl;

  return 0;
}
int reverseDegree(string s)
{
  unordered_map<char,int>map;
  for(char ch='a';ch<='z';ch++)  map[ch]='z'-ch+1;
  for(char ch='A';ch<='Z';ch++)  map[ch]='Z'-ch+1;

  int ans=0;
  for(int i=0;i<s.length();i++)  ans+=(map[s[i]]*(i+1));

  return ans;
}
