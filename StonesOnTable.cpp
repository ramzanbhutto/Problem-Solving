#include<iostream>
using  namespace std;
int main()
{
  int x;
  cin>>x;
  char ch[x];
  for(int i=0;i<x;i++)
  {
    cin>>ch[i];
  }

  int count=0;
  for(int i=1;i<x;i++)
  {
    if(ch[i]==ch[i-1])
    {
      count++;
    }
  }
  cout<<count<<endl;

  return 0;
}
