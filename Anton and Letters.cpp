#include <cctype>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  string str;
  getline(cin,str);

  int count=0;
  sort(str.begin(),str.end());
  for(int i=1;i<str.length();i++)
  {
    if(str[i]==str[i-1])
      continue;

    else if((str[i-1]>='a'&&str[i-1]<='z') )
        count++;
  }

  cout<<count<<endl;

  return 0;
}
