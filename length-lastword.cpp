#include <cctype>
#include<iostream>
#include<string>
using namespace std;
int lengthLast(string);
int main()
{
  string s;
  cout<<"Enter string: ";
  getline(cin,s);

  cout<<"Length of last word in string is: "<<lengthLast(s)<<endl;

  return 0;
}

int lengthLast(string t)
{
  if(t.length()==0)
    return 0;

  int count=0;
  for(int i=0;i<t.length();i++)
  {
    count++;
    if(t[i]==' ')
      count=0;
  }
  return count;
}

