#include<iostream>
using namespace std;
int Robot(string,int);
int main()
{
  int n; cin>>n;
  string str;
  cin>>str;
  cout<<Robot(str,n)<<endl;
  return 0;
}
int Robot(string s,int n){

  int count=0;
  for(int i=0;i<n;i++){
    int x=0,y=0;
    for(int j=i;j<n;j++){
      if(s[j]=='U') y++;
      else if(s[j]=='D') y--;
      else if(s[j]=='L') x--;
      else if(s[j]=='R') x++;
      if(x==0 && y==0) count++;
    }
  }
  
 return count;
}
