#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
  int x;
  cin>>x;
  while(x--)
  {
    int a,b;
    cin>>a>>b;
    if(a%b==0) cout<<0<<endl;
    else cout<<b-(a%b)<<endl;
  }
  return 0;
}
