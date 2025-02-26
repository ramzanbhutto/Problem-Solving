#include<iostream>
#include <limits>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  
  int count=0;
  while(a<=b){
    a*=3;
    b*=2;
    ++count;
  }
  cout<<count<<endl;

  cin.ignore(numeric_limits<streamsize>::max(),'\n');
  
  return 0;
}
