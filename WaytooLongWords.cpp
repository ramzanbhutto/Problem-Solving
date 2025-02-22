#include<iostream>
using namespace std;
#define endl "\n"
int main()
{
  ios_base::sync_with_stdio(false);
  int x;
  cin>>x;
  while(x--)
  {
    string word;
    cin>>word;
    if(word.length()>10)
      cout<<word[0]<<word.length()-2<<word[word.length()-1]<<endl;
    else
      cout<<word<<endl;
  }

  return 0;
}
