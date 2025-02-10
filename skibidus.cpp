#include<iostream>
#include<string>
using namespace std;
int main()
{
  int x;
  cin>>x;

  string s[x];
  for(string &t: s)
  cin>>t;


  for(int i=0;i<x;i++)
  {     if(s[i]=="us")
            s[i]="i";
        else if(s[i].length()>1 && s[i][s[i].length()- 1]=='s' && s[i][s[i].length()- 2]== 'u')
        {
            s[i].pop_back();  
            s[i].back()= 'i'; 
        }
  }

  for(int i=0;i<x;i++)
    cout<<s[i]<<endl;

  return 0;

}
