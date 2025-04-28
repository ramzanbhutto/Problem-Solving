#include<iostream>
using namespace std;
string truncateSentence(string,int);
int main()
{
  string str;
  cout<<"Enter a string: ";
  getline(cin,str);
  int k;
  cout<<"Enter the number of words to truncate: ";
  cin>>k;

  cout<<"Truncated string: "<<truncateSentence(str,k)<<endl;
  return 0;
}

string truncateSentence(string s,int k){
  string res="";
  int cnt=0;
  for(int i=0;i<s.length();i++){
    if(s[i]==' ') cnt++;
    if(cnt==k) break;
    res+=s[i];
  }

  return res;
}
