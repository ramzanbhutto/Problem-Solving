#include<iostream>
using namespace std;
int main()
{
  int x,y,z;
  cin>>x>>y>>z;
  
  int Min= min(x,min(y,z));
  int Max= max(x,max(y,z));
  int mid= x+y+z-Min-Max;

  int min_distance= (Max-mid)+(mid-Min);

  cout<<min_distance<<endl;

  return 0;
}

