#include <cctype>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int size; cin>>size;
  char str[size]; 

  for(char &ch: str)
   cin>>ch;

  string s="abcdefghijklmnopqrstuvwxyz";
  
  sort(str,str+size);
  for(char& i:str)
      cout<<i;
  bool flag=false;
  for(int i=0;i<size;i++)
  {
      for(int j=0;j<size;j++)
    {
      if(s[i]==char(tolower(str[j])))
      {
        flag=true;
      }
      else
          flag=false;
    }
  }

  if(flag)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  return 0;
}
