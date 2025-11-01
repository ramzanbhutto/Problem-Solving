#include<iostream>
#include<string>
using namespace std;
#define endl "\n"
int main()
{
  int x;
  cin>>x;
  string str[x][2];
  
  for(int i=0;i<x;i++){
    for(int j=0;j<2;j++)
      cin>>str[i][j];
  }
  char temp;
  for(int i=0;i<x;i++){
      temp=str[i][0][0];
      str[i][0][0]=str[i][1][0];
       str[i][1][0]=temp;
  }

  for(int i=0;i<x;i++){
    for(int j=0;j<2;j++)
      cout<<str[i][j]<<" ";
    cout<<endl;
  }


  return 0;
}
