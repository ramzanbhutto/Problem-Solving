#include<iostream>
#include<cctype>
using namespace std;
bool detectCapitalUse(string);
int main()
{
  string word;
  cout<<"Enter the word: ";
  cin>>word;
  if(detectCapitalUse(word))
    cout<<"The word is in right capital form."<<endl;
  else
   cout<<"The word is not in right capital form."<<endl;

  return 0;
}

bool detectCapitalUse(string s)
{
  int count=0;
  for(char c:s)
    if(isupper(c))  count++;

  if(count==0 || count==s.size())  return true;
  if(count==1 && isupper(s[0]))  return true;
  return false;
}
