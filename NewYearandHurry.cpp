#include<iostream>
using namespace std;
int main()
{
  int n,t;
  cin>>n>>t;
  int solved=0;

  for(int i=1; i<=n && 240-t>=5*i;i++)
  {
    t+= 5*i;
    solved++;
  }
  cout<<solved<<endl;


  return 0;
}
