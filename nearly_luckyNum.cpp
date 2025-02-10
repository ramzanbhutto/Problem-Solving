#include<iostream>
#include<string>
using namespace std;
int main()
{
  long long int n;
  cin>>n;

  if(n<1){
    cout<<"NO"<<endl;
    return 0;
  }

  string s = to_string(n);
 
  int count=0;
  for(int i=0 ;i<s.length(); i++)
  {
    if(s[i]=='4' || s[i]=='7')
      count++;
  }

  if(count==4 || count==7)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;

  return 0;
}
