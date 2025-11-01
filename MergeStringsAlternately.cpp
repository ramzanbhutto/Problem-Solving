#include<iostream>
using namespace std;
string mergeString(string,string);
int main()
{
  string word1,word2;
  cout<<"Enter first string: ";
  cin>>word1;
  cout<<"Enter second string: ";
  cin>>word2;
  cout<<"Merged string: "<<mergeString(word1,word2)<<endl;
  return 0;
}

string mergeString(string s,string t){
  string res="";
  for(int i=0;i<s.length()||i<t.length();i++){
    if(i<s.length())  res+=s[i];  /* or res.push_back(s[i]); */
    if(i<t.length())  res+=t[i];
  }

  return res;
}
