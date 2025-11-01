#include <iostream>
using namespace std;
int main()
{
  int x;
  cin>>x;
  int count;
  string t="codeforces";
  while(x--)
  {
    count=0;
    string s;
    cin>>s;
    for(int i=0;i<10;i++)
    {
      if(s[i]!=t[i])
        count++;
    }
    cout<<count<<endl;
  }


 return 0;
}
