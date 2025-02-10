#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  char str[n];
  for(char &i: str)
  cin>>i;
 
  int countA=0,countB=0;

  for(int i=0; i<n; i++)
  {
    if(str[i]=='A')
      countA++;
    if(str[i]=='D')
      countB++;
  }

  if(countA>countB)
    cout<<"Anton"<<endl;
  else if(countB>countA)
      cout<<"Danik"<<endl;
  else if(countA==countB)
      cout<<"Friendship"<<endl;
  
  return 0;
}
