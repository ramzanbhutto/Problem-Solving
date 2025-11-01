#include<iostream>
using namespace std;
int scoreString(string);
int main()
{
  ios_base::sync_with_stdio(false);

  string str;
  cout<<"Enter a string: ";
  cin>>str;

  cout<<"Score of string is: "<<scoreString(str)<<endl;

  return 0;
}
int scoreString(string s)
{
  int sum=0;
  for(int i=1;i<s.length();i++)
    sum+= abs(s[i-1]-s[i]);

  return sum;
}
