#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--){
    int a,b,c;
    cin>>a>>b>>c;
    if(c>b && c>a && b>a)
      cout<<"STAIR"<<endl;
    else if(b>a && b>c) 
      cout<<"PEAK"<<endl;
    else
      cout<<"NONE"<<endl;
  }

  return 0;
}
