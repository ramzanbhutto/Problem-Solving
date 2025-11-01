#include<iostream>
#include<string>
using namespace std;
int main()
{
  string str;
  cin>>str;

  cout<<char(toupper(str[0]));
  for(int i=1; i<str.length(); i++)
    cout<<str[i];

  cout<<endl;
  return 0;
}
