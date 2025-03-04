#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
    int count=0;
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(b>a) count++;
    if(c>a) count++;
    if(d>a) count++;
    
    cout<<count<<endl;
  }

  return 0;
}
