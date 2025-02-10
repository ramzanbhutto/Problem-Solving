#include <cctype>
#include<iostream>
#include<string>
using namespace std;
int main()
{
  string str;
  cin>>str;

  int count1=0;
  for(int i=0; i<str.length();i++)
  {
    if(str[i]>=char(65) && str[i]<=char(90))
      count1++;
  }
  int count2=0;
  for(int i=0; i<str.length();i++)
  {
    if(str[i]>=char(97) && str[i]<=char(122))
      count2++;
  }

  if(count1>count2){
    for(char& i:str)
     cout<<char(toupper(i));
  }

  
  else if(count2>count1){
    for(char& i:str)
     cout<<char(tolower(i));
  }
  else{
   for(char& i:str)
     cout<<char(tolower(i));
  }

  cout<<endl;

  
  return 0;
}
