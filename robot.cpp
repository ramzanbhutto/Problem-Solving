#include<iostream>
using namespace std;
#define endl "\n"
bool judgeCircle(string);
int main()
{
  string str;
  cout<<"Enter moves like UD/LL or anything in combination of two letters among:  'U','D','R','L': ";
  cin>>str;
  if(judgeCircle(str))
    cout<<"TRUE"<<endl;
  else
    cout<<"FALSE"<<endl;

  return 0;
}

bool judgeCircle(string r)
{
  int x=0,y=0;
  for(int i=0;i<r.size();i++){
    if(r[i]=='U')
      y++;
    if(r[i]=='D')
      y--;
    if(r[i]=='R')
      x++;
    if(r[i]=='L')
      x--;
  }

  if(x==0 && y==0) return true;

  return false;
}
