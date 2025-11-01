#include<iostream>
using namespace std;
int main()
{
  int size;
  cin>>size;
  string str[size];

  for(string &s: str)
  cin>>s;

  int sum=0;

  for(string &t: str)
  {
    if(t=="Tetrahedron")
      sum+=4;
    else if(t=="Cube")
      sum+=6;
    else if(t=="Octahedron")
      sum+=8;
    else if(t=="Dodecahedron")
      sum+=12;
    else if(t=="Icosahedron")
      sum+=20;
  
  }

  cout<<sum<<endl;
  return 0;
}
