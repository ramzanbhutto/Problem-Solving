#include<iostream>
using namespace std;
int main()
{
  int x;
  cin>>x;
  while(x--)
  {
    string s;
    cin>>s;
    if(s[0]+s[1]+s[2]==s[3]+s[4]+s[5])   //comparing using asci codes of digits
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }

  return 0;
}
