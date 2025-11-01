#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int arr[a];
  for(int &i:arr)  
  cin>>i;

  int teams=0;
  for(int i=0;i<a;i++)
    if(5-arr[i]>=b) teams++;

  cout<<teams/3<<endl;
  return 0;
}
