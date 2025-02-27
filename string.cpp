#include <ios>
#include<iostream>
#include <limits>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string s;
    cin>>s;
    int count=0;
    for(char &ch:s)
    {
      if(ch=='1')
        count++;
    }

    cout<<count<<endl;
  }
  return 0;
}
