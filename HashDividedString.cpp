#include<iostream>
using namespace std;
string stringHash(string,int);
int main()
{
  string str;
  cout<<"Enter a string: ";
  cin>>str;
  int k;
  cout<<"Enter the number of parts to divide: ";
  cin>>k;
  cout<<"The hash value of the string is: "<<stringHash(str,k)<<endl;

  return 0;
}

string stringHash(string s, int k){
  string res;
  for(int i=0;i<s.length();i+=k){
    int sum=0,mod;
    for(int j=0;j<k;j++){
      sum+= (s[i+j]- 'a');
    }
    mod = sum % 26;
    res += (mod+'a');
  }

  return res;
}
